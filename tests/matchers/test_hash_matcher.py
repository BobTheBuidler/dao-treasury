import pytest

from dao_treasury.sorting._matchers import HashMatcher


def test_instance_creation_and_contains():
    txgroup = 20
    # Valid transaction hash: "0x" followed by 64 hex characters (total length 66)
    valid_hash = "0x" + "a" * 64
    matcher = HashMatcher(txgroup, [valid_hash])
    assert valid_hash in matcher
    result = HashMatcher.match(valid_hash)
    assert result == txgroup

def test_empty_hashes_error():
    with pytest.raises(ValueError):
        HashMatcher(21, [])

def test_duplicate_txgroup_error():
    txgroup = 22
    valid_hash1 = "0x" + "b" * 64
    valid_hash2 = "0x" + "c" * 64
    HashMatcher(txgroup, [valid_hash1])
    with pytest.raises(ValueError):
        HashMatcher(txgroup, [valid_hash2])

def test_duplicate_hash_warning():
    txgroup = 23
    valid_hash = "0x" + "d" * 64
    matcher = HashMatcher(txgroup, [valid_hash, valid_hash])
    assert valid_hash in matcher
