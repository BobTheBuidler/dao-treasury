import pytest
from cchecksum import to_checksum_address

from dao_treasury.sorting._matchers import FromAddressMatcher


def test_instance_creation_and_contains():
    txgroup = 1
    # Valid Ethereum address: "0x" followed by 40 hex characters.
    addr = "0x" + "a" * 40
    matcher = FromAddressMatcher(txgroup, [addr])
    assert addr not in matcher
    checksummed = to_checksum_address(addr)
    assert checksummed in matcher
    # Test caching behavior via the match() class method.
    result = FromAddressMatcher.match(checksummed)
    assert result == txgroup

def test_empty_addresses_error():
    with pytest.raises(ValueError):
        FromAddressMatcher(2, [])

def test_duplicate_txgroup_error():
    txgroup = 3
    addr1 = "0x" + "b" * 40
    addr2 = "0x" + "c" * 40
    FromAddressMatcher(txgroup, [addr1])
    with pytest.raises(ValueError):
        # Creating another matcher with the same txgroup should raise an error.
        FromAddressMatcher(txgroup, [addr2])

def test_duplicate_address_warning():
    txgroup = 4
    addr = "0x" + "d" * 40
    matcher = FromAddressMatcher(txgroup, [addr, addr])
    assert addr not in matcher
    assert to_checksum_address(addr) in matcher
