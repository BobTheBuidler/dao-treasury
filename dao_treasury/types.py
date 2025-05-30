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
"""Type alias for specifying one or more blockchain networks.

This can be a single :class:`~y.networks.Network` enum member or any iterable
of such members. It is used to restrict operations to specific networks when
configuring or querying treasury data.

Examples:
    Specify a single network:
        >>> net: Networks = Network.Mainnet

    Specify multiple networks:
        >>> nets: Networks = [Network.Mainnet, Network.Optimism]

See Also:
    :class:`~y.networks.Network`
"""


TopLevelCategory = Literal[
    "Revenue",
    "Cost of Revenue",
    "Expenses",
    "Other Income",
    "Other Expenses",
    "Ignore",
]
"""Literal type defining the allowed top‐level categories for treasury transactions.

Each transaction must be assigned to one of these categories in order to
generate financial reports.

Examples:
    Grouping a transaction as revenue:
        >>> cat: TopLevelCategory = "Revenue"

    Ignoring a transaction:
        >>> cat: TopLevelCategory = "Ignore"
"""


TxGroupDbid = NewType("TxGroupDbid", int)
"""NewType representing the primary key of a transaction group in the database.

This is the integer identifier returned by
:meth:`~dao_treasury.db.TxGroup.get_dbid`.

Examples:
    Get the database ID for the "Expenses" group:
        >>> dbid: TxGroupDbid = TxGroupDbid(3)
"""


TxGroupName = str
"""Alias for the human‐readable name of a transaction group.

Names are passed to
:meth:`~dao_treasury.db.TxGroup.get_dbid` 
to retrieve or create groups in the database.

Examples:
    Creating or retrieving the "Other Income" group:
        >>> name: TxGroupName = "Other Income"
        >>> dbid = TxGroup.get_dbid(name)
"""


SortFunction = Union[
    Callable[["TreasuryTx"], bool],
    Callable[["TreasuryTx"], Awaitable[bool]],
]
"""Type for a function or coroutine that determines if a transaction matches a rule.

A sorting function takes a single :class:`~dao_treasury.db.TreasuryTx`
instance and returns a boolean or an awaitable resolving to a boolean to
indicate whether the rule applies.

Examples:
    Synchronous matcher:
        >>> def is_large(tx: TreasuryTx) -> bool:
        ...     return tx.amount > 1000

    Asynchronous matcher:
        >>> async def has_tag(tx: TreasuryTx) -> bool:
        ...     return await some_external_check(tx.hash)

See Also:
    :class:`~dao_treasury.sorting.rule._SortRule.match`
"""


SortRule = Union[
    "RevenueSortRule",
    "CostOfRevenueSortRule",
    "ExpenseSortRule",
    "OtherIncomeSortRule",
    "OtherExpenseSortRule",
    "IgnoreSortRule",
]
"""Union of all built‐in sort rule classes.

Each rule assigns transactions to a specific category by matching on
transaction attributes or by invoking a custom function.

Examples:
    Define a list of available sort rules:
        >>> from dao_treasury.sorting.rule import SORT_RULES
        >>> rules: list[SortRule] = SORT_RULES

See Also:
    :class:`~dao_treasury.sorting.rule.RevenueSortRule`
    :class:`~dao_treasury.sorting.rule.ExpenseSortRule`
    :class:`~dao_treasury.sorting.rule.IgnoreSortRule`
    :class:`~dao_treasury.sorting.rule.CostOfRevenueSortRule`
    :class:`~dao_treasury.sorting.rule.OtherIncomeSortRule`
    :class:`~dao_treasury.sorting.rule.OtherExpenseSortRule`
"""
