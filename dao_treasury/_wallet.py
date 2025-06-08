from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Final, List, Optional, final

import yaml
from brownie.convert.datatypes import EthAddress
from eth_typing import BlockNumber, ChecksumAddress, HexAddress
from y import convert
from y.time import closest_block_after_timestamp

from dao_treasury.constants import CHAINID


WALLETS: Final[Dict[ChecksumAddress, "TreasuryWallet"]] = {}

to_address: Final = convert.to_address


@final
@dataclass
class TreasuryWallet:
    """A dataclass used to supplement a treasury wallet address with some extra context if needed for your use case"""

    address: EthAddress
    """The wallet address you need to include with supplemental information."""

    start_block: Optional[int] = None
    """The first block at which this wallet was considered owned by the DAO, if it wasn't always included in the treasury. If `start_block` is provided, you cannot provide a `start_timestamp`."""

    end_block: Optional[int] = None
    """The last block at which this wallet was considered owned by the DAO, if it wasn't always included in the treasury. If `end_block` is provided, you cannot provide an `end_timestamp`."""

    start_timestamp: Optional[int] = None
    """The first timestamp at which this wallet was considered owned by the DAO, if it wasn't always included in the treasury. If `start_timestamp` is provided, you cannot provide a `start_block`."""

    end_timestamp: Optional[int] = None
    """The last timestamp at which this wallet was considered owned by the DAO, if it wasn't always included in the treasury. If `end_timestamp` is provided, you cannot provide an `end_block`."""

    networks: Optional[List[int]] = None
    """The networks where the DAO owns this wallet. If not provided, the wallet will be active on all networks."""

    def __post_init__(self) -> None:
        # If a user provides a wallets yaml file but forgets to wrap the address
        # keys with quotes, it will be an integer we must convert to an address.
        self.address = EthAddress(to_address(self.address))

        start_block = self.start_block
        start_timestamp = self.start_timestamp
        if start_block is not None:
            if start_timestamp is not None:
                raise ValueError(
                    "You can only pass a start block or a start timestamp, not both."
                )
            elif start_block < 0:
                raise ValueError("start_block can not be negative")
        if start_timestamp is not None and start_timestamp < 0:
            raise ValueError("start_timestamp can not be negative")

        end_block = self.end_block
        end_timestamp = self.end_timestamp
        if end_block is not None:
            if end_timestamp is not None:
                raise ValueError(
                    "You can only pass an end block or an end timestamp, not both."
                )
            elif end_block < 0:
                raise ValueError("end_block can not be negative")
        if end_timestamp is not None and end_timestamp < 0:
            raise ValueError("end_timestamp can not be negative")

        addr = ChecksumAddress(str(self.address))
        if addr in WALLETS:
            raise ValueError(f"TreasuryWallet {addr} already exists")
        WALLETS[addr] = self

    @staticmethod
    def check_membership(
        address: Optional[HexAddress], block: Optional[BlockNumber] = None
    ) -> bool:
        if address is None:
            return False
        wallet = TreasuryWallet._get_instance(address)
        if wallet is None:
            return False
        # If networks filter is set, only include if current chain is listed
        if wallet.networks and CHAINID not in wallet.networks:
            return False
        return block is None or (
            wallet._start_block <= block
            and (wallet._end_block is None or wallet._end_block >= block)
        )

    @property
    def _start_block(self) -> BlockNumber:
        start_block = self.start_block
        if start_block is not None:
            return start_block
        start_timestamp = self.start_timestamp
        if start_timestamp is not None:
            return closest_block_after_timestamp(start_timestamp) - 1
        return BlockNumber(0)

    @property
    def _end_block(self) -> Optional[BlockNumber]:
        end_block = self.end_block
        if end_block is not None:
            return end_block
        end_timestamp = self.end_timestamp
        if end_timestamp is not None:
            return closest_block_after_timestamp(end_timestamp) - 1
        return None

    @staticmethod
    def _get_instance(address: HexAddress) -> Optional["TreasuryWallet"]:
        # sourcery skip: use-contextlib-suppress
        try:
            instance = WALLETS[address]
        except KeyError:
            checksummed = to_address(address)
            try:
                instance = WALLETS[address] = WALLETS[checksummed]
            except KeyError:
                return None
        if instance.networks and CHAINID not in instance.networks:
            return None
        return instance


def load_wallets_from_yaml(path: Path) -> List[TreasuryWallet]:
    """
    Load a YAML mapping of wallet addresses to configuration and return a list of TreasuryWallets.
    'timestamp' in top-level start/end is universal.
    'block' in top-level start/end must be provided under the chain ID key.
    Optional 'networks' key lists chain IDs where this wallet is active.
    """
    try:
        data = yaml.safe_load(path.read_bytes())
    except Exception as e:
        raise ValueError(f"Failed to parse wallets YAML: {e}")

    if not isinstance(data, dict):
        raise ValueError("Wallets YAML file must be a mapping of address to config")

    wallets: List[TreasuryWallet] = []
    for address, cfg in data.items():
        # Allow bare keys
        if cfg is None:
            cfg = {}
        elif not isinstance(cfg, dict):
            raise ValueError(f"Invalid config for wallet {address}, expected mapping")

        # Extract optional networks list
        networks = cfg.get("networks", [])
        if not isinstance(networks, list) or not all(
            isinstance(n, int) for n in networks
        ):
            raise ValueError(
                f"'networks' for wallet {address} must be a list of integers, got {networks}"
            )

        kwargs = {"address": address, "networks": networks}

        # Parse start: timestamp universal, block under chain key
        start_cfg = cfg.get("start", {})
        if not isinstance(start_cfg, dict):
            raise ValueError(
                f"Invalid 'start' for wallet {address}. Expected mapping, got {start_cfg}."
            )
        for key, value in start_cfg.items():
            if key == "timestamp":
                if "start_block" in kwargs:
                    raise ValueError(
                        "You cannot provide both a start block and a start timestamp"
                    )
                kwargs["start_timestamp"] = value
            elif key == "block":
                if not isinstance(value, dict):
                    raise ValueError(
                        f"Invalid start block for wallet {address}. Expected mapping, got {value}."
                    )
                for chainid, start_block in value.items():
                    if not isinstance(chainid, int):
                        raise ValueError(
                            f"Invalid chainid for wallet {address} start block. Expected integer, got {chainid}."
                        )
                    if not isinstance(start_block, int):
                        raise ValueError(
                            f"Invalid start block for wallet {address}. Expected integer, got {start_block}."
                        )
                    if chainid == CHAINID:
                        if "start_timestamp" in kwargs:
                            raise ValueError(
                                "You cannot provide both a start block and a start timestamp"
                            )
                        kwargs["start_block"] = start_block
            else:
                raise ValueError(
                    f"Invalid key: {key}. Valid options are 'block' or 'timestamp'."
                )

        chain_block = start_cfg.get(str(CHAINID)) or start_cfg.get(CHAINID)
        if chain_block is not None:
            if not isinstance(chain_block, int):
                raise ValueError(
                    f"Invalid start.block for chain {CHAINID} on {address}"
                )
            kwargs["start_block"] = chain_block

        # Parse end: timestamp universal, block under chain key
        end_cfg = cfg.get("end", {})
        if not isinstance(end_cfg, dict):
            raise ValueError(
                f"Invalid 'end' for wallet {address}. Expected mapping, got {end_cfg}."
            )

        for key, value in end_cfg.items():
            if key == "timestamp":
                if "end_block" in kwargs:
                    raise ValueError(
                        "You cannot provide both an end block and an end timestamp"
                    )
                kwargs["end_timestamp"] = value
            elif key == "block":
                if not isinstance(value, dict):
                    raise ValueError(
                        f"Invalid end block for wallet {address}. Expected mapping, got {value}."
                    )
                for chainid, end_block in value.items():
                    if not isinstance(chainid, int):
                        raise ValueError(
                            f"Invalid chainid for wallet {address} end block. Expected integer, got {chainid}."
                        )
                    if not isinstance(end_block, int):
                        raise ValueError(
                            f"Invalid end block for wallet {address}. Expected integer, got {end_block}."
                        )
                    if chainid == CHAINID:
                        kwargs["end_block"] = end_block
            else:
                raise ValueError(
                    f"Invalid key: {key}. Valid options are 'block' or 'timestamp'."
                )

        wallets.append(TreasuryWallet(**kwargs))

    return wallets
