"""
This module contains logic for sorting transactions into various categories.
"""

from logging import getLogger
from typing import Final, Optional

from eth_portfolio.structs import LedgerEntry
from evmspec.data import TransactionHash

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
must_sort_inbound_txgroup_dbid: Final = db.must_sort_inbound_txgroup_dbid
must_sort_outbound_txgroup_dbid: Final = db.must_sort_outbound_txgroup_dbid


def sort_basic(entry: LedgerEntry) -> TxGroupDbid:
    txgroup_dbid: Optional[TxGroupDbid] = None
    if from_wallet := TreasuryWallet._get_instance(entry.from_address):
        # TODO: asyncify the start and end block stuff
        start_block_for_wallet = from_wallet._start_block
        end_block_for_wallet = from_wallet._end_block
        if start_block_for_wallet <= entry.block_number and (
            end_block_for_wallet is None or entry.block_number <= end_block_for_wallet
        ):
            if to_wallet := TreasuryWallet._get_instance(entry.to_address):
                start_block_for_wallet = to_wallet._start_block
                end_block_for_wallet = to_wallet._end_block
                if start_block_for_wallet <= entry.block_number and (
                    end_block_for_wallet is None
                    or entry.block_number <= end_block_for_wallet
                ):
                    txgroup_dbid = TxGroup.get_dbid(
                        name="Internal Transfer",
                        parent=TxGroup.get_dbid("Ignore"),
                    )

    if txgroup_dbid is None:
        if isinstance(txhash := entry.hash, TransactionHash):
            txhash = txhash.hex()
        txgroup_dbid = HashMatcher.match(txhash)

    if txgroup_dbid is None:
        txgroup_dbid = FromAddressMatcher.match(entry.from_address)

    if txgroup_dbid is None:
        txgroup_dbid = ToAddressMatcher.match(entry.to_address)

    if txgroup_dbid is None:
        if (
            entry.from_address
            and (from_wallet := TreasuryWallet._get_instance(entry.from_address))
            # TODO: asyncify the start and end block stuff
            and from_wallet._start_block <= entry.block_number
            and (
                from_wallet._end_block is None
                or from_wallet._end_block >= entry.block_number
            )
        ):
            txgroup_dbid = must_sort_outbound_txgroup_dbid

        elif (
            entry.to_address
            and (to_wallet := TreasuryWallet._get_instance(entry.to_address))
            and to_wallet._start_block <= entry.block_number
            and to_wallet._end_block is None
            or entry.block_number <= to_wallet._end_block  # type: ignore [union-attr, operator]
        ):
            txgroup_dbid = must_sort_inbound_txgroup_dbid

        else:
            raise NotImplementedError("this isnt supposed to happen")
    return txgroup_dbid  # type: ignore [no-any-return]


def sort_basic_entity(entry: db.TreasuryTx) -> TxGroupDbid:
    txgroup_dbid: Optional[TxGroupDbid] = None
    if entry.from_address:
        if from_wallet := TreasuryWallet._get_instance(entry.from_address.address):
            # TODO: asyncify the start and end block stuff
            start_block_for_wallet = from_wallet._start_block
            end_block_for_wallet = from_wallet._end_block
            if (
                start_block_for_wallet <= entry.block
                and (
                    end_block_for_wallet is None or entry.block <= end_block_for_wallet
                )
                and entry.to_address
            ):
                if to_wallet := TreasuryWallet._get_instance(entry.to_address.address):
                    start_block_for_wallet = to_wallet._start_block
                    end_block_for_wallet = to_wallet._end_block
                    if start_block_for_wallet <= entry.block and (
                        end_block_for_wallet is None
                        or entry.block <= end_block_for_wallet
                    ):
                        txgroup_dbid = TxGroup.get_dbid(
                            name="Internal Transfer",
                            parent=TxGroup.get_dbid("Ignore"),
                        )

    if txgroup_dbid is None:
        txgroup_dbid = HashMatcher.match(entry.hash)

    if txgroup_dbid is None:
        txgroup_dbid = FromAddressMatcher.match(entry.from_address.address)

    if txgroup_dbid is None and entry.to_address:
        txgroup_dbid = ToAddressMatcher.match(entry.to_address.address)

    if txgroup_dbid is None:
        if (
            entry.from_address
            and (
                from_wallet := TreasuryWallet._get_instance(entry.from_address.address)
            )
            # TODO: asyncify the start and end block stuff
            and from_wallet._start_block <= entry.block
            and (
                from_wallet._end_block is None or from_wallet._end_block >= entry.block
            )
        ):
            txgroup_dbid = must_sort_outbound_txgroup_dbid

        elif (
            entry.to_address
            and (to_wallet := TreasuryWallet._get_instance(entry.to_address.address))
            and to_wallet._start_block <= entry.block
            and to_wallet._end_block is None
            or entry.block <= to_wallet._end_block  # type: ignore [union-attr, operator]
        ):
            txgroup_dbid = must_sort_inbound_txgroup_dbid

        else:
            raise NotImplementedError("this isnt supposed to happen")

    if txgroup_dbid not in (
        must_sort_inbound_txgroup_dbid,
        must_sort_outbound_txgroup_dbid,
    ):
        logger.info("Sorted %s to %s", entry, TxGroup.get_fullname(txgroup_dbid))

    return txgroup_dbid  # type: ignore [no-any-return]


async def sort_advanced(entry: db.TreasuryTx) -> TxGroupDbid:
    txgroup_dbid = sort_basic_entity(entry)

    if txgroup_dbid in (
        must_sort_inbound_txgroup_dbid,
        must_sort_outbound_txgroup_dbid,
    ):
        for rules in SORT_RULES.values():
            for rule in rules:
                if await rule.match(entry):
                    txgroup_dbid = rule.txgroup_dbid
                    break

    if txgroup_dbid not in (
        must_sort_inbound_txgroup_dbid,
        must_sort_outbound_txgroup_dbid,
    ):
        logger.info("Sorted %s to %s", entry, TxGroup.get_fullname(txgroup_dbid))
        entry.txgroup = txgroup_dbid

    return txgroup_dbid  # type: ignore [no-any-return]
