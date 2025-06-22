# mypy: disable-error-code="operator,valid-type,misc"
"""
Database models and utilities for DAO treasury reporting.

This module defines Pony ORM entities for:
- Blockchain networks (:class:`Chain`)
- On-chain addresses (:class:`Address`)
- ERC-20 tokens and native coin placeholder (:class:`Token`)
- Hierarchical transaction grouping (:class:`TxGroup`)
- Treasury transaction records (:class:`TreasuryTx`)
- Streams and StreamedFunds for streaming payments

It also provides helper functions for inserting ledger entries,
resolving integrity conflicts, caching transaction receipts,
and creating SQL views for reporting.
"""

import typing
from asyncio import Semaphore
from decimal import Decimal, InvalidOperation
from functools import lru_cache
from logging import getLogger
from os import path
from pathlib import Path
from typing import TYPE_CHECKING, Dict, Final, Tuple, Union, final
from datetime import date, datetime, time, timezone

from a_sync import AsyncThreadPoolExecutor
from brownie import chain
from brownie.convert.datatypes import HexString
from brownie.exceptions import EventLookupError
from brownie.network.event import EventDict, _EventItem
from brownie.network.transaction import TransactionReceipt
from eth_typing import ChecksumAddress, HexAddress, HexStr
from eth_portfolio.structs import (
    InternalTransfer,
    LedgerEntry,
    TokenTransfer,
    Transaction,
)
from pony.orm import (
    Database,
    InterfaceError,
    Optional,
    PrimaryKey,
    Required,
    Set,
    TransactionIntegrityError,
    commit,
    composite_key,
    composite_index,
    db_session,
    select,
)
from y import EEE_ADDRESS, Contract, Network, convert, get_block_timestamp_async
from y.contracts import _get_code
from y.exceptions import ContractNotVerified

from dao_treasury.constants import CHAINID
from dao_treasury.types import TxGroupDbid, TxGroupName


SQLITE_DIR = Path(path.expanduser("~")) / ".dao-treasury"
"""Path to the directory in the user's home where the DAO treasury SQLite database is stored."""

SQLITE_DIR.mkdir(parents=True, exist_ok=True)


_INSERT_THREAD = AsyncThreadPoolExecutor(1)
_SORT_THREAD = AsyncThreadPoolExecutor(1)
_SORT_SEMAPHORE = Semaphore(50)

_UTC = timezone.utc

db = Database()

logger = getLogger("dao_treasury.db")


@final
class BadToken(ValueError):
    """Raised when a token contract returns invalid metadata.

    This exception is thrown if the token name or symbol is empty
    or cannot be decoded.

    Examples:
        >>> raise BadToken("symbol for 0x0 is ''")
    """


# makes type checking work, see below for info:
# https://pypi.org/project/pony-stubs/
DbEntity = db.Entity


@final
class Chain(DbEntity):
    """Pony ORM entity representing a blockchain network.

    Stores human-readable network names and numeric chain IDs for reporting.

    Examples:
        >>> Chain.get_dbid(1)  # Ethereum Mainnet
        1

    See Also:
        :meth:`get_or_insert`
    """

    _table_ = "chains"

    chain_dbid = PrimaryKey(int, auto=True)
    """Auto-incremented primary key for the chains table."""

    chain_name = Required(str, unique=True)
    """Name of the blockchain network, e.g., 'Mainnet', 'Polygon'."""

    chainid = Required(int, unique=True)
    """Numeric chain ID matching the connected RPC via :data:`~y.constants.CHAINID`."""

    addresses = Set("Address", reverse="chain")
    """Relationship to address records on this chain."""

    tokens = Set("Token", reverse="chain")
    """Relationship to token records on this chain."""

    treasury_txs = Set("TreasuryTx")
    """Relationship to treasury transactions on this chain."""

    @staticmethod
    @lru_cache(maxsize=None)
    def get_dbid(chainid: int = CHAINID) -> int:
        """Get or create the record for `chainid` and return its database ID.

        Args:
            chainid: Numeric chain identifier (default uses active RPC via :data:`~y.constants.CHAINID`).

        Examples:
            >>> Chain.get_dbid(1)
            1
        """
        with db_session:
            return Chain.get_or_insert(chainid).chain_dbid  # type: ignore [no-any-return]

    @staticmethod
    def get_or_insert(chainid: int) -> "Chain":
        """Insert a new chain record if it does not exist.

        Args:
            chainid: Numeric chain identifier.

        Examples:
            >>> chain = Chain.get_or_insert(1)
            >>> chain.chain_name
            'Mainnet'
        """
        entity = Chain.get(chainid=chainid) or Chain(
            chain_name=Network.name(chainid),
            chainid=chainid,
            # TODO: either remove this or implement it when the dash pieces are together
            # victoria_metrics_label=Network.label(chainid),
        )
        commit()
        return entity


@final
class Address(DbEntity):
    """Pony ORM entity representing an on-chain address.

    Records both contract and externally owned addresses for tracing funds.

    Examples:
        >>> Address.get_dbid("0x0000000000000000000000000000000000000000")
        1

    See Also:
        :meth:`get_or_insert`
    """

    _table_ = "addresses"

    address_id = PrimaryKey(int, auto=True)
    """Auto-incremented primary key for the addresses table."""

    chain = Required(Chain, reverse="addresses")
    """Reference to the chain on which this address resides."""

    address = Required(str, index=True)
    """Checksum string of the on-chain address."""

    nickname = Optional(str)
    """Optional human-readable label (e.g., contract name or token name)."""

    is_contract = Required(bool, index=True)
    """Flag indicating whether the address is a smart contract."""

    composite_key(address, chain)
    composite_index(is_contract, chain)

    if TYPE_CHECKING:
        token: Optional["Token"]
        treasury_tx_from: Set["TreasuryTx"]
        treasury_tx_to: Set["TreasuryTx"]

    token = Optional("Token", index=True)
    """Optional back-reference to a Token if this address is one."""
    # partners_tx = Set('PartnerHarvestEvent', reverse='wrapper')

    treasury_tx_from = Set("TreasuryTx", reverse="from_address")
    """Inverse relation for transactions sent from this address."""

    treasury_tx_to = Set("TreasuryTx", reverse="to_address")
    """Inverse relation for transactions sent to this address."""

    streams_from = Set("Stream", reverse="from_address")
    streams_to = Set("Stream", reverse="to_address")
    streams = Set("Stream", reverse="contract")
    # vesting_escrows = Set("VestingEscrow", reverse="address")
    # vests_received = Set("VestingEscrow", reverse="recipient")
    # vests_funded = Set("VestingEscrow", reverse="funder")

    def __eq__(self, other: Union["Address", ChecksumAddress, "Token"]) -> bool:  # type: ignore [override]
        if isinstance(other, str):
            return CHAINID == self.chain.chainid and other == self.address
        elif isinstance(other, Token):
            return self.address_id == other.address.address_id
        return super().__eq__(other)

    __hash__ = DbEntity.__hash__

    @property
    def contract(self) -> Contract:
        return Contract(self.address)

    @staticmethod
    @lru_cache(maxsize=None)
    def get_dbid(address: HexAddress) -> int:
        """Get the DB ID for an address, inserting if necessary.

        Args:
            address: Hex string of the address (any case, any prefix).

        Examples:
            >>> Address.get_dbid("0x0000000000000000000000000000000000000000")
            1
        """
        with db_session:
            return Address.get_or_insert(address).address_id  # type: ignore [no-any-return]

    @staticmethod
    def get_or_insert(address: HexAddress) -> "Address":
        """Insert or fetch an :class:`~dao_treasury.db.Address` for `address`.

        If the address has on-chain code, attempts to label it using
        the verified contract name or fallback label.

        Args:
            address: Hex address string.

        Examples:
            >>> addr = Address.get_or_insert("0x0000000000000000000000000000000000000000")
            >>> addr.is_contract
            False
        """
        checksum_address = convert.to_address(address)
        chain_dbid = Chain.get_dbid()

        if entity := Address.get(chain=chain_dbid, address=checksum_address):
            return entity  # type: ignore [no-any-return]

        if _get_code(checksum_address, None).hex().removeprefix("0x"):
            try:
                nickname = (
                    f"Contract: {Contract(checksum_address)._build['contractName']}"
                )
            except ContractNotVerified:
                nickname = f"Non-Verified Contract: {checksum_address}"

            entity = Address(
                chain=chain_dbid,
                address=checksum_address,
                nickname=nickname,
                is_contract=True,
            )

        else:

            entity = Address(
                chain=chain_dbid,
                address=checksum_address,
                is_contract=False,
            )

        commit()

        return entity  # type: ignore [no-any-return]

    @staticmethod
    def set_nickname(address: HexAddress, nickname: str) -> None:
        if not nickname:
            raise ValueError("You must provide an actual string")
        with db_session:
            entity = Address.get_or_insert(address)
            if entity.nickname == nickname:
                return
            if entity.nickname:
                old = entity.nickname
                entity.nickname = nickname
                commit()
                logger.info(
                    "%s nickname changed from %s to %s", entity.address, old, nickname
                )
            else:
                entity.nickname = nickname
                commit()
                logger.info("%s nickname set to %s", entity.address, nickname)

    @staticmethod
    def set_nicknames(nicknames: Dict[HexAddress, str]) -> None:
        with db_session:
            for address, nickname in nicknames.items():
                Address.set_nickname(address, nickname)


UNI_V3_POS: Final = {
    Network.Mainnet: "0xC36442b4a4522E871399CD717aBDD847Ab11FE88",
}.get(CHAINID, "not on this chain")


def _hex_to_string(h: HexString) -> str:
    """Decode a padded HexString to UTF-8, trimming trailing zero bytes.

    Args:
        h: The HexString instance from an ERC-20 contract.

    Examples:
        >>> _hex_to_string(HexString(b'0x5465737400', 'bytes32'))
        'Test'
    """
    h = h.hex().rstrip("0")
    if len(h) % 2 != 0:
        h += "0"
    return bytes.fromhex(h).decode("utf-8")


@final
class Token(DbEntity):
    """Pony ORM entity representing an ERC-20 token or native coin placeholder.

    Stores symbol, name, and decimals for value scaling.

    Examples:
        >>> Token.get_dbid("0xEeeeeEeeeEeEeeEeEeEeeEEEeeeeEeeeeeeeEEeE")
        1
        >>> tok = Token.get_or_insert("0x6B175474E89094C44Da98b954EedeAC495271d0F")
        >>> tok.symbol
        'DAI'

    See Also:
        :meth:`scale_value`
    """

    _table_ = "tokens"

    token_id = PrimaryKey(int, auto=True)
    """Auto-incremented primary key for the tokens table."""

    chain = Required(Chain, index=True)
    """Foreign key linking to :class:`~dao_treasury.db.Chain`."""

    symbol = Required(str, index=True)
    """Short ticker symbol for the token."""

    name = Required(str)
    """Full human-readable name of the token."""

    decimals = Required(int)
    """Number of decimals used for value scaling."""

    if TYPE_CHECKING:
        treasury_tx: Set["TreasuryTx"]

    treasury_tx = Set("TreasuryTx", reverse="token")
    """Inverse relation for treasury transactions involving this token."""
    # partner_harvest_event = Set('PartnerHarvestEvent', reverse="vault")

    address = Required(Address, column="address_id")
    """Foreign key to the address record for this token contract."""

    streams = Set("Stream", reverse="token")
    # vesting_escrows = Set("VestingEscrow", reverse="token")

    def __eq__(self, other: Union["Token", Address, ChecksumAddress]) -> bool:  # type: ignore [override]
        if isinstance(other, str):
            return self.address == other
        elif isinstance(other, Address):
            return self.address.address_id == other.address_id
        return super().__eq__(other)

    __hash__ = DbEntity.__hash__

    @property
    def contract(self) -> Contract:
        return Contract(self.address.address)

    @property
    def scale(self) -> int:
        """Base for division according to `decimals`, e.g., `10**decimals`.

        Examples:
            >>> t = Token.get_or_insert("0x...")
            >>> t.scale
            1000000000000000000
        """
        return 10**self.decimals  # type: ignore [no-any-return]

    def scale_value(self, value: int) -> Decimal:
        """Convert an integer token amount into a Decimal accounting for `decimals`.

        Args:
            value: Raw integer on-chain amount.

        Examples:
            >>> t = Token.get_or_insert("0x...")
            >>> t.scale_value(1500000000000000000)
            Decimal('1.5')
        """
        return Decimal(value) / self.scale

    @staticmethod
    @lru_cache(maxsize=None)
    def get_dbid(address: HexAddress) -> int:
        """Get or insert a `Token` record and return its database ID.

        Args:
            address: Token contract address or native coin placeholder.

        Examples:
            >>> Token.get_dbid("0x6B175474E89094C44Da98b954EedeAC495271d0F")
            2
        """
        with db_session:
            return Token.get_or_insert(address).token_id  # type: ignore [no-any-return]

    @staticmethod
    def get_or_insert(address: HexAddress) -> "Token":
        """Insert or fetch a token record from the chain, resolving metadata on-chain.

        Args:
            address: ERC-20 contract address or native coin placeholder.

        Examples:
            >>> Token.get_or_insert("0x6B175474E89094C44Da98b954EedeAC495271d0F")
            <Token ...>
        """
        address_entity = Address.get_or_insert(address)
        if token := Token.get(address=address_entity):
            return token  # type: ignore [no-any-return]

        address = address_entity.address
        if address == EEE_ADDRESS:
            name, symbol = {Network.Mainnet: ("Ethereum", "ETH")}[chain.id]
            decimals = 18
        else:
            # TODO: use erc20 class from async context before entering this func
            contract = Contract(address)
            try:
                name = contract.name()
            except AttributeError:
                name = "(Unknown)"
            try:
                symbol = contract.symbol()
            except AttributeError:
                symbol = "(Unknown)"
            try:
                decimals = contract.decimals()
            except AttributeError:
                decimals = 0

        # MKR contract returns name and symbol as bytes32 which is converted to a brownie HexString
        # try to decode it
        if isinstance(name, HexString):
            name = _hex_to_string(name)
        if isinstance(symbol, HexString):
            symbol = _hex_to_string(symbol)

        if not name:
            raise BadToken(f"name for {address} is {name}")

        if not symbol:
            raise BadToken(f"symbol for {address} is {symbol}")

        if address == UNI_V3_POS or decimals is None:
            decimals = 0

        # update address nickname for token
        if address_entity.nickname is None or address_entity.nickname.startswith(
            "Contract: "
        ):
            # Don't overwrite any intentionally set nicknames, if applicable
            address_entity.nickname = f"Token: {name}"

        token = Token(
            chain=Chain.get_dbid(),
            address=address_entity.address_id,
            symbol=symbol,
            name=name,
            decimals=decimals,
        )
        commit()
        return token  # type: ignore [no-any-return]


class TxGroup(DbEntity):
    """Pony ORM entity for hierarchical transaction groups.

    Used to categorize treasury transactions into nested buckets.

    Examples:
        >>> gid = TxGroup.get_dbid("Revenue")
        >>> group = TxGroup.get_or_insert("Revenue", None)
        >>> group.full_string
        'Revenue'
    """

    _table_ = "txgroups"

    txgroup_id = PrimaryKey(int, auto=True)
    """Auto-incremented primary key for transaction groups."""

    name = Required(str)
    """Name of the grouping category, e.g., 'Revenue', 'Expenses'."""

    treasury_tx = Set("TreasuryTx", reverse="txgroup")
    """Inverse relation for treasury transactions assigned to this group."""

    parent_txgroup = Optional("TxGroup", reverse="child_txgroups")
    """Optional reference to a parent group for nesting."""

    composite_key(name, parent_txgroup)

    child_txgroups = Set("TxGroup", reverse="parent_txgroup")
    """Set of nested child groups."""

    streams = Set("Stream", reverse="txgroup")

    # TODO: implement this
    # vesting_escrows = Set("VestingEscrow", reverse="txgroup")

    @property
    def fullname(self) -> str:
        """Return the colon-delimited path from root to this group.

        Examples:
            >>> root = TxGroup.get_or_insert("Revenue", None)
            >>> child = TxGroup.get_or_insert("Interest", root)
            >>> child.full_string
            'Revenue:Interest'
        """
        t = self
        retval = t.name
        while t.parent_txgroup:
            t = t.parent_txgroup
            retval = f"{t.name}:{retval}"
        return retval

    @property
    def top_txgroup(self) -> "TxGroup":
        """Get the top-level ancestor in this group’s hierarchy."""
        return self.parent_txgroup.top_txgroup if self.parent_txgroup else self

    @staticmethod
    @lru_cache(maxsize=None)
    def get_dbid(
        name: TxGroupName, parent: typing.Optional["TxGroup"] = None
    ) -> TxGroupDbid:
        """Get or insert a transaction group and return its database ID.

        Args:
            name: Category name.
            parent: Optional parent :class:`~dao_treasury.db.TxGroup`.

        Examples:
            >>> TxGroup.get_dbid("Expenses", None)
            3
        """
        with db_session:
            return TxGroupDbid(TxGroup.get_or_insert(name, parent).txgroup_id)

    @staticmethod
    @lru_cache(maxsize=None)
    def get_fullname(dbid: TxGroupDbid) -> TxGroupName:
        with db_session:
            if txgroup := TxGroup.get(txgroup_id=dbid):
                return txgroup.fullname
            raise ValueError(f"TxGroup[{dbid}] not found")

    @staticmethod
    def get_or_insert(
        name: TxGroupName, parent: typing.Optional["TxGroup"]
    ) -> "TxGroup":
        """Insert or fetch a transaction group.

        Args:
            name: Category name.
            parent: Optional parent group.

        Examples:
            >>> TxGroup.get_or_insert("Expenses", None).name
            'Expenses'
        """
        if txgroup := TxGroup.get(name=name, parent_txgroup=parent):
            return txgroup  # type: ignore [no-any-return]
        txgroup = TxGroup(name=name, parent_txgroup=parent)
        try:
            commit()
        except TransactionIntegrityError as e:
            if txgroup := TxGroup.get(name=name, parent_txgroup=parent):
                return txgroup  # type: ignore [no-any-return]
            raise Exception(e, name, parent) from e
        return txgroup  # type: ignore [no-any-return]


@lru_cache(100)
def get_transaction(txhash: str) -> TransactionReceipt:
    """Fetch and cache a transaction receipt from the connected chain.

    Wraps :meth:`brownie.network.chain.Chain.get_transaction`.

    Args:
        txhash: Hex string of the transaction hash.

    Examples:
        >>> get_transaction("0xabcde...")
        <Transaction '0xabcde...'>
    """
    return chain.get_transaction(txhash)


class TreasuryTx(DbEntity):
    """Pony ORM entity for on-chain treasury transactions.

    Represents individual token or native transfers with pricing, grouping, and gas data.

    Examples:
        >>> # After inserting, fetch sorted records
        >>> with db_session:
        ...     txs = TreasuryTx.select(lambda tx: tx.txgroup == TxGroup.get_dbid("Revenue"))
        ...     for tx in txs:
        ...         print(tx.hash, tx.value_usd)
    """

    _table_ = "treasury_txs"

    treasury_tx_id = PrimaryKey(int, auto=True)
    """Auto-incremented primary key for treasury transactions."""

    chain = Required(Chain, index=True)
    """Foreign key to the network where the transaction occurred."""

    timestamp = Required(int, index=True)
    """Block timestamp as Unix epoch seconds."""

    block = Required(int, index=True)
    """Block number of the transaction."""

    hash = Required(str, index=True)
    """Hex string of the transaction hash."""

    log_index = Optional(int)
    """Log index within the block (None for native transfers)."""

    composite_key(hash, log_index)

    token = Required(Token, reverse="treasury_tx", column="token_id", index=True)
    """Foreign key to the token record used in the transfer."""

    from_address = Optional(
        Address, reverse="treasury_tx_from", column="from", index=True
    )
    """Foreign key to sender address record."""

    to_address = Optional(Address, reverse="treasury_tx_to", column="to", index=True)
    """Foreign key to recipient address record."""

    amount = Required(Decimal, 38, 18)
    """On-chain transfer amount as a Decimal with fixed precision."""

    price = Optional(Decimal, 38, 18)
    """Token price at the time of transfer (if available)."""

    value_usd = Optional(Decimal, 38, 18)
    """USD value of the transfer, computed as `amount * price`."""

    gas_used = Optional(Decimal, 38, 1)
    """Gas units consumed by this transaction (native transfers only)."""

    gas_price = Optional(Decimal, 38, 1)
    """Gas price paid, in native token units (native transfers only)."""

    txgroup = Required(
        "TxGroup", reverse="treasury_tx", column="txgroup_id", index=True
    )
    """Foreign key to the categorization group."""

    composite_index(chain, txgroup)

    @property
    def to_nickname(self) -> typing.Optional[str]:
        """Human-readable label for the recipient address, if any."""
        if to_address := self.to_address:
            return to_address.nickname or to_address.address
        return None

    @property
    def from_nickname(self) -> str:
        """Human-readable label for the sender address."""
        return self.from_address.nickname or self.from_address.address  # type: ignore [union-attr]

    @property
    def symbol(self) -> str:
        """Ticker symbol for the transferred token."""
        return self.token.symbol  # type: ignore [no-any-return]

    @property
    def events(self) -> EventDict:
        """Decoded event logs for this transaction."""
        return self._transaction.events

    def get_events(self, event_name: str) -> _EventItem:
        try:
            return self.events[event_name]
        except EventLookupError:
            pass
        except KeyError as e:
            # This happens sometimes due to a busted abi and hopefully shouldnt impact you
            if str(e) != "'components'":
                raise
        return _EventItem(event_name, None, [], ())

    @property
    def _transaction(self) -> TransactionReceipt:
        """Cached transaction receipt object."""
        return get_transaction(self.hash)

    @staticmethod
    async def insert(entry: LedgerEntry) -> None:
        """Asynchronously insert and sort a ledger entry.

        Converts a :class:`~eth_portfolio.structs.LedgerEntry` into a
        :class:`~dao_treasury.db.TreasuryTx` record, then applies advanced sorting.

        Args:
            entry: A ledger entry representing a token or internal transfer.

        Examples:
            >>> import asyncio, eth_portfolio.structs as s
            >>> asyncio.run(TreasuryTx.insert(s.TokenTransfer(...)))
        See Also:
            :meth:`__insert`
        """
        timestamp = int(await get_block_timestamp_async(entry.block_number))
        if txid := await _INSERT_THREAD.run(TreasuryTx.__insert, entry, timestamp):
            async with _SORT_SEMAPHORE:
                from dao_treasury.sorting import sort_advanced

                try:
                    await sort_advanced(TreasuryTx[txid])
                except Exception as e:
                    e.args = *e.args, entry
                    raise

    async def _set_txgroup(self, txgroup_dbid: TxGroupDbid) -> None:
        await _SORT_THREAD.run(
            TreasuryTx.__set_txgroup, self.treasury_tx_id, txgroup_dbid
        )

    @staticmethod
    def __insert(entry: LedgerEntry, ts: int) -> typing.Optional[int]:
        """Synchronously insert a ledger entry record into the database.

        Handles both :class:`TokenTransfer` and other ledger entry types,
        populates pricing fields, and resolves grouping via basic sorting.

        Args:
            entry: Ledger entry to insert.
            ts: Unix timestamp of the block.

        If a uniqueness conflict arises, delegates to
        :func:`_validate_integrity_error`.  Returns the new record ID
        if further advanced sorting is required.
        """
        try:
            with db_session:
                if isinstance(entry, TokenTransfer):
                    token = Token.get_dbid(entry.token_address)
                    log_index = entry.log_index
                    gas, gas_price, gas_used = None, None, None
                else:
                    token = Token.get_dbid(EEE_ADDRESS)
                    log_index = None
                    gas = entry.gas
                    gas_used = (
                        entry.gas_used if isinstance(entry, InternalTransfer) else None
                    )
                    gas_price = (
                        entry.gas_price if isinstance(entry, Transaction) else None
                    )

                if to_address := entry.to_address:
                    to_address = Address.get_dbid(to_address)
                if from_address := entry.from_address:
                    from_address = Address.get_dbid(from_address)

                # TODO: resolve this circ import
                from dao_treasury.sorting import sort_basic

                txgroup_dbid = sort_basic(entry)

                entity = TreasuryTx(
                    chain=Chain.get_dbid(CHAINID),
                    block=entry.block_number,
                    timestamp=ts,
                    hash=entry.hash.hex(),
                    log_index=log_index,
                    from_address=from_address,
                    to_address=to_address,
                    token=token,
                    amount=entry.value,
                    price=entry.price,
                    value_usd=entry.value_usd,
                    # TODO: nuke db and add this column
                    # gas = gas,
                    gas_used=gas_used,
                    gas_price=gas_price,
                    txgroup=txgroup_dbid,
                )
                # we must commit here or else dbid below will be `None`.
                commit()
                dbid = entity.treasury_tx_id
        except InterfaceError as e:
            raise ValueError(
                e,
                {
                    "chain": Chain.get_dbid(CHAINID),
                    "block": entry.block_number,
                    "timestamp": ts,
                    "hash": entry.hash.hex(),
                    "log_index": log_index,
                    "from_address": from_address,
                    "to_address": to_address,
                    "token": token,
                    "amount": entry.value,
                    "price": entry.price,
                    "value_usd": entry.value_usd,
                    # TODO: nuke db and add this column
                    # gas = gas,
                    "gas_used": gas_used,
                    "gas_price": gas_price,
                    "txgroup": txgroup_dbid,
                },
            ) from e
        except InvalidOperation as e:
            logger.error(e)
            logger.error(
                {
                    "chain": Chain.get_dbid(CHAINID),
                    "block": entry.block_number,
                    "timestamp": ts,
                    "hash": entry.hash.hex(),
                    "log_index": log_index,
                    "from_address": from_address,
                    "to_address": to_address,
                    "token": token,
                    "amount": entry.value,
                    "price": entry.price,
                    "value_usd": entry.value_usd,
                    # TODO: nuke db and add this column
                    # gas = gas,
                    "gas_used": gas_used,
                    "gas_price": gas_price,
                    "txgroup": txgroup_dbid,
                }
            )
            return None
        except TransactionIntegrityError as e:
            return _validate_integrity_error(entry, log_index)
        except Exception as e:
            e.args = *e.args, entry
            raise
        else:
            if txgroup_dbid not in (
                must_sort_inbound_txgroup_dbid,
                must_sort_outbound_txgroup_dbid,
            ):
                logger.info(
                    "Sorted %s to %s", entry, TxGroup.get_fullname(txgroup_dbid)
                )
                return None
            return dbid  # type: ignore [no-any-return]

    @staticmethod
    def __set_txgroup(treasury_tx_dbid: int, txgroup_dbid: TxGroupDbid) -> None:
        with db_session:
            TreasuryTx[treasury_tx_dbid].txgroup = txgroup_dbid


_stream_metadata_cache: Final[Dict[HexStr, Tuple[ChecksumAddress, date]]] = {}


class Stream(DbEntity):
    _table_ = "streams"
    stream_id = PrimaryKey(str)

    contract = Required("Address", reverse="streams")
    start_block = Required(int)
    end_block = Optional(int)
    token = Required("Token", reverse="streams", index=True)
    from_address = Required("Address", reverse="streams_from")
    to_address = Required("Address", reverse="streams_to")
    reason = Optional(str)
    amount_per_second = Required(Decimal, 38, 1)
    status = Required(str, default="Active")
    txgroup = Optional("TxGroup", reverse="streams")

    streamed_funds = Set("StreamedFunds")

    scale = int(1e20)

    @property
    def is_alive(self) -> bool:
        if self.end_block is None:
            assert self.status in ["Active", "Paused"]
            return self.status == "Active"
        assert self.status == "Stopped"
        return False

    @property
    def amount_per_minute(self) -> int:
        return self.amount_per_second * 60

    @property
    def amount_per_hour(self) -> int:
        return self.amount_per_minute * 60

    @property
    def amount_per_day(self) -> int:
        return self.amount_per_hour * 24

    @staticmethod
    def check_closed(stream_id: HexStr) -> bool:
        with db_session:
            return any(sf.is_last_day for sf in Stream[stream_id].streamed_funds)

    @staticmethod
    def _get_start_and_end(stream_dbid: HexStr) -> Tuple[datetime, datetime]:
        with db_session:
            stream = Stream[stream_dbid]
            start_date, end = stream.start_date, datetime.now(_UTC)
            # convert start to datetime
            start = datetime.combine(start_date, time(tzinfo=_UTC), tzinfo=_UTC)
            if stream.end_block:
                end = datetime.fromtimestamp(chain[stream.end_block].timestamp, tz=_UTC)
            return start, end

    def stop_stream(self, block: int) -> None:
        self.end_block = block
        self.status = "Stopped"

    def pause(self) -> None:
        self.status = "Paused"

    @staticmethod
    def _get_token_and_start_date(stream_id: HexStr) -> Tuple[ChecksumAddress, date]:
        try:
            return _stream_metadata_cache[stream_id]
        except KeyError:
            with db_session:
                stream = Stream[stream_id]
                token = stream.token.address.address
                start_date = stream.start_date
            _stream_metadata_cache[stream_id] = token, start_date
            return token, start_date

    @property
    def stream_contract(self) -> Contract:
        return Contract(self.contract.address)

    @property
    def start_date(self) -> date:
        return datetime.fromtimestamp(chain[self.start_block].timestamp).date()

    async def amount_withdrawable(self, block: int) -> int:
        return await self.stream_contract.withdrawable.coroutine(
            self.from_address.address,
            self.to_address.address,
            int(self.amount_per_second),
            block_identifier=block,
        )

    def print(self) -> None:
        symbol = self.token.symbol
        print(f"{symbol} per second: {self.amount_per_second / self.scale}")
        print(f"{symbol} per day: {self.amount_per_day / self.scale}")


class StreamedFunds(DbEntity):
    """Each object represents one calendar day of tokens streamed for a particular stream."""

    _table_ = "streamed_funds"

    date = Required(date)
    stream = Required(Stream, reverse="streamed_funds")
    PrimaryKey(stream, date)

    amount = Required(Decimal, 38, 18)
    price = Required(Decimal, 38, 18)
    value_usd = Required(Decimal, 38, 18)
    seconds_active = Required(int)
    is_last_day = Required(bool)

    @db_session
    def get_entity(stream_id: str, date: datetime) -> "StreamedFunds":
        stream = Stream[stream_id]
        return StreamedFunds.get(date=date, stream=stream)

    @classmethod
    @db_session
    def create_entity(
        cls,
        stream_id: str,
        date: datetime,
        price: Decimal,
        seconds_active: int,
        is_last_day: bool,
    ) -> "StreamedFunds":
        stream = Stream[stream_id]
        amount_streamed_today = round(
            stream.amount_per_second * seconds_active / stream.scale, 18
        )
        entity = StreamedFunds(
            date=date,
            stream=stream,
            amount=amount_streamed_today,
            price=round(price, 18),
            value_usd=round(amount_streamed_today * price, 18),
            seconds_active=seconds_active,
            is_last_day=is_last_day,
        )
        return entity


db.bind(
    provider="sqlite",  # TODO: let user choose postgres with server connection params
    filename=str(SQLITE_DIR / "dao-treasury.sqlite"),
    create_db=True,
)

db.generate_mapping(create_tables=True)


def _set_address_nicknames_for_tokens() -> None:
    """Set address.nickname for addresses belonging to tokens."""
    for address in select(a for a in Address if a.token and not a.nickname):
        address.nickname = f"Token: {address.token.name}"
        db.commit()


def create_stream_ledger_view() -> None:
    """Create or replace the SQL view `stream_ledger` for streamed funds reporting.

    This view joins streamed funds, streams, tokens, addresses, and txgroups
    into a unified ledger of stream transactions.

    Examples:
        >>> create_stream_ledger_view()
    """
    db.execute("""DROP VIEW IF EXISTS stream_ledger;""")
    db.execute(
        """
        create view stream_ledger as
        SELECT  'Mainnet' as chain_name,
                cast(strftime('%s', date || ' 00:00:00') as INTEGER) as timestamp,
                NULL as block, 
                NULL as hash, 
                NULL as log_index, 
                symbol as token, 
                d.address AS "from", 
                d.nickname as from_nickname, 
                e.address as "to", 
                e.nickname as to_nickname, 
                amount, 
                price, 
                value_usd, 
                txgroup.name as txgroup, 
                parent.name as parent_txgroup, 
                txgroup.txgroup_id
        FROM streamed_funds a
            LEFT JOIN streams b ON a.stream = b.stream_id
            LEFT JOIN tokens c ON b.token = c.token_id
            LEFT JOIN addresses d ON b.from_address = d.address_id
            LEFT JOIN addresses e ON b.to_address = e.address_id
            LEFT JOIN txgroups txgroup ON b.txgroup = txgroup.txgroup_id
            LEFT JOIN txgroups parent ON txgroup.parent_txgroup = parent.txgroup_id
        """
    )


def create_vesting_ledger_view() -> None:
    """Create or replace the SQL view `vesting_ledger` for vesting escrow reporting.

    This view joins vested funds, vesting escrows, tokens, chains, addresses,
    and txgroups to produce a vesting ledger.

    Examples:
        >>> create_vesting_ledger_view()
    """
    db.execute(
        """
        DROP VIEW IF EXISTS vesting_ledger;
        CREATE VIEW vesting_ledger AS
        SELECT  d.chain_name, 
            CAST(date AS timestamp) AS "timestamp",
            cast(NULL as int) AS block,
            NULL AS "hash",
            cast(NULL as int) AS "log_index",
            c.symbol AS "token",
            e.address AS "from",
            e.nickname as from_nickname,
            f.address AS "to",
            f.nickname as to_nickname,
            a.amount,
            a.price,
            a.value_usd,
            g.name as txgroup,
            h.name AS parent_txgroup,
            g.txgroup_id
        FROM vested_funds a 
        LEFT JOIN vesting_escrows b ON a.escrow = b.escrow_id
        LEFT JOIN tokens c ON b.token = c.token_id
        LEFT JOIN chains d ON c.chain = d.chain_dbid
        LEFT JOIN addresses e ON b.address = e.address_id
        LEFT JOIN addresses f ON b.recipient = f.address_id
        LEFT JOIN txgroups g ON b.txgroup = g.txgroup_id
        left JOIN txgroups h ON g.parent_txgroup = h.txgroup_id
    """
    )


def create_general_ledger_view() -> None:
    """Create or replace the SQL view `general_ledger` aggregating all treasury transactions.

    Joins chains, tokens, addresses, and txgroups into a single chronological ledger.

    Examples:
        >>> create_general_ledger_view()
    """
    db.execute("drop VIEW IF EXISTS general_ledger")
    db.execute(
        """
        create VIEW general_ledger as
        select *
        from (
            SELECT treasury_tx_id, b.chain_name, a.timestamp, a.block, a.hash, a.log_index, c.symbol AS token, d.address AS "from", d.nickname as from_nickname, e.address AS "to", e.nickname as to_nickname, a.amount, a.price, a.value_usd, f.name AS txgroup, g.name AS parent_txgroup, f.txgroup_id
            FROM treasury_txs a
                LEFT JOIN chains b ON a.chain = b.chain_dbid
                LEFT JOIN tokens c ON a.token_id = c.token_id
                LEFT JOIN addresses d ON a."from" = d.address_id
                LEFT JOIN addresses e ON a."to" = e.address_id
                LEFT JOIN txgroups f ON a.txgroup_id = f.txgroup_id
                LEFT JOIN txgroups g ON f.parent_txgroup = g.txgroup_id
            UNION
            SELECT -1, chain_name, timestamp, block, hash, log_index, token, "from", from_nickname, "to", to_nickname, amount, price, value_usd, txgroup, parent_txgroup, txgroup_id
            FROM stream_ledger
            --UNION
            --SELECT -1, *
            --FROM vesting_ledger
        ) a
        ORDER BY timestamp
        """
    )


def create_unsorted_txs_view() -> None:
    """Create or replace the SQL view `unsorted_txs` for pending categorization.

    Filters `general_ledger` for transactions still in 'Categorization Pending'.

    Examples:
        >>> create_unsorted_txs_view()
    """
    db.execute("DROP VIEW IF EXISTS unsorted_txs;")
    db.execute(
        """
        CREATE VIEW unsorted_txs as
        SELECT *
        FROM general_ledger
        WHERE txgroup = 'Categorization Pending'
        ORDER BY TIMESTAMP desc
        """
    )


def create_monthly_pnl_view() -> None:
    """Create or replace the SQL view `monthly_pnl` summarizing monthly profit and loss.

    Aggregates categorized transactions by month and top-level category.

    Examples:
        >>> create_monthly_pnl_view()
    """
    db.execute("DROP VIEW IF EXISTS monthly_pnl;")
    sql = """
    CREATE VIEW monthly_pnl AS
    WITH categorized AS (
      SELECT
        strftime('%Y-%m', datetime(t.timestamp, 'unixepoch')) AS month,
        CASE
          WHEN p.name IS NOT NULL THEN p.name
          ELSE tg.name
        END AS top_category,
        --COALESCE(t.value_usd, 0) AS value_usd,
        --COALESCE(t.gas_used, 0) * COALESCE(t.gas_price, 0) AS gas_cost
      FROM treasury_txs t
      JOIN txgroups tg ON t.txgroup = tg.txgroup_id
      LEFT JOIN txgroups p ON tg.parent_txgroup = p.txgroup_id
      WHERE tg.name <> 'Ignore'
    )
    SELECT
      month,
      SUM(CASE WHEN top_category = 'Revenue' THEN value_usd ELSE 0 END) AS revenue,
      SUM(CASE WHEN top_category = 'Cost of Revenue' THEN value_usd ELSE 0 END) AS cost_of_revenue,
      SUM(CASE WHEN top_category = 'Expenses' THEN value_usd ELSE 0 END) AS expenses,
      SUM(CASE WHEN top_category = 'Other Income' THEN value_usd ELSE 0 END) AS other_income,
      SUM(CASE WHEN top_category = 'Other Expenses' THEN value_usd ELSE 0 END) AS other_expense,
      (
        SUM(CASE WHEN top_category = 'Revenue' THEN value_usd ELSE 0 END) -
        SUM(CASE WHEN top_category = 'Cost of Revenue' THEN value_usd ELSE 0 END) -
        SUM(CASE WHEN top_category = 'Expenses' THEN value_usd ELSE 0 END) +
        SUM(CASE WHEN top_category = 'Other Income' THEN value_usd ELSE 0 END) -
        SUM(CASE WHEN top_category = 'Other Expenses' THEN value_usd ELSE 0 END)
      ) AS net_profit
    FROM categorized
    GROUP BY month;
    """
    db.execute(sql)


with db_session:
    create_stream_ledger_view()
    # create_vesting_ledger_view()
    create_general_ledger_view()
    create_unsorted_txs_view()
    # create_monthly_pnl_view()

    must_sort_inbound_txgroup_dbid = TxGroup.get_dbid(name="Sort Me (Inbound)")
    must_sort_outbound_txgroup_dbid = TxGroup.get_dbid(name="Sort Me (Outbound)")


@db_session
def _validate_integrity_error(
    entry: LedgerEntry, log_index: int
) -> typing.Optional[int]:
    """Validate that an existing TreasuryTx matches an attempted insert on conflict.

    Raises AssertionError if any field deviates from the existing record.  Used
    to resolve :exc:`pony.orm.TransactionIntegrityError`.

    Args:
        entry: The ledger entry that triggered the conflict.
        log_index: The log index within the transaction.

    Examples:
        >>> _validate_integrity_error(entry, 0)
    """
    txhash = entry.hash.hex()
    chain_dbid = Chain.get_dbid()
    existing_object = TreasuryTx.get(hash=txhash, log_index=log_index, chain=chain_dbid)
    if existing_object is None:
        existing_objects = list(
            TreasuryTx.select(
                lambda tx: tx.hash == txhash
                and tx.log_index == log_index
                and tx.chain == chain_dbid
            )
        )
        raise ValueError(
            f"unable to `.get` due to multiple entries: {existing_objects}"
        )
    if entry.to_address:
        assert entry.to_address == existing_object.to_address.address, (
            entry.to_address,
            existing_object.to_address.address,
        )
    else:
        assert existing_object.to_address is None, (
            entry.to_address,
            existing_object.to_address,
        )
    assert entry.from_address == existing_object.from_address.address, (
        entry.from_address,
        existing_object.from_address.address,
    )
    try:
        assert entry.value in [existing_object.amount, -1 * existing_object.amount], (
            entry.value,
            existing_object.amount,
        )
    except AssertionError:
        logger.debug(
            "slight rounding error in value for TreasuryTx[%s] due to sqlite decimal handling",
            existing_object.treasury_tx_id,
        )
    assert entry.block_number == existing_object.block, (
        entry.block_number,
        existing_object.block,
    )
    if isinstance(entry, TokenTransfer):
        assert entry.token_address == existing_object.token.address.address, (
            entry.token_address,
            existing_object.token.address.address,
        )
    else:
        assert existing_object.token == EEE_ADDRESS
    # NOTE All good!
    return (
        existing_object.treasury_tx_id
        if existing_object.txgroup.txgroup_id
        in (
            must_sort_inbound_txgroup_dbid,
            must_sort_outbound_txgroup_dbid,
        )
        else None
    )
