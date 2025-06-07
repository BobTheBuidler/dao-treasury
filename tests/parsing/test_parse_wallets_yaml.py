import pytest
import yaml
from pathlib import Path

from dao_treasury._wallet import load_wallets_from_yaml, TreasuryWallet, CHAINID

def write_yaml_file(tmp_path, content: str) -> Path:
    file = tmp_path / "wallets.yaml"
    file.write_text(content)
    return file

def test_bare_address(tmp_path):
    """
    Test loading a YAML with a bare wallet address (default settings).
    """
    content = """
0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333:
    """
    file = write_yaml_file(tmp_path, content)
    wallets = load_wallets_from_yaml(file)
    assert len(wallets) == 1
    wallet = wallets[0]
    # The wallet address should match exactly as provided.
    assert wallet.address == "0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333"

def test_full_config(tmp_path):
    """
    Test loading a YAML with full configuration including networks,
    start timestamp with chain-specific start block, and end configuration.
    """
    chainid = CHAINID
    content = f"""
0xABCDEF0123456789ABCDEF0123456789ABCDEF01:
  networks:
    - {chainid}
    - 420
  start:
    timestamp: 1600000000
    block:
      {chainid}: 1000000
  end:
    timestamp: 1700000000
    block:
      {chainid}: 2000000

0x1234567890ABCDEF1234567890ABCDEF12345678:
  start:
    timestamp: 1610000000
  end:
    {chainid}:
      block: 2500000
    """
    file = write_yaml_file(tmp_path, content)
    wallets = load_wallets_from_yaml(file)
    # Expecting two wallets to be loaded.
    assert len(wallets) == 2

def test_invalid_yaml(tmp_path):
    """
    Test that loading a YAML with a non-mapping top-level structure fails.
    """
    content = """
- item1
- item2
    """
    file = write_yaml_file(tmp_path, content)
    with pytest.raises(ValueError, match="Wallets YAML file must be a mapping"):
        load_wallets_from_yaml(file)

def test_invalid_wallet_config_type(tmp_path):
    """
    Test that a wallet entry with a non-dict config (other than None) raises an error.
    """
    content = """
0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333: "invalid"
    """
    file = write_yaml_file(tmp_path, content)
    with pytest.raises(ValueError, match="Invalid config for wallet"):
        load_wallets_from_yaml(file)

def test_invalid_networks_type(tmp_path):
    """
    Test that providing a non-list type for 'networks' raises an error.
    """
    content = """
0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333:
  networks: "not a list"
  start:
    timestamp: 1600000000
  end:
    timestamp: 1700000000
    """
    file = write_yaml_file(tmp_path, content)
    with pytest.raises(ValueError, match="'networks' for wallet"):
        load_wallets_from_yaml(file)

def test_invalid_key_in_start(tmp_path):
    """
    Test that an invalid key under 'start' raises an error.
    """
    content = """
0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333:
  start:
    invalid_key: 12345
  end:
    timestamp: 1700000000
    """
    file = write_yaml_file(tmp_path, content)
    with pytest.raises(ValueError, match="Invalid key: invalid_key"):
        load_wallets_from_yaml(file)

def test_invalid_key_in_end(tmp_path):
    """
    Test that an invalid key under 'end' raises an error.
    """
    content = """
0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333:
  start:
    timestamp: 1600000000
  end:
    invalid_key: 1700000000
    """
    file = write_yaml_file(tmp_path, content)
    with pytest.raises(ValueError, match="Invalid key: invalid_key"):
        load_wallets_from_yaml(file)
