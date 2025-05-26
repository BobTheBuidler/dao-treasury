from typing import Final, Union, final, overload

from dao_treasury.sorting.rule import (
    CostOfRevenueSortRule, 
    ExpenseSortRule, 
    IgnoreSortRule, 
    OtherExpenseSortRule, 
    OtherIncomeSortRule, 
    RevenueSortRule,
)
from dao_treasury.types import SortFunction, SortRuleType, TxGroupName


def revenue(txgroup: TxGroupName) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, RevenueSortRule)

def cost_of_revenue(txgroup: TxGroupName) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, CostOfRevenueSortRule)

def expense(txgroup: TxGroupName) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, ExpenseSortRule)

def other_income(txgroup: TxGroupName) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, OtherIncomeSortRule)

def other_expense(txgroup: TxGroupName) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, OtherExpenseSortRule)

def ignore(txgroup: TxGroupName) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, IgnoreSortRule)


@final
class SortRuleDecorator:
    def __init__(self, txgroup: TxGroupName, rule_type: SortRuleType) -> None:
        self.txgroup: Final = txgroup
        self.rule_type: Final = rule_type
    @overload
    def __call__(self, txgroup_name: TxGroupName) -> "SortRuleDecorator":...
    @overload
    def __call__(self, func: SortFunction) -> SortFunction:...
    def __call__(  # type: ignore [misc]
        self, 
        func: Union[TxGroupName, SortFunction],
    ) -> Union["SortRuleDecorator", SortFunction]:
        if isinstance(func, str):
            return SortRuleDecorator(f"{self.txgroup}:{func}", self.rule_type)
        elif callable(func):
            self.rule_type(txgroup=self.txgroup, func=func)
            return func
        raise ValueError(func)
