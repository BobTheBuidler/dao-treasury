from typing import Any, Final, Generic, Optional, Union, final, overload

from dao_treasury.constants import CHAINID
from dao_treasury.sorting.rule import (
    CostOfRevenueSortRule,
    ExpenseSortRule,
    IgnoreSortRule,
    OtherExpenseSortRule,
    OtherIncomeSortRule,
    RevenueSortRule,
    TRule,
)
from dao_treasury.types import Networks, SortFunction, TxGroupName


def revenue(
    txgroup: TxGroupName, networks: Networks = CHAINID
) -> "SortRuleFactory[RevenueSortRule]":
    """Create a factory to register revenue sort rules for a given transaction group.

    Args:
        txgroup: Base name of the transaction group to categorize as revenue.
        networks: Network ID or iterable of network IDs on which this rule applies.

    See Also:
        :func:`cost_of_revenue`
        :class:`SortRuleFactory`

    Examples:
        >>> from dao_treasury.sorting.factory import revenue
        >>> @revenue("Token Sales")
        ... def match_sales(tx):
        ...     return tx.amount > 0 and tx.to_address is not None
    """
    return SortRuleFactory(txgroup, networks, RevenueSortRule)


def cost_of_revenue(
    txgroup: TxGroupName, networks: Networks = CHAINID
) -> "SortRuleFactory[CostOfRevenueSortRule]":
    """Create a factory to register cost‐of‐revenue sort rules for a given transaction group.

    Args:
        txgroup: Base name of the transaction group to categorize as cost of revenue.
        networks: Network ID or iterable of network IDs on which this rule applies.

    See Also:
        :func:`revenue`
        :class:`SortRuleFactory`

    Examples:
        >>> from dao_treasury.sorting.factory import cost_of_revenue
        >>> @cost_of_revenue("Manufacturing")
        ... def match_manufacturing(tx):
        ...     return tx.from_address is not None and tx.amount_usd > 1000
    """
    return SortRuleFactory(txgroup, networks, CostOfRevenueSortRule)


def expense(
    txgroup: TxGroupName, networks: Networks = CHAINID
) -> "SortRuleFactory[ExpenseSortRule]":
    """Create a factory to register expense sort rules for a given transaction group.

    Args:
        txgroup: Base name of the transaction group to categorize as expense.
        networks: Network ID or iterable of network IDs on which this rule applies.

    See Also:
        :func:`other_expense`
        :class:`SortRuleFactory`

    Examples:
        >>> from dao_treasury.sorting.factory import expense
        >>> @expense("Office Supplies")
        ... def match_supplies(tx):
        ...     return tx.symbol == "USD" and tx.amount < 500
    """
    return SortRuleFactory(txgroup, networks, ExpenseSortRule)


def other_income(
    txgroup: TxGroupName, networks: Networks = CHAINID
) -> "SortRuleFactory[OtherIncomeSortRule]":
    """Create a factory to register other‐income sort rules for a given transaction group.

    Args:
        txgroup: Base name of the transaction group to categorize as other income.
        networks: Network ID or iterable of network IDs on which this rule applies.

    See Also:
        :func:`revenue`
        :class:`SortRuleFactory`

    Examples:
        >>> from dao_treasury.sorting.factory import other_income
        >>> @other_income("Interest")
        ... def match_interest(tx):
        ...     return tx.token_address == SOME_TOKEN and tx.amount > 0
    """
    return SortRuleFactory(txgroup, networks, OtherIncomeSortRule)


def other_expense(
    txgroup: TxGroupName, networks: Networks = CHAINID
) -> "SortRuleFactory[OtherExpenseSortRule]":
    """Create a factory to register other‐expense sort rules for a given transaction group.

    Args:
        txgroup: Base name of the transaction group to categorize as other expense.
        networks: Network ID or iterable of network IDs on which this rule applies.

    See Also:
        :func:`expense`
        :class:`SortRuleFactory`

    Examples:
        >>> from dao_treasury.sorting.factory import other_expense
        >>> @other_expense("Misc Fees")
        ... def match_misc(tx):
        ...     return tx.amount_usd < 0 and tx.symbol == "ETH"
    """
    return SortRuleFactory(txgroup, networks, OtherExpenseSortRule)


def ignore(
    txgroup: TxGroupName, networks: Networks = CHAINID
) -> "SortRuleFactory[IgnoreSortRule]":
    """Create a factory to register ignore sort rules for a given transaction group.

    Args:
        txgroup: Base name of the transaction group to categorize as ignored.
        networks: Network ID or iterable of network IDs on which this rule applies.

    See Also:
        :class:`SortRuleFactory`

    Examples:
        >>> from dao_treasury.sorting.factory import ignore
        >>> @ignore("Dust")
        ... def match_dust(tx):
        ...     return abs(tx.value_usd) < 0.01
    """
    return SortRuleFactory(txgroup, networks, IgnoreSortRule)


@final
class SortRuleFactory(Generic[TRule]):
    """Builder for creating sort rule instances for a specific transaction group and network(s).

    This factory supports two patterns:

    1. Decorating a function to register a dynamic matching rule.
    2. Calling :meth:`match` to supply static match attributes.

    Use the convenience functions like :func:`revenue`, :func:`expense`, etc.,
    to obtain an instance of this factory preconfigured with the appropriate rule type.

    Examples:
        >>> from dao_treasury.sorting.factory import revenue
        >>> @revenue("Sales", networks=[1, 3])
        ... def match_large_sales(tx):
        ...     return tx.value_usd > 1000
    """

    def __init__(
        self,
        txgroup: TxGroupName,
        networks: Networks,
        rule_type: TRule,
    ) -> None:
        """Initialize the sort rule factory.

        Args:
            txgroup: Base name of the transaction group.
            networks: Single network ID or iterable of network IDs where the rule applies.
            rule_type: Sort rule class (e.g., RevenueSortRule) to instantiate.
        """
        self.txgroup: Final = txgroup
        self.networks: Final = (
            [networks] if isinstance(networks, int) else list(networks)
        )
        self.rule_type: Final = rule_type
        self._rule: Optional[TRule] = None

    @overload
    def __call__(
        self, txgroup_name: TxGroupName, networks: Optional[Networks] = None
    ) -> "SortRuleFactory":
        """Configure a nested sub‐group.

        Args:
            txgroup_name: Sub‐group name.
            networks: Optional network specification.
        """

    @overload
    def __call__(self, func: SortFunction) -> SortFunction:
        """Register a matching function.

        Args:
            func: The custom matching function.
        """

    def __call__(  # type: ignore [misc]
        self,
        func: Union[TxGroupName, SortFunction],
        networks: Optional[Networks] = None,
    ) -> Union["SortRuleFactory", SortFunction]:
        """Configure a nested sub‐group or register a matching function.

        Overloads:
            * If `func` is a string, returns a new factory for `txgroup:func`.
            * If `func` is callable, registers it as the match logic.

        Args:
            func: Sub‐group suffix (str) or a custom matching function.
            networks: Optional networks override (only valid when `func` is str).

        Raises:
            RuntimeError: If `networks` is passed when `func` is callable.
            ValueError: If `func` is neither str nor callable.

        See Also:
            :meth:`match`

        Examples:
            >>> fees = expense("Fees")
            >>> @fees("Gas")
            ... def match_gas(tx):
            ...     return tx.symbol == "ETH"
        """
        if isinstance(func, str):
            return SortRuleFactory(
                f"{self.txgroup}:{func}", networks or self.networks, self.rule_type
            )
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
        """Return the created sort rule instance, if any.

        After decoration or a call to :meth:`match`, this property holds the
        concrete :class:`~dao_treasury.types.SortRule` instance.

        Examples:
            >>> @other_income("Interest")
            ... def match_i(tx):
            ...     return tx.value_usd > 100
        """
        return self._rule

    def match(
        self, func: None = None, **match_values: Any
    ) -> None:  # TODO: give this proper kwargs
        """Define static matching attributes for the sort rule.

        Call this method with keyword matchers corresponding to rule attributes
        (e.g., hash, from_address, symbol) to create a rule matching based on these values.

        Args:
            func: Must be None; a function match must use the decorator form.
            **match_values: Attribute values for matching (e.g., hash="0x123", symbol="DAI").

        Raises:
            ValueError: If `func` is not None.
            RuntimeError: If a matcher has already been set.

        See Also:
            :meth:`__call__`

        Examples:
            >>> ignore("Dust").match(symbol="WETH", from_address="0xAAA")
        """
        if func is not None:
            raise ValueError(
                f"You cannot pass a func here, call {self} with the function as the sole arg instead"
            )
        # Only instantiate when we're on an allowed network
        if CHAINID in self.networks:
            self.__check_locked()
            self._rule = self.rule_type(txgroup=self.txgroup, **match_values)
            self.locked = True

    def __check_locked(self) -> None:
        """Ensure that no matcher has already been registered.

        Raises:
            RuntimeError: If this factory already has a matcher assigned.
        """
        if self._rule is not None:
            raise RuntimeError(f"{self} already has a matcher")
