from typing import Final, Iterable, Union, final, overload

from y import Network, constants

from dao_treasury.sorting.rule import (
    CostOfRevenueSortRule, 
    ExpenseSortRule, 
    IgnoreSortRule, 
    OtherExpenseSortRule, 
    OtherIncomeSortRule, 
    RevenueSortRule,
)
from dao_treasury.types import SortFunction, SortRuleType, TxGroupName


Networks = Union[Network, Iterable[Network]]

CHAINID: Final = constants.CHAINID


def revenue(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, networks, RevenueSortRule)

def cost_of_revenue(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, networks, CostOfRevenueSortRule)

def expense(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, networks, ExpenseSortRule)

def other_income(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, networks, OtherIncomeSortRule)

def other_expense(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, networks, OtherExpenseSortRule)

def ignore(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleDecorator":
    return SortRuleDecorator(txgroup, networks, IgnoreSortRule)


@final
class SortRuleDecorator:
    def __init__(
        self,
        txgroup: TxGroupName, 
        networks: Networks,
        rule_type: SortRuleType, 
    ) -> None:
        self.txgroup: Final = txgroup
        self.networks: Final = [networks] if isinstance(networks, int) else list(networks)
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
            if CHAINID in self.networks:
                self.rule_type(txgroup=self.txgroup, func=func)
            return func
        raise ValueError(func)
