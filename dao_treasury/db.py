# mypy: disable-error-code="operator,valid-type,misc"
import typing
from asyncio import Semaphore
from decimal import Decimal, InvalidOperation
from functools import lru_cache
from logging import getLogger
from os import path
from pathlib import Path
from typing import TYPE_CHECKING, Final, Union, final

from a_sync import AsyncThreadPoolExecutor
from brownie import chain
from brownie.convert.datatypes import HexString
from brownie.network.event import EventDict
from brownie.network.transaction import TransactionReceipt
from eth_typing import ChecksumAddress, HexAddress
from eth_portfolio.structs import (
    InternalTransfer,
    LedgerEntry,
    TokenTransfer,
    Transaction,
)
from pony.orm import (
    Database,
    Optional,
    PrimaryKey,
    Required,
    Set,
    TransactionIntegrityError,
    commit,
    composite_key,
    composite_index,
    db_session,
)
from y import EEE_ADDRESS, Contract, Network, convert, get_block_timestamp_async
from y.constants import CHAINID
from y.contracts import _get_code
from y.exceptions import ContractNotVerified

from dao_treasury.types import TxGroupDbid, TxGroupName


SQLITE_DIR = Path(path.expanduser("~")) / ".dao-treasury"
SQLITE_DIR.mkdir(parents=True, exist_ok=True)


_INSERT_THREAD = AsyncThreadPoolExecutor(1)
_SORT_SEMAPHORE = Semaphore(50)


db = Database()

logger = getLogger("dao_treasury.db")


@final
class BadToken(ValueError):
    ...


# makes type checking work, see below for info:
# https://pypi.org/project/pony-stubs/
DbEntity = db.Entity


@final
class Chain(DbEntity):
    _table_ = "chains"
    chain_dbid = PrimaryKey(int, auto=True)

    chain_name = Required(str, unique=True)
    chainid = Required(int, unique=True)

    if TYPE_CHECKING:
        addresses: Set["Address"]
        tokens: Set["Token"]
        treasury_txs: Set["TreasuryTx"]
        
    addresses = Set("Address", reverse="chain")
    tokens = Set("Token", reverse="chain")
    treasury_txs = Set("TreasuryTx")
    # partners_txs = Set("PartnerHarvestEvent")

    @classmethod
    @lru_cache(maxsize=None)
    def get_dbid(cls, chainid: int = CHAINID) -> int:
        with db_session:
            return cls.get_or_insert(chainid).chain_dbid  # type: ignore [no-any-return]

    @classmethod
    def get_or_insert(cls, chainid: int) -> "Chain":
        entity = cls.get(chainid=chainid) or cls(
            chain_name=Network.name(chainid),
            chainid=chainid,
            # TODO: either remove this or implement it when the dash pieces are together
            #victoria_metrics_label=Network.label(chainid),
        )
        commit()
        return entity


@final
class Address(DbEntity):
    _table_ = "addresses"
    address_id = PrimaryKey(int, auto=True)
    chain = Required(Chain, reverse="addresses")

    address = Required(str, index=True)
    nickname = Optional(str)
    is_contract = Required(bool, index=True)
    composite_key(address, chain)
    composite_index(is_contract, chain)

    if TYPE_CHECKING:
        token: Optional["Token"]
        treasury_tx_from: Set["TreasuryTx"]
        treasury_tx_to: Set["TreasuryTx"]
        
    token = Optional("Token", index=True)
    # partners_tx = Set('PartnerHarvestEvent', reverse='wrapper')

    treasury_tx_from = Set("TreasuryTx", reverse="from_address")
    treasury_tx_to = Set("TreasuryTx", reverse="to_address")
    # streams_from = Set("Stream", reverse="from_address")
    # streams_to = Set("Stream", reverse="to_address")
    # streams = Set("Stream", reverse="contract")
    # vesting_escrows = Set("VestingEscrow", reverse="address")
    # vests_received = Set("VestingEscrow", reverse="recipient")
    # vests_funded = Set("VestingEscrow", reverse="funder")

    def __eq__(self, other: Union["Address", ChecksumAddress]) -> bool:  # type: ignore [override]
        if isinstance(other, str):
            return CHAINID == self.chain.chainid and other == self.address
        return super().__eq__(other)
    
    __hash__ = DbEntity.__hash__

    @classmethod
    @lru_cache(maxsize=None)
    def get_dbid(cls, address: HexAddress) -> int:
        with db_session:
            return cls.get_or_insert(address).address_id  # type: ignore [no-any-return]

    @classmethod
    def get_or_insert(cls, address: HexAddress) -> "Address":
        checksum_address = convert.to_address(address)
        chain_dbid = Chain.get_dbid()
        
        if entity := Address.get(chain=chain_dbid, address=checksum_address):
            return entity  # type: ignore [no-any-return]
        
        if _get_code(address, None).hex().removeprefix("0x"):
            try:
                nickname = f"Contract: {Contract(address)._build['contractName']}"
            except ContractNotVerified as e:
                nickname = f"Non-Verified Contract: {address}"

            entity = Address(
                chain=chain_dbid, 
                address=checksum_address,
                nickname=nickname,
                is_contract=False,
            )

        else:

            entity = Address(
                chain=chain_dbid, 
                address=checksum_address,
                is_contract=False,
            )

        commit()

        return entity  # type: ignore [no-any-return]


UNI_V3_POS: Final = {
    Network.Mainnet: "0xC36442b4a4522E871399CD717aBDD847Ab11FE88",
}.get(CHAINID, 'not on this chain')


def _hex_to_string(h: HexString) -> str:
    '''returns a string from a HexString'''
    h = h.hex().rstrip("0")
    if len(h) % 2 != 0:
        h += "0"
    return bytes.fromhex(h).decode("utf-8")


@final
class Token(DbEntity):
    _table_ = "tokens"
    token_id = PrimaryKey(int, auto=True)
    chain = Required(Chain, index=True)

    symbol = Required(str, index=True)
    name = Required(str)
    decimals = Required(int)

    if TYPE_CHECKING:
        treasury_tx: Set["TreasuryTx"]
    
    treasury_tx = Set("TreasuryTx", reverse="token")
    # partner_harvest_event = Set('PartnerHarvestEvent', reverse="vault")
    address = Required(Address, column="address_id")
    # streams = Set('Stream', reverse="token")
    # vesting_escrows = Set("VestingEscrow", reverse="token")

    def __eq__(self, other: Union["Token", ChecksumAddress]) -> bool:  # type: ignore [override]
        return self.address == other if isinstance(other, str) else super().__eq__(other)
    
    __hash__ = DbEntity.__hash__

    @property
    def scale(self) -> int:
        return 10**self.decimals  # type: ignore [no-any-return]
    
    def scale_value(self, value: int) -> Decimal:
        return Decimal(value) / self.scale
    
    @classmethod
    @lru_cache(maxsize=None)
    def get_dbid(cls, address: HexAddress) -> int:
        with db_session:
            return cls.get_or_insert(address).token_id  # type: ignore [no-any-return]

    @classmethod
    def get_or_insert(cls, address: HexAddress) -> "Token":
        address_entity = Address.get_or_insert(address)
        if token := Token.get(address=address_entity):
            return token  # type: ignore [no-any-return]
        
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
        if address_entity.nickname is None or address_entity.nickname.startswith("Contract: "):
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
    _table_ = 'txgroups'
    txgroup_id = PrimaryKey(int, auto=True)

    name = Required(str, unique=True)

    treasury_tx = Set('TreasuryTx', reverse="txgroup")
    parent_txgroup = Optional("TxGroup", reverse="child_txgroups")
    child_txgroups = Set("TxGroup", reverse="parent_txgroup")
    # TODO: implement these
    #streams = Set("Stream", reverse="txgroup")
    #vesting_escrows = Set("VestingEscrow", reverse="txgroup")

    @property
    def top_txgroup(self) -> "TxGroup":
        return self.parent_txgroup.top_txgroup if self.parent_txgroup else self
    
    @property
    def full_string(self) -> str:
        t = self
        retval = t.name
        while True:
            if t.parent_txgroup is None:
                return retval  # type: ignore [no-any-return]
            t = t.parent_txgroup
            retval = f"{t.name}:{retval}"
    
    @classmethod
    @lru_cache(maxsize=None)
    def get_dbid(cls, name: TxGroupName, parent: typing.Optional["TxGroup"] = None) -> TxGroupDbid:
        with db_session:
            return TxGroupDbid(cls.get_or_insert(name, parent).txgroup_id)
    
    @classmethod
    def get_or_insert(cls, name: TxGroupName, parent: typing.Optional["TxGroup"]) -> "TxGroup":
        if txgroup := TxGroup.get(name=name, parent_txgroup=parent):
            return txgroup  # type: ignore [no-any-return]
        txgroup = TxGroup(name=name, parent_txgroup=parent)
        try:
            commit()
        except TransactionIntegrityError as e:
            raise Exception(e, name, parent) from e
        return txgroup  # type: ignore [no-any-return]


@lru_cache(100)
def get_transaction(txhash: str) -> TransactionReceipt:
    return chain.get_transaction(txhash)


class TreasuryTx(DbEntity):
    _table_ = "treasury_txs"
    treasury_tx_id = PrimaryKey(int, auto=True)
    chain = Required(Chain, index=True)

    timestamp = Required(int, index=True)
    block = Required(int, index=True)
    hash = Required(str, index=True)
    log_index = Optional(int)
    composite_key(hash, log_index)
    token = Required(Token, reverse="treasury_tx", column="token_id", index=True)
    from_address = Optional(
        Address, reverse="treasury_tx_from", column="from", index=True
    )
    to_address = Optional(Address, reverse="treasury_tx_to", column="to", index=True)
    amount = Required(Decimal, 38, 18)
    price = Optional(Decimal, 38, 18)
    value_usd = Optional(Decimal, 38, 18)
    gas_used = Optional(Decimal, 38, 1)
    gas_price = Optional(Decimal, 38, 1)
    txgroup = Required("TxGroup", reverse="treasury_tx", column="txgroup_id", index=True)
    composite_index(chain, txgroup)

    @property
    def to_nickname(self) -> typing.Optional[str]:
        if to_address := self.to_address:
            return to_address.nickname or to_address.address
        return None

    @property
    def from_nickname(self) -> str:
        return self.from_address.nickname or self.from_address.address

    @property
    def symbol(self) -> str:
        return self.token.symbol  # type: ignore [no-any-return]

    # Helpers
    @property
    def _events(self) -> EventDict:
        return self._transaction.events

    @property
    def _transaction(self) -> TransactionReceipt:
        return get_transaction(self.hash)

    @staticmethod
    async def insert(entry: LedgerEntry) -> None:
        timestamp = int(await get_block_timestamp_async(entry.block_number))
        if txid := await _INSERT_THREAD.run(TreasuryTx.__insert, entry, timestamp):
            async with _SORT_SEMAPHORE:
                from dao_treasury.sorting import sort_advanced

                with db_session:
                    await sort_advanced(TreasuryTx[txid])
    
    @classmethod
    def __insert(cls, entry: LedgerEntry, ts: int) -> typing.Optional[int]:
        try:
            with db_session:
                if isinstance(entry, TokenTransfer):
                    try:
                        token = Token.get_dbid(entry.token_address)
                    except (ContractNotVerified, BadToken):
                        return None
                    log_index = entry.log_index
                    # TODO: implement gas
                    gas, gas_price, gas_used = None, None, None
                else:
                    token = Token.get_dbid(EEE_ADDRESS)
                    log_index = None
                    # TODO: implement gas
                    gas = entry.gas
                    gas_used = entry.gas_used if isinstance(entry, InternalTransfer) else None
                    gas_price = entry.gas_price if isinstance(entry, Transaction) else None
                
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
                dbid = entity.treasury_tx_id
        except InvalidOperation as e:
            logger.error(e)
            return None
        except TransactionIntegrityError as e:
            #logger.error(e, entry, exc_info=True)
            # TODO: implement this
            return _validate_integrity_error(entry, log_index)
        except Exception as e:
            e.args = *e.args, entry
            raise
        else:
            if txgroup_dbid not in (must_sort_inbound_txgroup_dbid, must_sort_outbound_txgroup_dbid):
                logger.info("Sorted %s to txgroup %s", entry, txgroup_dbid)
                return None
            return dbid  # type: ignore [no-any-return]


db.bind(
    provider="sqlite",  # TODO: let user choose postgres with server connection params
    filename=str(SQLITE_DIR / "dao-treasury.sqlite"),
    create_db=True,
)

db.generate_mapping(create_tables=True)


def create_stream_ledger_view() -> None:
    db.execute(
        """
        DROP VIEW IF EXISTS stream_ledger;
        create view stream_ledger as
        SELECT  'Mainnet' as chain_name,
                cast(DATE AS timestamp) as timestamp,
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
    db.execute("""
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
    """)


def create_general_ledger_view() -> None:
    db.execute("drop VIEW IF EXISTS general_ledger")
    db.execute(
        """
        create VIEW general_ledger as
        select *
        from (
            SELECT treasury_tx_id, b.chain_name, datetime(a.timestamp, 'unixepoch') AS timestamp, a.block, a.hash, a.log_index, c.symbol AS token, d.address AS "from", d.nickname as from_nickname, e.address AS "to", e.nickname as to_nickname, a.amount, a.price, a.value_usd, f.name AS txgroup, g.name AS parent_txgroup, f.txgroup_id
            FROM treasury_txs a
                LEFT JOIN chains b ON a.chain = b.chain_dbid
                LEFT JOIN tokens c ON a.token_id = c.token_id
                LEFT JOIN addresses d ON a."from" = d.address_id
                LEFT JOIN addresses e ON a."to" = e.address_id
                LEFT JOIN txgroups f ON a.txgroup_id = f.txgroup_id
                LEFT JOIN txgroups g ON f.parent_txgroup = g.txgroup_id
            --UNION
            --SELECT -1, chain_name, TIMESTAMP, cast(block AS integer) block, hash, CAST(log_index AS integer) as log_index, token, "from", from_nickname, "to", to_nickname, amount, price, value_usd, txgroup, parent_txgroup, txgroup_id
            --FROM stream_ledger
            --UNION
            --SELECT -1, *
            --FROM vesting_ledger
        ) a
        ORDER BY timestamp
        """
    )
    

def create_unsorted_txs_view() -> None:
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
    #create_stream_ledger_view()
    #create_vesting_ledger_view()
    create_general_ledger_view()
    create_unsorted_txs_view()
    #create_monthly_pnl_view()

    must_sort_inbound_txgroup_dbid = TxGroup.get_dbid(name="Sort Me (Inbound)")
    must_sort_outbound_txgroup_dbid = TxGroup.get_dbid(name="Sort Me (Outbound)")


@db_session
def _validate_integrity_error(entry: LedgerEntry, log_index: int) -> typing.Optional[int]:
    '''Raises AssertionError if existing object that causes a TransactionIntegrityError is not an EXACT MATCH to the attempted insert.'''
    txhash = entry.hash.hex()
    chain_dbid = Chain.get_dbid()
    existing_object = TreasuryTx.get(
        hash=txhash, log_index=log_index, chain=chain_dbid
    )
    if existing_object is None:
        existing_objects = list(
            TreasuryTx.select(
                lambda tx: tx.hash == txhash
                and tx.log_index == log_index
                and tx.chain == chain_dbid
            )
        )
        raise ValueError(
            f'unable to `.get` due to multiple entries: {existing_objects}'
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
        logger.warning("slight rounding error in value for TreasuryTx[%s] due to sqlite decimal handling", existing_object.treasury_tx_id)
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
        if existing_object.txgroup.txgroup_id in (
            must_sort_inbound_txgroup_dbid, 
            must_sort_outbound_txgroup_dbid,
        )
        else None
    )
