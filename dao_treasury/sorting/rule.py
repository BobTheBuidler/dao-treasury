# dao_treasury/sorting/rule.py

"""Module defining transaction sorting rules for the DAO treasury.

This module provides the `_SortRule` base class and subclasses for categorizing
`TreasuryTx` entries based on their attributes or a custom function. When a rule
is instantiated, it registers itself in the global `SORT_RULES` mapping under its
class and configures which transaction attributes to match via `_match_all`.

Examples:
    # Define a revenue rule for sales (assuming you only transact in DAI for sales)
    >>> from dao_treasury.sorting.rule import RevenueSortRule, SORT_RULES
    >>> RevenueSortRule(
    ...     txgroup='Sale',
    ...     token_address='0x6B175474E89094d879c81e570a000000000000',
    ...     symbol='DAI'
    ... )
    # Inspect rules registered for RevenueSortRule
    >>> len(SORT_RULES[RevenueSortRule])
    1

    # Iterate over all ExpenseSortRule instances
    >>> from dao_treasury.sorting.rule import ExpenseSortRule
    >>> for rule in SORT_RULES[ExpenseSortRule]:
    ...     print(rule.txgroup)

See Also:
    :const:`~dao_treasury.sorting.rule.SORT_RULES`
    :class:`~dao_treasury.sorting.rule._SortRule`
"""

from collections import defaultdict
from dataclasses import dataclass
from logging import getLogger
from typing import (
    TYPE_CHECKING,
    DefaultDict,
    Dict,
    Final,
    List,
    Optional,
    Type,
    TypeVar,
)

from brownie.convert.datatypes import EthAddress
from eth_typing import HexStr
from mypy_extensions import mypyc_attr

from dao_treasury._wallet import TreasuryWallet
from dao_treasury.types import SortFunction, SortRule, TxGroupDbid, TxGroupName

if TYPE_CHECKING:
    from dao_treasury.db import TreasuryTx


logger: Final = getLogger(__name__)
_log_debug: Final = logger.debug

SORT_RULES: DefaultDict[Type[SortRule], List[SortRule]] = defaultdict(list)
"""Mapping from sort rule classes to lists of instantiated rules, in creation order per class.

Each key is a subclass of :class:`~dao_treasury.types.SortRule` and the corresponding
value is the list of rule instances of that class.

Examples:
    >>> from dao_treasury.sorting.rule import RevenueSortRule, SORT_RULES
    >>> RevenueSortRule(txgroup='Interest', symbol='DAI')
    >>> SORT_RULES[RevenueSortRule][0].txgroup
    'Revenue:Interest'
"""

_match_all: Final[Dict[TxGroupName, List[str]]] = {}
"""An internal cache defining which matcher attributes are used for each `txgroup`."""

_MATCHING_ATTRS: Final = (
    "hash",
    "from_address",
    "from_nickname",
    "to_address",
    "to_nickname",
    "token_address",
    "symbol",
    "log_index",
)


@mypyc_attr(native_class=False)
@dataclass(kw_only=True, frozen=True)
class _SortRule:
    """Base class for defining transaction matching rules.

    When instantiated, a rule validates its inputs, determines which transaction
    attributes to match (or uses a custom function), and registers itself
    in the global `SORT_RULES` mapping under its class.

    Matched transactions are assigned to the specified `txgroup`.

    See Also:
        :const:`dao_treasury.sorting.rule.SORT_RULES`
    """

    txgroup: TxGroupName
    """Name of the transaction group to assign upon match."""

    hash: Optional[HexStr] = None
    """Exact transaction hash to match."""

    from_address: Optional[EthAddress] = None
    """Source wallet address to match."""

    from_nickname: Optional[str] = None
    """Sender nickname (alias) to match."""

    to_address: Optional[EthAddress] = None
    """Recipient wallet address to match."""

    to_nickname: Optional[str] = None
    """Recipient nickname (alias) to match."""

    token_address: Optional[EthAddress] = None
    """Token contract address to match."""

    symbol: Optional[str] = None
    """Token symbol to match."""

    log_index: Optional[int] = None
    """Log index within the transaction receipt to match."""

    func: Optional[SortFunction] = None
    """Custom matching function that takes a `TreasuryTx` and returns a bool or an awaitable that returns a bool."""

    # __instances__: ClassVar[List[Self]] = []

    def __post_init__(self) -> None:
        """Validate inputs, checksum addresses, and register the rule.

        - Ensures no duplicate rule exists for the same `txgroup`.
        - Converts address fields to checksummed format.
        - Determines which attributes will be used for direct matching.
        - Validates that exactly one of attribute-based or function-based matching is provided.
        - Registers the instance in :attr:`SORT_RULES` and :data:`_match_all`.
        """
        if self.txgroup in _match_all:
            raise ValueError(
                f"there is already a matcher defined for txgroup {self.txgroup}: {self}"
            )

        # ensure addresses are checksummed if applicable
        for attr in ["from_address", "to_address", "token_address"]:
            value = getattr(self, attr)
            if value is not None:
                checksummed = EthAddress(value)
                # NOTE: we must use object.__setattr__ to modify a frozen dataclass instance
                object.__setattr__(self, attr, checksummed)

        # define matchers used for this instance
        matchers = [attr for attr in _MATCHING_ATTRS if getattr(self, attr) is not None]
        _match_all[self.txgroup] = matchers

        if self.func is not None and matchers:
            raise ValueError(
                "You must specify attributes for matching or pass in a custom matching function, not both."
            )

        if self.func is None and not matchers:
            raise ValueError(
                "You must specify attributes for matching or pass in a custom matching function."
            )

        if self.func is not None and not callable(self.func):
            raise TypeError(f"func must be callable. You passed {self.func}")

        # append new instance to instances classvar
        # TODO: fix dataclass ClassVar handling in mypyc and reenable
        # self.__instances__.append(self)

        # append new instance under its class key
        SORT_RULES[type(self)].append(self)

    @property
    def txgroup_dbid(self) -> TxGroupDbid:
        """Compute the database ID for this rule's `txgroup`.

        Splits the `txgroup` string on ':' and resolves or creates the hierarchical
        `TxGroup` entries in the database, returning the final group ID.

        See Also:
            :class:`~dao_treasury.db.TxGroup`.
        """
        from dao_treasury.db import TxGroup

        txgroup = None
        for part in self.txgroup.split(":"):
            txgroup = TxGroup.get_dbid(part, txgroup)
        return txgroup

    async def match(self, tx: "TreasuryTx") -> bool:
        """Determine if the given transaction matches this rule.

        Args:
            tx: A `TreasuryTx` entity to test against this rule.

        Returns:
            True if the transaction matches the rule criteria; otherwise False.

        Examples:
            # match by symbol and recipient
            >>> rule = _SortRule(txgroup='Foo', symbol='DAI', to_address='0xabc...')
            >>> await rule.match(tx)  # where tx.symbol == 'DAI' and tx.to_address == '0xabc...'
            True

        See Also:
            :attr:`_match_all`
        """
        if matchers := _match_all[self.txgroup]:
            return all(
                getattr(tx, matcher) == getattr(self, matcher) for matcher in matchers
            )

        _log_debug("checking %s for %s", tx, self.func)
        match = self.func(tx)  # type: ignore [misc]
        return match if isinstance(match, bool) else await match


@mypyc_attr(native_class=False)
class _InboundSortRule(_SortRule):
    """Sort rule that applies only to inbound transactions (to the DAO's wallet).

    Checks that the transaction's `to_address` belongs to a known `TreasuryWallet`
    before applying the base matching logic.
    """

    async def match(self, tx: "TreasuryTx") -> bool:
        return (
            tx.to_address is not None
            and TreasuryWallet.check_membership(tx.to_address.address, tx.block)
            and await super().match(tx)
        )


@mypyc_attr(native_class=False)
class _OutboundSortRule(_SortRule):
    """Sort rule that applies only to outbound transactions (from the DAO's wallet).

    Checks that the transaction's `from_address` belongs to a known `TreasuryWallet`
    before applying the base matching logic.
    """

    async def match(self, tx: "TreasuryTx") -> bool:
        return TreasuryWallet.check_membership(
            tx.from_address.address, tx.block
        ) and await super().match(tx)


@mypyc_attr(native_class=False)
class RevenueSortRule(_InboundSortRule):
    """Rule to categorize inbound transactions as revenue.

    Prepends 'Revenue:' to the `txgroup` name before registration.

    Examples:
        >>> RevenueSortRule(txgroup='Sale', to_address='0xabc...', symbol='DAI')
        # results in a rule with txgroup 'Revenue:Sale'
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Revenue:'."""
        object.__setattr__(self, "txgroup", f"Revenue:{self.txgroup}")
        super().__post_init__()


@mypyc_attr(native_class=False)
class CostOfRevenueSortRule(_OutboundSortRule):
    """Rule to categorize outbound transactions as cost of revenue.

    Prepends 'Cost of Revenue:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Cost of Revenue:'."""
        object.__setattr__(self, "txgroup", f"Cost of Revenue:{self.txgroup}")
        super().__post_init__()


@mypyc_attr(native_class=False)
class ExpenseSortRule(_OutboundSortRule):
    """Rule to categorize outbound transactions as expenses.

    Prepends 'Expenses:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Expenses:'."""
        object.__setattr__(self, "txgroup", f"Expenses:{self.txgroup}")
        super().__post_init__()


@mypyc_attr(native_class=False)
class OtherIncomeSortRule(_InboundSortRule):
    """Rule to categorize inbound transactions as other income.

    Prepends 'Other Income:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Other Income:'."""
        object.__setattr__(self, "txgroup", f"Other Income:{self.txgroup}")
        super().__post_init__()


@mypyc_attr(native_class=False)
class OtherExpenseSortRule(_OutboundSortRule):
    """Rule to categorize outbound transactions as other expenses.

    Prepends 'Other Expenses:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Other Expenses:'."""
        object.__setattr__(self, "txgroup", f"Other Expenses:{self.txgroup}")
        super().__post_init__()


@mypyc_attr(native_class=False)
class IgnoreSortRule(_SortRule):
    """Rule to ignore certain transactions.

    Prepends 'Ignore:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Ignore:'."""
        object.__setattr__(self, "txgroup", f"Ignore:{self.txgroup}")
        super().__post_init__()


TRule = TypeVar(
    "TRule",
    RevenueSortRule,
    CostOfRevenueSortRule,
    ExpenseSortRule,
    OtherIncomeSortRule,
    OtherExpenseSortRule,
    IgnoreSortRule,
)
