import pytest
from brownie.convert.datatypes import EthAddress

from dao_treasury import TreasuryWallet


def test_successful_creation():
    address = "0x0000000000000000000000000000000000000001"
    wallet = TreasuryWallet(address)
    assert wallet.address == EthAddress(address)
    assert wallet.start_block is None
    assert wallet.end_block is None
    assert wallet.start_timestamp is None
    assert wallet.end_timestamp is None


def test_eth_address_conversion():
    address = "0x0000000000000000000000000000000000000001"
    wallet = TreasuryWallet(address)
    assert isinstance(wallet.address, EthAddress)


def test_conflicting_start_block_and_timestamp():
    address = "0x0000000000000000000000000000000000000001"
    with pytest.raises(ValueError) as excinfo:
        TreasuryWallet(address, start_block=1, start_timestamp=1234567890)
    assert "You can only pass a start block or a start timestamp" in str(excinfo.value)


def test_conflicting_end_block_and_timestamp():
    address = "0x0000000000000000000000000000000000000001"
    with pytest.raises(ValueError) as excinfo:
        TreasuryWallet(address, end_block=1, end_timestamp=1234567890)
    assert "You can only pass an end block or an end timestamp" in str(excinfo.value)


"""
def test_conflicting_start_block_and_end_block():
    address = "0x0000000000000000000000000000000000000001"
    with pytest.raises(ValueError) as excinfo:
        TreasuryWallet(address, end_block=1, end_timestamp=1234567890)
    assert "You can only pass an end block or an end timestamp" in str(excinfo.value)

def test_conflicting_start_timestamp_and_end_timestamp():
    address = "0x0000000000000000000000000000000000000001"
    with pytest.raises(ValueError) as excinfo:
        TreasuryWallet(address, end_block=1, end_timestamp=1234567890)
    assert "You can only pass an end block or an end timestamp" in str(excinfo.value)

def test_conflicting_start_block_and_end_timestamp():
    address = "0x0000000000000000000000000000000000000001"
    with pytest.raises(ValueError) as excinfo:
        TreasuryWallet(address, end_block=1, end_timestamp=1234567890)
    assert "You can only pass an end block or an end timestamp" in str(excinfo.value)

def test_conflicting_start_timestamp_and_end_block():
    address = "0x0000000000000000000000000000000000000001"
    with pytest.raises(ValueError) as excinfo:
        TreasuryWallet(address, end_block=1, end_timestamp=1234567890)
    assert "You can only pass an end block or an end timestamp" in str(excinfo.value)
"""


@pytest.mark.parametrize(
    "wallet_address, other, expected, id",
    [
        # Happy path: same address, both as hex strings
        (
            "0x000000000000000000000000000000000000dead",
            "0x000000000000000000000000000000000000dead",
            True,
            "same_hex_string",
        ),
        # Happy path: same address, other as checksummed
        (
            "0x000000000000000000000000000000000000dEaD",
            "0x000000000000000000000000000000000000dead",
            True,
            "same_mixed_case",
        ),
        # Happy path: different addresses
        (
            "0x000000000000000000000000000000000000dead",
            "0x000000000000000000000000000000000000beef",
            False,
            "different_addresses",
        ),
        # Edge: other is already a bytes address
        (
            "0x000000000000000000000000000000000000dead",
            bytes.fromhex("000000000000000000000000000000000000dead"),
            TypeError,
            "other_bytes",
        ),
        # Edge: wallet address is checksummed, other is lower
        (
            "0x000000000000000000000000000000000000dEaD",
            "0x000000000000000000000000000000000000dead",
            True,
            "wallet_checksummed",
        ),
        # Edge: wallet address is lower, other is checksummed
        (
            "0x000000000000000000000000000000000000dead",
            "0x000000000000000000000000000000000000dEaD",
            True,
            "other_checksummed",
        ),
        # Edge: other is an int (invalid, should raise)
        ("0x000000000000000000000000000000000000dead", 12345, TypeError, "other_int"),
        # Edge: other is None (invalid, should raise)
        ("0x000000000000000000000000000000000000dead", None, TypeError, "other_none"),
        # Edge: wallet address is invalid (should raise on instantiation)
        (
            "not_an_address",
            "0x000000000000000000000000000000000000dead",
            ValueError,
            "wallet_invalid",
        ),
        # Edge: other is invalid address string (should raise)
        (
            "0x000000000000000000000000000000000000dead",
            "not_an_address",
            TypeError,
            "other_invalid",
        ),
    ],
    ids=lambda x: x if isinstance(x, str) else None,
)
def test_wallet_eq(wallet_address, other, expected, id):
    # sourcery skip: no-conditionals-in-tests
    try:
        exc_expected = issubclass(expected, Exception)
    except TypeError:
        exc_expected = False

    if exc_expected:
        with pytest.raises(expected):
            wallet = TreasuryWallet(address=wallet_address)
            _ = wallet.address == other

    else:
        wallet = TreasuryWallet(address=wallet_address)
        result = wallet.address == other

        # Assert
        assert result is expected


# We cannot mock closest_block_after_timestamp, so we must use real values.
# closest_block_after_timestamp will be called with the provided timestamp.
# For edge cases, we can use 0 or very large/small timestamps.


@pytest.mark.parametrize(
    "start_block, start_timestamp, expected, id",
    [
        # Happy path: start_block is set
        (12345, None, 12345, "start_block_set"),
        # Happy path: start_block is None, start_timestamp is set (use a realistic timestamp)
        (None, 1700000000, None, "start_timestamp_set"),
        # Edge: both start_block and start_timestamp are None
        (None, None, 0, "both_none"),
        # Edge: start_block is 0
        (0, None, 0, "start_block_zero"),
        # Edge: start_timestamp is 0
        (None, 0, None, "start_timestamp_zero"),
    ],
    ids=lambda x: x if isinstance(x, str) else None,
)
def test_start_block_property(start_block, start_timestamp, expected, id):
    # Arrange
    # Use a valid EthAddress string (20 bytes hex)
    address = "0x000000000000000000000000000000000000dead"
    wallet = TreasuryWallet(
        address=address,
        start_block=start_block,
        start_timestamp=start_timestamp,
    )

    # Act
    result = wallet._start_block

    # Assert
    if start_block is not None:
        assert result == expected
    elif start_timestamp is not None:
        # We can't know the exact block, but it should be an int and >= 0
        assert isinstance(result, int)
        # For negative timestamps, the block may be negative, but for 0 or positive, should be >= 0
        if start_timestamp >= 0:
            assert result >= 0
    else:
        assert result == 0


@pytest.mark.parametrize(
    "start_block, start_timestamp, expected_exception, id",
    [
        # Error: both start_block and start_timestamp are set
        (123, 456, ValueError, "both_start_block_and_start_timestamp"),
        # Error: start_block is not an int (e.g., string)
        ("not_a_block", None, TypeError, "start_block_invalid_type"),
        # Error: start_timestamp is not an int (e.g., string)
        (None, "not_a_timestamp", TypeError, "start_timestamp_invalid_type"),
        # Error: both are invalid
        ("not_a_block", "not_a_timestamp", TypeError, "both_invalid"),
        # Error: start_block is negative
        (-1, None, ValueError, "start_block_negative"),
        # Error: start_timestamp is negative
        (None, -100, ValueError, "start_timestamp_negative"),
    ],
    ids=lambda x: x if isinstance(x, str) else None,
)
def test_start_block_property_errors(
    start_block, start_timestamp, expected_exception, id
):
    # Arrange
    address = "0x000000000000000000000000000000000000dead"

    # Act & Assert
    with pytest.raises(expected_exception):
        TreasuryWallet(
            address=address,
            start_block=start_block,
            start_timestamp=start_timestamp,
        )._start_block


@pytest.mark.parametrize(
    "end_block, end_timestamp, expected, id",
    [
        # Happy path: end_block is set
        (123456, None, 123456, "end_block_set"),
        # Happy path: end_block is None, end_timestamp is set (realistic timestamp)
        (None, 1700000000, None, "end_timestamp_set"),
        # Edge: both end_block and end_timestamp are None
        (None, None, None, "both_none"),
        # Edge: end_block is 0
        (0, None, 0, "end_block_zero"),
        # Edge: end_timestamp is 0
        (None, 0, None, "end_timestamp_zero"),
    ],
    ids=lambda x: x if isinstance(x, str) else None,
)
def test_end_block_property(end_block, end_timestamp, expected, id):
    # Arrange
    address = "0x000000000000000000000000000000000000dead"
    wallet = TreasuryWallet(
        address=address,
        end_block=end_block,
        end_timestamp=end_timestamp,
    )

    # Act
    result = wallet._end_block

    # Assert
    if end_block is not None:
        assert result == expected
    elif end_timestamp is not None:
        # We can't know the exact block, but it should be an int and >= 0
        assert isinstance(result, int), (type(result), result)
        if end_timestamp >= 0:
            assert result >= 0
    else:
        assert result is None


@pytest.mark.parametrize(
    "end_block, end_timestamp, expected_exception, id",
    [
        # Error: both end_block and end_timestamp are set
        (123, 456, ValueError, "both_end_block_and_end_timestamp"),
        # Error: end_block is not an int (e.g., string)
        ("not_a_block", None, TypeError, "end_block_invalid_type"),
        # Error: end_timestamp is not an int (e.g., string)
        (None, "not_a_timestamp", TypeError, "end_timestamp_invalid_type"),
        # Error: both are invalid
        ("not_a_block", "not_a_timestamp", ValueError, "both_invalid"),
        # Edge: end_block is negative
        (-1, None, ValueError, "end_block_negative"),
        # Edge: end_timestamp is negative
        (None, -100, ValueError, "end_timestamp_negative"),
    ],
    ids=lambda x: x if isinstance(x, str) else None,
)
def test_end_block_property_errors(end_block, end_timestamp, expected_exception, id):
    # Arrange
    address = "0x000000000000000000000000000000000000dead"

    # Act & Assert
    with pytest.raises(expected_exception):
        TreasuryWallet(
            address=address,
            end_block=end_block,
            end_timestamp=end_timestamp,
        )._end_block
