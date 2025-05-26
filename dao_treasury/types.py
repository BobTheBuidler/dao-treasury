from typing import TYPE_CHECKING, Awaitable, Callable, Literal, NewType, Type, Union

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


TopLevelCategory = Literal["Revenue", "Cost of Revenue", "Expenses", "Other Income", "Other Expenses", "Ignore"]

TxGroupDbid = NewType("TxGroupDbid", int)


TxGroupName = str

SortFunction = Union[
    Callable[["TreasuryTx"], bool], 
    Callable[["TreasuryTx"], Awaitable[bool]],
]
