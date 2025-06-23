# mypy: disable-error-code="operator,valid-type,misc"
"""
Database models and utilities for DAO treasury reporting.

This module defines Pony ORM entities for:
- Blockchain networks (:class:`Chain`)
- On-chain addresses (:class:`Address`)
- ERC-20 tokens and native coin placeholder (:class:`Token`)
- Hierarchical transaction grouping (:class:`TxGroup`)
- Treasury transaction records (:class:`TreasuryTx`)
- Streams and StreamedFunds for streaming payments

It also provides helper functions for inserting ledger entries,
resolving integrity conflicts, caching transaction receipts,
and creating SQL views for reporting.
"""

import typing
from asyncio import Semaphore
from decimal import Decimal, InvalidOperation
from functools import lru_cache
from logging import getLogger
from os import path
from pathlib import Path
from typing import TYPE_CHECKING, Dict, Final, Tuple, Union, final
from datetime import date, datetime, time, timezone

from a_sync import AsyncThreadPoolExecutor
from brownie import chain
from brownie.convert.datatypes import HexString
from brownie.exceptions import EventLookupError
from brownie.network.event import EventDict, _EventItem
from brownie.network.transaction import TransactionReceipt
from eth_typing import ChecksumAddress, HexAddress, HexStr
from eth_portfolio.structs import (
    InternalTransfer,
    LedgerEntry,
    TokenTransfer,
    Transaction,
)
from pony.orm import (
    Database,
    InterfaceError,
    Optional,
    PrimaryKey,
    Required,
    Set,
    TransactionIntegrityError,
    commit,
    composite_key,
    composite_index,
    db_session,
    select,
)
from y import EEE_ADDRESS, Contract, Network, convert, get_block_timestamp_async
from y.contracts import _get_code
from y.exceptions import ContractNotVerified

from dao_treasury.constants import CHAINID
from dao_treasury.types import TxGroupDbid, TxGroupName


SQLITE_DIR = Path(path.expanduser("~")) / ".dao-treasury"
"""Path to the directory in the user's home where the DAO treasury SQLite database is stored."""

SQLITE_DIR.mkdir(parents=True, exist_ok=True)


_INSERT_THREAD = AsyncThreadPoolExecutor(1)
_SORT_THREAD = AsyncThreadPoolExecutor(1)
_SORT_SEMAPHORE = Semaphore(50)

_UTC = timezone.utc

db = Database()

logger = getLogger("dao_treasury.db")

# ... [rest of the file unchanged up to view creation functions] ...


def create_stream_ledger_view() -> None:
    """Create or replace the SQL view `stream_ledger` for streamed funds reporting.

    This view joins streamed funds, streams, tokens, addresses, and txgroups
    into a unified ledger of stream transactions.

    Examples:
        >>> create_stream_ledger_view()
    """
    db.execute("""DROP VIEW IF EXISTS stream_ledger;""")
    db.execute(
        """
        create view stream_ledger as
        SELECT  'Mainnet' as chain_name,
                cast(strftime('%s', date || ' 00:00:00') as INTEGER) as timestamp,
                NULL as block, 
                NULL as hash, 
                NULL as log_index, 
                symbol as token, 
                d.address AS "from", 
                d.nickname as from_nickname, 
                e.address AS "to", 
                e.nickname as to_nickname, 
                amount, 
                price, 
                value_usd, 
                txgroup.name as txgroup, 
                parent.name as parent_txgroup, 
                txgroup.txgroup_id
        FROM streamed_funds a
            LEFT JOIN streams b ON a.stream = b.stream_id
            LEFT JOIN tokens c ON b.token = c.token_id
            LEFT JOIN addresses d ON b.from_address = d.address_id
            LEFT JOIN addresses e ON b.to_address = e.address_id
            LEFT JOIN txgroups txgroup ON b.txgroup = txgroup.txgroup_id
            LEFT JOIN txgroups parent ON txgroup.parent_txgroup = parent.txgroup_id
        """
    )

def create_txgroup_hierarchy_view() -> None:
    """Create or replace the SQL view `txgroup_hierarchy` for recursive txgroup hierarchy.

    This view exposes txgroup_id, top_category, and parent_txgroup for all txgroups,
    matching the recursive CTE logic used in dashboards.
    """
    db.execute("DROP VIEW IF EXISTS txgroup_hierarchy;")
    db.execute(
        """
        CREATE VIEW txgroup_hierarchy AS
        WITH RECURSIVE group_hierarchy (txgroup_id, top_category, parent_txgroup) AS (
            SELECT txgroup_id, name AS top_category, parent_txgroup
            FROM txgroups
            WHERE parent_txgroup IS NULL
            UNION ALL
            SELECT child.txgroup_id, parent.top_category, child.parent_txgroup
            FROM txgroups AS child
            JOIN group_hierarchy AS parent
                ON child.parent_txgroup = parent.txgroup_id
        )
        SELECT * FROM group_hierarchy;
        """
    )

def create_vesting_ledger_view() -> None:
    """Create or replace the SQL view `vesting_ledger` for vesting escrow reporting.

    This view joins vested funds, vesting escrows, tokens, chains, addresses,
    and txgroups to produce a vesting ledger.

    Examples:
        >>> create_vesting_ledger_view()
    """
    db.execute(
        """
        DROP VIEW IF EXISTS vesting_ledger;
        CREATE VIEW vesting_ledger AS
        SELECT  d.chain_name, 
            CAST(date AS timestamp) AS "timestamp",
            cast(NULL as int) AS block,
            NULL AS "hash",
            cast(NULL as int) AS "log_index",
            c.symbol AS "token",
            e.address AS "from",
            e.nickname as from_nickname,
            f.address AS "to",
            f.nickname as to_nickname,
            a.amount,
            a.price,
            a.value_usd,
            g.name as txgroup,
            h.name AS parent_txgroup,
            g.txgroup_id
        FROM vested_funds a 
        LEFT JOIN vesting_escrows b ON a.escrow = b.escrow_id
        LEFT JOIN tokens c ON b.token = c.token_id
        LEFT JOIN chains d ON c.chain = d.chain_dbid
        LEFT JOIN addresses e ON b.address = e.address_id
        LEFT JOIN addresses f ON b.recipient = f.address_id
        LEFT JOIN txgroups g ON b.txgroup = g.txgroup_id
        left JOIN txgroups h ON g.parent_txgroup = h.txgroup_id
    """
    )


def create_general_ledger_view() -> None:
    """Create or replace the SQL view `general_ledger` aggregating all treasury transactions.

    Joins chains, tokens, addresses, and txgroups into a single chronological ledger.

    Examples:
        >>> create_general_ledger_view()
    """
    db.execute("drop VIEW IF EXISTS general_ledger")
    db.execute(
        """
        create VIEW general_ledger as
        select *
        from (
            SELECT treasury_tx_id, b.chain_name, a.timestamp, a.block, a.hash, a.log_index, c.symbol AS token, d.address AS "from", d.nickname as from_nickname, e.address AS "to", e.nickname as to_nickname, a.amount, a.price, a.value_usd, f.name AS txgroup, g.name AS parent_txgroup, f.txgroup_id
            FROM treasury_txs a
                LEFT JOIN chains b ON a.chain = b.chain_dbid
                LEFT JOIN tokens c ON a.token_id = c.token_id
                LEFT JOIN addresses d ON a."from" = d.address_id
                LEFT JOIN addresses e ON a."to" = e.address_id
                LEFT JOIN txgroups f ON a.txgroup_id = f.txgroup_id
                LEFT JOIN txgroups g ON f.parent_txgroup = g.txgroup_id
            UNION
            SELECT -1, chain_name, timestamp, block, hash, log_index, token, "from", from_nickname, "to", to_nickname, amount, price, value_usd, txgroup, parent_txgroup, txgroup_id
            FROM stream_ledger
            --UNION
            --SELECT -1, *
            --FROM vesting_ledger
        ) a
        ORDER BY timestamp
        """
    )


def create_unsorted_txs_view() -> None:
    """Create or replace the SQL view `unsorted_txs` for pending categorization.

    Filters `general_ledger` for transactions still in 'Categorization Pending'.

    Examples:
        >>> create_unsorted_txs_view()
    """
    db.execute("DROP VIEW IF EXISTS unsorted_txs;")
    db.execute(
        """
        CREATE VIEW unsorted_txs as
        SELECT *
        FROM general_ledger
        WHERE txgroup = 'Categorization Pending'
        ORDER BY TIMESTAMP desc
        """
    )


def create_monthly_pnl_view() -> None:
    """Create or replace the SQL view `monthly_pnl` summarizing monthly profit and loss.

    Aggregates categorized transactions by month and top-level category.

    Examples:
        >>> create_monthly_pnl_view()
    """
    db.execute("DROP VIEW IF EXISTS monthly_pnl;")
    sql = """
    CREATE VIEW monthly_pnl AS
    WITH categorized AS (
      SELECT
        strftime('%Y-%m', datetime(t.timestamp, 'unixepoch')) AS month,
        CASE
          WHEN p.name IS NOT NULL THEN p.name
          ELSE tg.name
        END AS top_category,
        --COALESCE(t.value_usd, 0) AS value_usd,
        --COALESCE(t.gas_used, 0) * COALESCE(t.gas_price, 0) AS gas_cost
      FROM treasury_txs t
      JOIN txgroups tg ON t.txgroup = tg.txgroup_id
      LEFT JOIN txgroups p ON tg.parent_txgroup = p.txgroup_id
      WHERE tg.name <> 'Ignore'
    )
    SELECT
      month,
      SUM(CASE WHEN top_category = 'Revenue' THEN value_usd ELSE 0 END) AS revenue,
      SUM(CASE WHEN top_category = 'Cost of Revenue' THEN value_usd ELSE 0 END) AS cost_of_revenue,
      SUM(CASE WHEN top_category = 'Expenses' THEN value_usd ELSE 0 END) AS expenses,
      SUM(CASE WHEN top_category = 'Other Income' THEN value_usd ELSE 0 END) AS other_income,
      SUM(CASE WHEN top_category = 'Other Expenses' THEN value_usd ELSE 0 END) AS other_expense,
      (
        SUM(CASE WHEN top_category = 'Revenue' THEN value_usd ELSE 0 END) -
        SUM(CASE WHEN top_category = 'Cost of Revenue' THEN value_usd ELSE 0 END) -
        SUM(CASE WHEN top_category = 'Expenses' THEN value_usd ELSE 0 END) +
        SUM(CASE WHEN top_category = 'Other Income' THEN value_usd ELSE 0 END) -
        SUM(CASE WHEN top_category = 'Other Expenses' THEN value_usd ELSE 0 END)
      ) AS net_profit
    FROM categorized
    GROUP BY month;
    """
    db.execute(sql)


with db_session:
    create_stream_ledger_view()
    create_txgroup_hierarchy_view()
    # create_vesting_ledger_view()
    create_general_ledger_view()
    create_unsorted_txs_view()
    # create_monthly_pnl_view()

    must_sort_inbound_txgroup_dbid = TxGroup.get_dbid(name="Sort Me (Inbound)")
    must_sort_outbound_txgroup_dbid = TxGroup.get_dbid(name="Sort Me (Outbound)")


@db_session
def _validate_integrity_error(
    entry: LedgerEntry, log_index: int
) -> typing.Optional[int]:
    """Validate that an existing TreasuryTx matches an attempted insert on conflict.

    Raises AssertionError if any field deviates from the existing record.  Used
    to resolve :exc:`pony.orm.TransactionIntegrityError`.

    Args:
        entry: The ledger entry that triggered the conflict.
        log_index: The log index within the transaction.

    Examples:
        >>> _validate_integrity_error(entry, 0)
    """
    txhash = entry.hash.hex()
    chain_dbid = Chain.get_dbid()
    existing_object = TreasuryTx.get(hash=txhash, log_index=log_index, chain=chain_dbid)
    if existing_object is None:
        existing_objects = list(
            TreasuryTx.select(
                lambda tx: tx.hash == txhash
                and tx.log_index == log_index
                and tx.chain == chain_dbid
            )
        )
        raise ValueError(
            f"unable to `.get` due to multiple entries: {existing_objects}"
        )
    if entry.to_address:
        assert entry.to_address == existing_object.to_address.address, (
            entry.to_address,
            existing_object.to_address.address,
        )
    else:
        assert existing_object.to_address is None, (
            entry.to_address,
            existing_object.to_address,
        )
    assert entry.from_address == existing_object.from_address.address, (
        entry.from_address,
        existing_object.from_address.address,
    )
    try:
        assert entry.value in [existing_object.amount, -1 * existing_object.amount], (
            entry.value,
            existing_object.amount,
        )
    except AssertionError:
        logger.debug(
            "slight rounding error in value for TreasuryTx[%s] due to sqlite decimal handling",
            existing_object.treasury_tx_id,
        )
    assert entry.block_number == existing_object.block, (
        entry.block_number,
        existing_object.block,
    )
    if isinstance(entry, TokenTransfer):
        assert entry.token_address == existing_object.token.address.address, (
            entry.token_address,
            existing_object.token.address.address,
        )
    else:
        assert existing_object.token == EEE_ADDRESS
    # NOTE All good!
    return (
        existing_object.treasury_tx_id
        if existing_object.txgroup.txgroup_id
        in (
            must_sort_inbound_txgroup_dbid,
            must_sort_outbound_txgroup_dbid,
        )
        else None
    )
