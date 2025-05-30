from typing import Any, Final, Generic, Optional, TypeVar, Union, final, overload

from y import constants

from dao_treasury.sorting.rule import (
    CostOfRevenueSortRule, 
    ExpenseSortRule, 
    IgnoreSortRule, 
    OtherExpenseSortRule, 
    OtherIncomeSortRule, 
    RevenueSortRule,
)
from dao_treasury.types import Networks, SortFunction, TxGroupName


TRule = TypeVar(
    "TRule", 
    RevenueSortRule,
    CostOfRevenueSortRule,
    ExpenseSortRule,
    OtherIncomeSortRule,
    OtherExpenseSortRule,
    IgnoreSortRule,
)


CHAINID: Final = constants.CHAINID


def revenue(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleFactory[RevenueSortRule]":
    return SortRuleFactory(txgroup, networks, RevenueSortRule)

def cost_of_revenue(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleFactory[CostOfRevenueSortRule]":
    return SortRuleFactory(txgroup, networks, CostOfRevenueSortRule)

def expense(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleFactory[ExpenseSortRule]":
    return SortRuleFactory(txgroup, networks, ExpenseSortRule)

def other_income(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleFactory[OtherIncomeSortRule]":
    return SortRuleFactory(txgroup, networks, OtherIncomeSortRule)

def other_expense(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleFactory[OtherExpenseSortRule]":
    return SortRuleFactory(txgroup, networks, OtherExpenseSortRule)

def ignore(txgroup: TxGroupName, networks: Networks = CHAINID) -> "SortRuleFactory[IgnoreSortRule]":
    return SortRuleFactory(txgroup, networks, IgnoreSortRule)


@final
class SortRuleFactory(Generic[TRule]):
    def __init__(
        self,
        txgroup: TxGroupName, 
        networks: Networks,
        rule_type: TRule, 
    ) -> None:
        self.txgroup: Final = txgroup
        self.networks: Final = [networks] if isinstance(networks, int) else list(networks)
        self.rule_type: Final = rule_type
        self._rule: Optional[TRule] = None
    @overload
    def __call__(self, txgroup_name: TxGroupName, networks: Optional[Networks] = None) -> "SortRuleFactory":...
    @overload
    def __call__(self, func: SortFunction) -> SortFunction:...
    def __call__(  # type: ignore [misc]
        self, 
        func: Union[TxGroupName, SortFunction],
        networks: Optional[Networks] = None,
    ) -> Union["SortRuleFactory", SortFunction]:
        if isinstance(func, str):
            return SortRuleFactory(f"{self.txgroup}:{func}", networks or self.networks, self.rule_type)
        elif callable(func):
            if networks:
                raise RuntimeError("you can only pass networks if `func` is a string")
            if CHAINID in self.networks:
                self.__check_locked()
                self._rule = self.rule_type(txgroup=self.txgroup, func=func)
            return func
        raise ValueError(func)
    @property
    def rule(self) -> Optional[TRule]:
        return self._rule
    def match(self, func: None = None, **match_values: Any) -> None:  # TODO: give this proper kwargs
        if func is not None:
            raise ValueError(f"You cannot pass a func here, call {self} with the function as the sole arg instead")
        self.__check_locked()
        self._rule = self.rule_type(txgroup=self.txgroup, **match_values)
        self.locked = True
    def __check_locked(self) -> None:
        if self._rule is not None:
            raise RuntimeError(f"{self} already has a matcher")
