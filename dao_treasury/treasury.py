from asyncio import create_task
from logging import getLogger
from pathlib import Path
from typing import Final, Iterable, List, Optional, Union

import a_sync
from a_sync.a_sync.abstract import ASyncABC
from eth_typing import BlockNumber
from eth_portfolio.structs import LedgerEntry
from eth_portfolio.typing import PortfolioBalances
from eth_portfolio_scripts._portfolio import ExportablePortfolio
from tqdm.asyncio import tqdm_asyncio

from dao_treasury._wallet import TreasuryWallet
from dao_treasury.db import TreasuryTx
from dao_treasury.sorting._rules import Rules


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
        """
        Args:
            wallets: Iterable[Union[TreasuryWallet, str]]

        """
        global TREASURY
        if TREASURY is not None:
            raise RuntimeError(f"You can only initialize one {type(self).__name__} object")
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
                wallet.address if isinstance(wallet, TreasuryWallet) else wallet
                for wallet in self.wallets
            ),
            start_block=start_block,
            label=label,
            load_prices=True,
            asynchronous=asynchronous,
        )
        """An eth_portfolio.Portfolio object used for exporting tx and balance history"""

        self.asynchronous: Final = asynchronous
        """A boolean flag indicating whether the API for this `Treasury` object is sync or async by default"""

        TREASURY = self

    async def describe(self, block: int) -> PortfolioBalances:
        return await self.portfolio.describe(block)

    @property
    def txs(self) -> a_sync.ASyncIterator[LedgerEntry]:
        return self.portfolio.ledger.all_entries

    async def populate_db(self, start_block: BlockNumber, end_block: BlockNumber) -> None:
        """returns: number of new txs"""
        # TODO: implement this
        # NOTE: ensure stream loader task has been started
        #global _streams_task
        #if _streams_task is None:
        #    _streams_task = create_task(streams._get_coro())
        futs = []
        async for entry in self.portfolio.ledger[start_block:end_block]:
            if not entry.value:
                # TODO: add an arg in eth-port to skip 0 value
                logger.debug("zero value transfer, skipping %s", entry)
                continue
            futs.append(create_task(TreasuryTx.insert(entry)))
        
        if futs:
            await tqdm_asyncio.gather(*futs, desc="Insert Txs to Postgres")
