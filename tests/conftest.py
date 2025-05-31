import os
import sys
from dotenv import load_dotenv

import pytest
from brownie import _config


if "CI" not in os.environ:
    # running locally (not in github actions)
    load_dotenv()

sys.path.insert(0, os.path.abspath("."))

_config.CONFIG.settings["autofetch_sources"] = False


from dao_treasury._wallet import WALLETS, TreasuryWallet


@pytest.fixture(autouse=True)
def reset():
    WALLETS.clear()
    yield
    WALLETS.clear()
