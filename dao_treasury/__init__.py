"""DAO Treasury package initializer.

Exposes the main public API for the library, including the Treasury class,
wallet management, sorting rules, and database models. Sets up address
nicknames and enables SQL debugging if configured.

Key Responsibilities:
    - Import and expose core classes and functions.
    - Initialize address nicknames in the database.
    - Configure SQL debugging for development.

This is the main import point for users and integrations.
"""

from dao_treasury import ENVIRONMENT_VARIABLES as ENVS
from dao_treasury._wallet import TreasuryWallet
from dao_treasury.db import TreasuryTx
from dao_treasury.sorting import (
    CostOfRevenueSortRule,
    ExpenseSortRule,
    IgnoreSortRule,
    OtherExpenseSortRule,
    OtherIncomeSortRule,
    RevenueSortRule,
    SortRuleFactory,
    cost_of_revenue,
    expense,
    ignore,
    other_expense,
    other_income,
    revenue,
)
from dao_treasury.treasury import Treasury


if ENVS.SQL_DEBUG:
    import pony.orm

    pony.orm.sql_debug(True)

__all__ = [
    "Treasury",
    "TreasuryWallet",
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
    "TreasuryTx",
    "SortRuleFactory",
]
