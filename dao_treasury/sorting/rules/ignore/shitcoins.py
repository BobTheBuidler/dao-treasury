"""This module is used to ignore any transactions that involve shitcoins in the :obj:`~eth_portfolio.SHITCOINS` mapping."""

from typing import Final

import eth_portfolio

from dao_treasury import TreasuryTx
from dao_treasury.constants import CHAINID
from dao_treasury.sorting.factory import ignore


SHITCOINS: Final = eth_portfolio.SHITCOINS[CHAINID]


@ignore("Shitcoin")
def is_shitcoin(tx: TreasuryTx) -> bool:
    """
    This category is for any token transfers involving any shitcoin which was added
    to your database before the shitcoin was added to :obj:`eth_portfolio.SHITCOINS`.

    Since the tx would now be excluded from the db entirely if you did a clean pull,
    we can safely ignore it.
    """
    return tx.token.address.address in SHITCOINS
