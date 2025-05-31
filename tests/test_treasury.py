import pytest
from unittest.mock import AsyncMock, patch

from brownie.convert.datatypes import EthAddress

from dao_treasury import Treasury, TreasuryWallet, treasury


@pytest.fixture(autouse=True)
def reset_treasury():
    # Clear global state before each test
    treasury.TREASURY = None
    yield
    # Clear global state after each test
    treasury.TREASURY = None


def test_successful_creation():
    wallets = ["0x0000000000000000000000000000000000000001"]
    treasury = Treasury(wallets)

    assert isinstance(treasury, Treasury)
    assert all(isinstance(wallet, TreasuryWallet) for wallet in treasury.wallets)


def test_wallet_processing():
    wallets = [
        "0x0000000000000000000000000000000000000001",
        EthAddress("0x0000000000000000000000000000000000000002"),
        TreasuryWallet("0x0000000000000000000000000000000000000003"),
    ]
    treasury = Treasury(wallets)
    assert treasury.wallets[0].address == "0x0000000000000000000000000000000000000001"
    assert treasury.wallets[1].address == "0x0000000000000000000000000000000000000002"
    assert treasury.wallets[2].address == "0x0000000000000000000000000000000000000003"


def test_invalid_wallet_type():
    with pytest.raises(TypeError):
        Treasury(["0x0000000000000000000000000000000000000001", 123])


def test_asynchronous_creation():
    wallets = ["0x0000000000000000000000000000000000000001"]
    treasury = Treasury(wallets, asynchronous=True)
    assert treasury.asynchronous == True


@patch(
    "eth_portfolio_scripts._portfolio.ExportablePortfolio.describe",
    new_callable=AsyncMock,
)
# @pytest.mark.asyncio
def test_describe(mock_describe):
    wallets = ["0x0000000000000000000000000000000000000001"]
    treasury = Treasury(wallets)

    block = 1234567
    mock_describe.return_value = {"balance": 100}
    result = treasury.describe(block)

    mock_describe.assert_awaited_once_with(block)
    assert result == {"balance": 100}
