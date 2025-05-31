import pytest
from cchecksum import to_checksum_address

from dao_treasury.sorting._matchers import ToAddressMatcher


def test_instance_creation_and_contains():
    txgroup = 10
    addr = "0x" + "e" * 40  # Valid Ethereum address
    matcher = ToAddressMatcher(txgroup, [addr])
    assert addr not in matcher
    checksummed = to_checksum_address(addr)
    assert checksummed in matcher
    result = ToAddressMatcher.match(checksummed)
    assert result == txgroup


def test_empty_addresses_error():
    with pytest.raises(ValueError):
        ToAddressMatcher(11, [])


def test_duplicate_txgroup_error():
    txgroup = 12
    addr1 = "0x" + "f" * 40
    addr2 = "0x" + "1" * 40
    ToAddressMatcher(txgroup, [addr1])
    with pytest.raises(ValueError):
        ToAddressMatcher(txgroup, [addr2])


def test_duplicate_address_warning():
    txgroup = 13
    addr = "0x" + "2" * 40
    matcher = ToAddressMatcher(txgroup, [addr, addr])
    assert addr in matcher
