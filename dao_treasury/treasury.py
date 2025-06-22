from asyncio import create_task, gather
from logging import getLogger
from pathlib import Path
from typing import Final, Iterable, List, Optional, Union

import a_sync
from a_sync.a_sync.abstract import ASyncABC
from eth_typing import BlockNumber
from eth_portfolio.structs import LedgerEntry
from eth_portfolio.typing import PortfolioBalances
from eth_portfolio_scripts._portfolio import ExportablePortfolio
from pony.orm import db_session
from tqdm.asyncio import tqdm_asyncio

from dao_treasury._wallet import TreasuryWallet
from dao_treasury.constants import CHAINID
from dao_treasury.db import TreasuryTx
from dao_treasury.sorting._rules import Rules
from dao_treasury.streams import llamapay


Wallet = Union[TreasuryWallet, str]
wallet_types = (TreasuryWallet, str)

logger = getLogger("dao_treasury")


TREASURY = None


class Treasury(a_sync.ASyncGenericBase):  # type: ignore [misc]
    def __init__(
        self,
        wallets: Iterable[Union[TreasuryWallet, str]],
        sort_rules: Optional[Path] = None,
        start_block: int = 0,
        label: str = "your org's treasury",
        asynchronous: bool = False,
    ) -> None:
        """Initialize the Treasury singleton for managing DAO funds.

        This class aggregates multiple treasury wallets, sets up sorting rules,
        and constructs an :class:`.ExportablePortfolio` for fetching balance and
        transaction history.

        Args:
            wallets: Iterable of wallet
                addresses or :class:`.TreasuryWallet` instances representing
                DAO-controlled wallets.
            sort_rules: Directory path containing YAML rule files
                for sorting transactions. See :class:`dao_treasury.sorting._rules.Rules`.
            start_block: Block number from which to start loading portfolio
                history.
            label: Descriptive label for the portfolio, used in exported data.
            asynchronous: Whether methods default to asynchronous mode.

        Raises:
            RuntimeError: If a second Treasury instance is initialized.
            TypeError: If any item in `wallets` is not a str or TreasuryWallet.

        Examples:
            Create a synchronous Treasury:
            >>> treasury = Treasury(
            ...     wallets=["0xAbc123...", TreasuryWallet("0xDef456...", start_block=1000)],
            ...     sort_rules=Path("/path/to/rules"),
            ...     start_block=500,
            ...     label="DAO Treasury",
            ...     asynchronous=False
            ... )

            Create an asynchronous Treasury:
            >>> treasury_async = Treasury(
            ...     wallets=["0xAbc123..."],
            ...     asynchronous=True
            ... )
        """
        global TREASURY
        if TREASURY is not None:
            raise RuntimeError(
                f"You can only initialize one {type(self).__name__} object"
            )
        ASyncABC.__init__(self)

        self.wallets: Final[List[TreasuryWallet]] = []
        """The collection of wallets owned or controlled by the on-chain org"""

        for wallet in wallets:
            if isinstance(wallet, str):
                self.wallets.append(TreasuryWallet(wallet))  # type: ignore [type-arg]
            elif isinstance(wallet, TreasuryWallet):
                self.wallets.append(wallet)
            else:
                raise TypeError(
                    f"`wallets` can only contain: {wallet_types}  You passed {wallet}"
                )

        self.sort_rules: Final = Rules(sort_rules) if sort_rules else None

        self.portfolio: Final = ExportablePortfolio(
            addresses=(
                wallet.address
                for wallet in self.wallets
                if wallet.networks is None or CHAINID in wallet.networks
            ),
            start_block=start_block,
            label=label,
            load_prices=True,
            asynchronous=asynchronous,
        )
        """An eth_portfolio.Portfolio object used for exporting tx and balance history"""

        self._llamapay: Final = (
            llamapay.LlamaPayProcessor() if CHAINID in llamapay.networks else None
        )

        self.asynchronous: Final = asynchronous
        """A boolean flag indicating whether the API for this `Treasury` object is sync or async by default"""

        TREASURY = self

    async def describe(self, block: int) -> PortfolioBalances:
        return await self.portfolio.describe(block)

    @property
    def txs(self) -> a_sync.ASyncIterator[LedgerEntry]:
        return self.portfolio.ledger.all_entries

    async def _insert_txs(
        self, start_block: BlockNumber, end_block: BlockNumber
    ) -> None:
        """Populate the database with treasury transactions in a block range.

        Streams ledger entries from `start_block` up to (but not including)
        `end_block`, skips zero-value transfers, and inserts each remaining entry
        into the DB via :meth:`dao_treasury.db.TreasuryTx.insert`. Uses
        :class:`tqdm.asyncio.tqdm_asyncio` to display progress.

        Args:
            start_block: First block number to include (inclusive).
            end_block: Last block number to include (exclusive).

        Examples:
            >>> # Insert transactions from block 0 to 10000
            >>> await treasury._insert_txs(0, 10000)
        """
        with db_session:
            futs = []
            async for entry in self.portfolio.ledger[start_block:end_block]:
                if not entry.value:
                    # TODO: add an arg in eth-port to skip 0 value
                    logger.debug("zero value transfer, skipping %s", entry)
                    continue
                futs.append(create_task(TreasuryTx.insert(entry)))
            if futs:
                await tqdm_asyncio.gather(*futs, desc="Insert Txs to Postgres")
                logger.info(f"{len(futs)} transfers exported")

    async def _process_streams(self) -> None:
        if self._llamapay is not None:
            await self._llamapay.process_streams(run_forever=True)

    async def populate_db(
        self, start_block: BlockNumber, end_block: BlockNumber
    ) -> None:
        """
        Populate the database with treasury transactions and streams in parallel.
        """
        tasks = [self._insert_txs(start_block, end_block)]
        if self._llamapay:
            tasks.append(self._process_streams())
        await gather(*tasks)
        logger.info("db connection closed")
