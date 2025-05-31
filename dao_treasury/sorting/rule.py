"""Module defining transaction sorting rules for the DAO treasury.

This module provides the `_SortRule` base class and subclasses for categorizing
`TreasuryTx` entries based on their attributes or a custom function. When a rule
is instantiated, it registers itself in the global `SORT_RULES` list and
configures which transaction attributes to match via `_match_all`.

Examples:
    >>> from dao_treasury.sorting.rule import RevenueSortRule, SORT_RULES
    >>> # Define a revenue rule for DAI sales
    >>> RevenueSortRule(txgroup='Sale', token_address='0x6B175474E89094d879c81e570a...', symbol='DAI')
    >>> len(SORT_RULES)
    1

See Also:
    :const:`~dao_treasury.sorting.rule.SORT_RULES`
    :class:`~dao_treasury.sorting.rule._SortRule`
"""

from dataclasses import dataclass
from typing import TYPE_CHECKING, ClassVar, Dict, Final, List, Optional

from brownie.convert.datatypes import EthAddress
from eth_typing import HexStr

from dao_treasury._wallet import TreasuryWallet
from dao_treasury.types import SortFunction, TxGroupDbid, TxGroupName

if TYPE_CHECKING:
    from dao_treasury.db import TreasuryTx


SORT_RULES: List["_SortRule"] = []
"""List of all instantiated sorting rules, in order of creation."""

_match_all: Final[Dict[TxGroupName, List[str]]] = {}
"""An internal cache defining which matcher attributes are used for each `txgroup`."""


@dataclass(kw_only=True, frozen=True)
class _SortRule:
    """Base class for defining transaction matching rules.

    When instantiated, a rule validates its inputs, determines which transaction
    attributes to match (or uses a custom function), and registers itself. Matched
    transactions are assigned to the specified `txgroup`.
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

    __instances__: ClassVar[List["_SortRule"]] = []
    __matching_attrs__: ClassVar[List[str]] = [
        "hash",
        "from_address",
        "from_nickname",
        "to_address",
        "to_nickname",
        "token_address",
        "symbol",
        "log_index",
    ]

    def __post_init__(self) -> None:
        """Validate inputs, checksum addresses, and register the rule.

        - Ensures no duplicate rule exists for the same `txgroup`.
        - Converts address fields to checksummed format.
        - Determines which attributes will be used for direct matching.
        - Validates that exactly one of attribute-based or function-based matching is provided.
        - Registers the instance in `__instances__` and `_match_all`.
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
        # TODO: maybe import the string matchers and use them here too? They're a lot faster
        matchers = [
            attr for attr in self.__matching_attrs__ if getattr(self, attr) is not None
        ]

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
        self.__instances__.append(self)

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
        for part in reversed(self.txgroup.split(":")):
            txgroup = TxGroup.get_dbid(part, txgroup)
        return txgroup

    async def match(self, tx: "TreasuryTx") -> bool:
        """Determine if the given transaction matches this rule.

        Args:
            tx: A `TreasuryTx` entity to test against this rule.

        Returns:
            True if the transaction matches the rule criteria; otherwise False.

        Examples:
            >>> # match by symbol and recipient
            >>> rule = _SortRule(txgroup='Foo', symbol='DAI', to_address='0xabc...')
            >>> await rule.match(tx)  # where tx.symbol == 'DAI' and tx.to_address == '0xabc...'
            True

        See Also:
            :attr:`_match_all`
        """
        if matchers := _match_all[self.txgroup]:
            return all(
                getattr(self, matcher) == getattr(tx, matcher) for matcher in matchers
            )

        match = self.func(tx)  # type: ignore [misc]
        return match if isinstance(match, bool) else await match


class _InboundSortRule(_SortRule):
    """Sort rule that applies only to inbound transactions (to the DAO's wallet).

    Checks that the transaction's `to_address` belongs to a known `TreasuryWallet`
    before applying the base matching logic.
    """

    async def match(self, tx: "TreasuryTx") -> bool:
        return (
            tx.to_address is not None
            and TreasuryWallet._get_instance(tx.to_address.address) is not None
            and await super().match(tx)
        )


class _OutboundSortRule(_SortRule):
    """Sort rule that applies only to outbound transactions (from the DAO's wallet).

    Checks that the transaction's `from_address` belongs to a known `TreasuryWallet`
    before applying the base matching logic.
    """

    async def match(self, tx: "TreasuryTx") -> bool:
        return TreasuryWallet._get_instance(
            tx.from_address.address
        ) is not None and await super().match(tx)


class RevenueSortRule(_InboundSortRule):
    """Rule to categorize inbound transactions as revenue.

    Prepends 'Revenue:' to the `txgroup` name before registration.

    Examples:
        >>> # Revenue from sales
        >>> RevenueSortRule(txgroup='Sale', to_address='0xabc...', symbol='DAI')
        # results in a rule with txgroup 'Revenue:Sale'
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Revenue:'."""
        object.__setattr__(self, "txgroup", f"Revenue:{self.txgroup}")
        super().__post_init__()


class CostOfRevenueSortRule(_OutboundSortRule):
    """Rule to categorize outbound transactions as cost of revenue.

    Prepends 'Cost of Revenue:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Cost of Revenue:'."""
        object.__setattr__(self, "txgroup", f"Cost of Revenue:{self.txgroup}")
        super().__post_init__()


class ExpenseSortRule(_OutboundSortRule):
    """Rule to categorize outbound transactions as expenses.

    Prepends 'Expenses:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Expenses:'."""
        object.__setattr__(self, "txgroup", f"Expenses:{self.txgroup}")
        super().__post_init__()


class OtherIncomeSortRule(_InboundSortRule):
    """Rule to categorize inbound transactions as other income.

    Prepends 'Other Income:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Other Income:'."""
        object.__setattr__(self, "txgroup", f"Other Income:{self.txgroup}")
        super().__post_init__()


class OtherExpenseSortRule(_OutboundSortRule):
    """Rule to categorize outbound transactions as other expenses.

    Prepends 'Other Expenses:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Other Expenses:'."""
        object.__setattr__(self, "txgroup", f"Other Expenses:{self.txgroup}")
        super().__post_init__()


class IgnoreSortRule(_SortRule):
    """Rule to ignore certain transactions.

    Prepends 'Ignore:' to the `txgroup` name before registration.
    """

    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Ignore:'."""
        object.__setattr__(self, "txgroup", f"Ignore:{self.txgroup}")
        super().__post_init__()
