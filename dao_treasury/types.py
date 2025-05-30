from typing import TYPE_CHECKING, Awaitable, Callable, Iterable, Literal, NewType, Union

from y import Network

if TYPE_CHECKING:
    from dao_treasury.db import TreasuryTx
    from dao_treasury.sorting.rule import (
        CostOfRevenueSortRule, 
        ExpenseSortRule, 
        IgnoreSortRule, 
        OtherExpenseSortRule, 
        OtherIncomeSortRule, 
        RevenueSortRule,
    )


Networks = Union[Network, Iterable[Network]]

TopLevelCategory = Literal["Revenue", "Cost of Revenue", "Expenses", "Other Income", "Other Expenses", "Ignore"]

TxGroupDbid = NewType("TxGroupDbid", int)
TxGroupName = str

SortFunction = Union[
    Callable[["TreasuryTx"], bool], 
    Callable[["TreasuryTx"], Awaitable[bool]],
]

SortRule = Union[
    "RevenueSortRule",
    "CostOfRevenueSortRule",
    "ExpenseSortRule",
    "OtherIncomeSortRule",
    "OtherExpenseSortRule",
    "IgnoreSortRule",
]
