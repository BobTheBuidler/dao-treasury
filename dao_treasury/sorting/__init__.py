"""
This module contains logic for sorting transactions into various categories.
"""

from logging import getLogger
from typing import Final, Optional

from eth_portfolio.structs import LedgerEntry
from evmspec.data import TransactionHash
from y.exceptions import ContractNotVerified

from dao_treasury import db
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
MUST_SORT_INBOUND_TXGROUP_DBID: Final = db.must_sort_inbound_txgroup_dbid
MUST_SORT_OUTBOUND_TXGROUP_DBID: Final = db.must_sort_outbound_txgroup_dbid

INTERNAL_TRANSFER_TXGROUP_DBID: Final = TxGroup.get_dbid(
    name="Internal Transfer",
    parent=TxGroup.get_dbid("Ignore"),
)
# TODO: write a docstring

OUT_OF_RANGE_TXGROUP_DBID = TxGroup.get_dbid(
    name="Out of Range", parent=TxGroup.get_dbid("Ignore")
)
# TODO: write a docstring


def sort_basic(entry: LedgerEntry) -> TxGroupDbid:
    # TODO: write docstring
    from_address = entry.from_address
    to_address = entry.to_address
    block = entry.block_number

    txgroup_dbid: Optional[TxGroupDbid] = None
    if TreasuryWallet.check_membership(from_address, block):
        if TreasuryWallet.check_membership(to_address, block):
            txgroup_dbid = INTERNAL_TRANSFER_TXGROUP_DBID
    elif not TreasuryWallet.check_membership(to_address, block):
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
            txgroup_dbid = MUST_SORT_OUTBOUND_TXGROUP_DBID

        elif TreasuryWallet.check_membership(to_address, block):
            txgroup_dbid = MUST_SORT_INBOUND_TXGROUP_DBID

        else:
            raise NotImplementedError("this isnt supposed to happen")
    return txgroup_dbid  # type: ignore [no-any-return]


def sort_basic_entity(entry: db.TreasuryTx) -> TxGroupDbid:
    # TODO: write docstring
    txgroup_dbid: Optional[TxGroupDbid] = None
    block = entry.block
    if (
        entry.from_address
        and TreasuryWallet.check_membership(entry.from_address.address, block)
        and TreasuryWallet.check_membership(entry.to_address.address, block)
    ):
        txgroup_dbid = INTERNAL_TRANSFER_TXGROUP_DBID

    if txgroup_dbid is None:
        txgroup_dbid = HashMatcher.match(entry.hash)

    if txgroup_dbid is None:
        txgroup_dbid = FromAddressMatcher.match(entry.from_address.address)

    if txgroup_dbid is None and entry.to_address:
        txgroup_dbid = ToAddressMatcher.match(entry.to_address.address)

    if txgroup_dbid is None:
        if TreasuryWallet.check_membership(entry.from_address.address, entry.block):
            txgroup_dbid = MUST_SORT_OUTBOUND_TXGROUP_DBID

        elif TreasuryWallet.check_membership(entry.to_address.address, entry.block):
            txgroup_dbid = MUST_SORT_INBOUND_TXGROUP_DBID

        else:
            raise NotImplementedError("this isnt supposed to happen")

    if txgroup_dbid not in (
        MUST_SORT_INBOUND_TXGROUP_DBID,
        MUST_SORT_OUTBOUND_TXGROUP_DBID,
    ):
        logger.info("Sorted %s to %s", entry, TxGroup.get_fullname(txgroup_dbid))

    return txgroup_dbid  # type: ignore [no-any-return]


async def sort_advanced(entry: db.TreasuryTx) -> TxGroupDbid:
    # TODO: write docstring
    txgroup_dbid = sort_basic_entity(entry)

    if txgroup_dbid in (
        MUST_SORT_INBOUND_TXGROUP_DBID,
        MUST_SORT_OUTBOUND_TXGROUP_DBID,
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
        MUST_SORT_INBOUND_TXGROUP_DBID,
        MUST_SORT_OUTBOUND_TXGROUP_DBID,
    ):
        logger.info("Sorted %s to %s", entry, TxGroup.get_fullname(txgroup_dbid))
        await entry._set_txgroup(txgroup_dbid)
        entry.txgroup = txgroup_dbid

    return txgroup_dbid  # type: ignore [no-any-return]
