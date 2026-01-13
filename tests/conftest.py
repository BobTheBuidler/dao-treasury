import os
import sys

import pytest
from brownie import _config
from dotenv import load_dotenv

if "CI" not in os.environ:
    # running locally (not in GitHub Actions)
    load_dotenv()

sys.path.insert(0, os.path.abspath("."))

_config.CONFIG.settings["autofetch_sources"] = False


from dao_treasury._wallet import WALLETS


@pytest.fixture(autouse=True)
def reset():
    """Reset the in-memory treasury wallet registry around each test.

    This fixture clears the global wallet registry
    :data:`dao_treasury._wallet.WALLETS` used by
    :class:`dao_treasury._wallet.TreasuryWallet` before and after each test,
    ensuring that no wallet persisted from one test will affect another.

    See Also
    --------
    :class:`dao_treasury._wallet.TreasuryWallet`
    :data:`dao_treasury._wallet.WALLETS`

    Examples
    --------
    Before running a test, the registry is empty:

    >>> from dao_treasury._wallet import TreasuryWallet, WALLETS
    >>> WALLETS
    {}

    Creating a wallet adds it to the registry:

    >>> w = TreasuryWallet("0xabc123...", start_block=0)
    >>> WALLETS
    {ChecksumAddress('0xABC123...'): TreasuryWallet(...)}

    At the start of the next test, ``reset`` runs and clears the registry:

    >>> WALLETS
    {}
    """
    WALLETS.clear()
    yield
    WALLETS.clear()
