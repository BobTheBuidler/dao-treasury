"""
This module provides the core logic for sorting DAO Treasury transactions into transaction groups (categories).

Sorting enables comprehensive financial reporting and categorization tailored for on-chain organizations.
Transactions are matched against either statically defined rules or more advanced dynamic rules based on user-defined matching functions.

Sorting works by attempting matches in this order:
  1. Check if the transaction is an internal transfer (within treasury wallets).
  2. Check if the transaction is "Out of Range" (neither sender nor receiver was a treasury wallet at the time of the tx).
  3. Match by transaction hash using registered HashMatchers.
  4. Match by sender address using registered FromAddressMatchers.
  5. Match by recipient address using registered ToAddressMatchers.
  6. Assign "Must Sort Inbound" or "Must Sort Outbound" groups if part of treasury.
  7. Raise an error if no match is found (unexpected case).

See the complete [sort rules documentation](https://bobthebuidler.github.io/dao-treasury/sort_rules.html) for detailed explanations
and examples on defining and registering sort rules.

See Also:
    :func:`dao_treasury.sorting.sort_basic`
    :func:`dao_treasury.sorting.sort_basic_entity`
    :func:`dao_treasury.sorting.sort_advanced`
    :class:`dao_treasury.sorting.HashMatcher`
    :class:`dao_treasury.sorting.FromAddressMatcher`
    :class:`dao_treasury.sorting.ToAddressMatcher`
"""

from logging import getLogger
from typing import Final, Optional

from eth_portfolio.structs import LedgerEntry
from evmspec.data import TransactionHash
from y.exceptions import ContractNotVerified

from dao_treasury import constants, db
from dao_treasury._wallet import TreasuryWallet
from dao_treasury.sorting._matchers import (
    _Matcher,
    FromAddressMatcher,
    HashMatcher,
    ToAddressMatcher,
)
from dao_treasury.sorting.factory import (
    SortRuleFactory,
    cost_of_revenue,
    expense,
    ignore,
    other_expense,
    other_income,
    revenue,
)
from dao_treasury.sorting.rule import (
    SORT_RULES,
    CostOfRevenueSortRule,
    ExpenseSortRule,
    IgnoreSortRule,
    OtherExpenseSortRule,
    OtherIncomeSortRule,
    RevenueSortRule,
)
from dao_treasury.sorting.rules import *
from dao_treasury.types import TxGroupDbid


logger: Final = getLogger("dao_treasury.sorting")


__all__ = [
    "CostOfRevenueSortRule",
    "ExpenseSortRule",
    "IgnoreSortRule",
    "OtherExpenseSortRule",
    "OtherIncomeSortRule",
    "RevenueSortRule",
    "cost_of_revenue",
    "expense",
    "ignore",
    "other_expense",
    "other_income",
    "revenue",
    "SortRuleFactory",
    "HashMatcher",
    "FromAddressMatcher",
    "ToAddressMatcher",
    "SORT_RULES",
    "_Matcher",
]

# C constants
TxGroup: Final = db.TxGroup

INTERNAL_TRANSFER_TXGROUP_DBID: int | None = None
"""Database ID for the 'Internal Transfer' transaction group.

This group represents transactions that occur internally between treasury-owned wallets.
Such internal movements of funds within the DAO's treasury do not require separate handling or reporting.

See Also:
    :class:`dao_treasury.db.TxGroup`
"""

OUT_OF_RANGE_TXGROUP_DBID: int | None = None
"""Database ID for the 'Out of Range' transaction group.

This category is assigned to transactions where neither the sender nor the recipient
wallet are members of the treasury at the time of the transaction.

See Also:
    :class:`dao_treasury.db.TxGroup`
"""


def sort_basic(entry: LedgerEntry) -> TxGroupDbid:
    """Determine the transaction group ID for a basic ledger entry using static matching.

    The function attempts to categorize the transaction by testing:
      - If both 'from' and 'to' addresses are treasury wallets (internal transfer).
      - If neither ‘to’ address is a treasury wallet at the time of the transaction (out of range).
      - If the transaction hash matches a known HashMatcher.
      - If the 'from' address matches a FromAddressMatcher.
      - If the 'to' address matches a ToAddressMatcher.
      - Assignment to 'Must Sort Outbound' or 'Must Sort Inbound' groups if applicable.
      - Raises `NotImplementedError` if none of the above conditions are met (should not happen).

    Args:
        entry: A ledger entry representing a blockchain transaction.

    Examples:
        >>> from eth_portfolio.structs import Transaction
        >>> entry = Transaction(from_address="0xabc...", to_address="0xdef...", block_number=1234567)
        >>> group_id = sort_basic(entry)
        >>> print(group_id)

    See Also:
        :func:`sort_basic_entity`
        :func:`sort_advanced`
        :class:`dao_treasury.sorting.HashMatcher`
    """
    global INTERNAL_TRANSFER_TXGROUP_DBID
    global OUT_OF_RANGE_TXGROUP_DBID

    from_address = entry.from_address
    to_address = entry.to_address
    block = entry.block_number

    txgroup_dbid: Optional[TxGroupDbid] = None
    if TreasuryWallet.check_membership(from_address, block):
        if TreasuryWallet.check_membership(to_address, block):
            if INTERNAL_TRANSFER_TXGROUP_DBID is None:
                INTERNAL_TRANSFER_TXGROUP_DBID = TxGroup.get_dbid(
                    name="Internal Transfer",
                    parent=TxGroup.get_dbid("Ignore"),
                )
            txgroup_dbid = INTERNAL_TRANSFER_TXGROUP_DBID
    elif not TreasuryWallet.check_membership(to_address, block):
        if OUT_OF_RANGE_TXGROUP_DBID is None:
            OUT_OF_RANGE_TXGROUP_DBID = TxGroup.get_dbid(
                name="Out of Range", parent=TxGroup.get_dbid("Ignore")
            )
        txgroup_dbid = OUT_OF_RANGE_TXGROUP_DBID

    if txgroup_dbid is None:
        if isinstance(txhash := entry.hash, TransactionHash):
            txhash = txhash.hex()
        txgroup_dbid = HashMatcher.match(txhash)

    if txgroup_dbid is None:
        txgroup_dbid = FromAddressMatcher.match(from_address)

    if txgroup_dbid is None:
        txgroup_dbid = ToAddressMatcher.match(to_address)

    if txgroup_dbid is None:
        if TreasuryWallet.check_membership(from_address, block):
            txgroup_dbid = db.must_sort_outbound_txgroup_dbid

        elif TreasuryWallet.check_membership(to_address, block):
            txgroup_dbid = db.must_sort_inbound_txgroup_dbid

        else:
            raise NotImplementedError("this isnt supposed to happen")
    return txgroup_dbid  # type: ignore [no-any-return]


def sort_basic_entity(tx: db.TreasuryTx) -> TxGroupDbid:
    """Determine the transaction group ID for a TreasuryTx database entity using static matching.

    Similar to :func:`sort_basic` but operates on a TreasuryTx entity from the database.
    It considers additional constants such as `DISPERSE_APP` when determining whether
    a transaction is out of range.

    Args:
        tx: A TreasuryTx database entity representing a treasury transaction.

    Examples:
        >>> from dao_treasury.db import TreasuryTx
        >>> tx = TreasuryTx[123]
        >>> group_id = sort_basic_entity(tx)
        >>> print(group_id)

    See Also:
        :func:`sort_basic`
        :func:`sort_advanced`
    """
    global INTERNAL_TRANSFER_TXGROUP_DBID
    global OUT_OF_RANGE_TXGROUP_DBID

    from_address = tx.from_address.address
    to_address = tx.to_address
    block = tx.block

    txgroup_dbid: Optional[TxGroupDbid] = None
    if TreasuryWallet.check_membership(from_address, block):
        if TreasuryWallet.check_membership(tx.to_address.address, block):
            if INTERNAL_TRANSFER_TXGROUP_DBID is None:
                INTERNAL_TRANSFER_TXGROUP_DBID = TxGroup.get_dbid(
                    name="Internal Transfer",
                    parent=TxGroup.get_dbid("Ignore"),
                )
            txgroup_dbid = INTERNAL_TRANSFER_TXGROUP_DBID
    elif not (
        TreasuryWallet.check_membership(tx.to_address.address, tx.block)
        or from_address in constants.DISPERSE_APP
    ):
        if OUT_OF_RANGE_TXGROUP_DBID is None:
            OUT_OF_RANGE_TXGROUP_DBID = TxGroup.get_dbid(
                name="Out of Range", parent=TxGroup.get_dbid("Ignore")
            )
        txgroup_dbid = OUT_OF_RANGE_TXGROUP_DBID

    if txgroup_dbid is None:
        txgroup_dbid = HashMatcher.match(tx.hash)

    if txgroup_dbid is None:
        txgroup_dbid = FromAddressMatcher.match(from_address)

    if txgroup_dbid is None and to_address:
        txgroup_dbid = ToAddressMatcher.match(to_address.address)

    if txgroup_dbid is None:
        if TreasuryWallet.check_membership(from_address, block):
            txgroup_dbid = db.must_sort_outbound_txgroup_dbid

        elif TreasuryWallet.check_membership(to_address.address, block):
            txgroup_dbid = db.must_sort_inbound_txgroup_dbid

        elif from_address in constants.DISPERSE_APP:
            txgroup_dbid = db.must_sort_outbound_txgroup_dbid

        elif from_address in constants.DISPERSE_APP:
            txgroup_dbid = db.must_sort_outbound_txgroup_dbid

        else:
            raise NotImplementedError("this isnt supposed to happen")

    if txgroup_dbid not in (
        db.must_sort_inbound_txgroup_dbid,
        db.must_sort_outbound_txgroup_dbid,
    ):
        logger.info("Sorted %s to %s", tx, TxGroup.get_fullname(txgroup_dbid))

    return txgroup_dbid  # type: ignore [no-any-return]


async def sort_advanced(entry: db.TreasuryTx) -> TxGroupDbid:
    """Determine the transaction group ID for a TreasuryTx entity using advanced dynamic rules.

    Starts with the result of static matching via :func:`sort_basic_entity`, then
    applies advanced asynchronous matching rules registered under :data:`SORT_RULES`.
    Applies rules sequentially until a match is found or all rules are exhausted.

    If a rule's match attempt raises a `ContractNotVerified` exception, the rule is skipped.

    Updates the TreasuryTx entity's transaction group in the database when a match
    other than 'Must Sort Inbound/Outbound' is found.

    Args:
        entry: A TreasuryTx database entity representing a treasury transaction.

    Examples:
        >>> from dao_treasury.db import TreasuryTx
        >>> import asyncio
        >>> tx = TreasuryTx[123]
        >>> group_id = asyncio.run(sort_advanced(tx))
        >>> print(group_id)

    See Also:
        :func:`sort_basic_entity`
        :data:`SORT_RULES`
    """
    txgroup_dbid = sort_basic_entity(entry)

    if txgroup_dbid in (
        db.must_sort_inbound_txgroup_dbid,
        db.must_sort_outbound_txgroup_dbid,
    ):
        for rules in SORT_RULES.values():
            for rule in rules:
                try:
                    if await rule.match(entry):
                        txgroup_dbid = rule.txgroup_dbid
                        break
                except ContractNotVerified:
                    continue
    if txgroup_dbid not in (
        db.must_sort_inbound_txgroup_dbid,
        db.must_sort_outbound_txgroup_dbid,
    ):
        logger.info("Sorted %s to %s", entry, TxGroup.get_fullname(txgroup_dbid))
        await entry._set_txgroup(txgroup_dbid)

    return txgroup_dbid  # type: ignore [no-any-return]
