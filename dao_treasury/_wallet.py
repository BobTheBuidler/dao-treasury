from dataclasses import dataclass
from typing import Dict, Final, Optional, final

from brownie.convert.datatypes import EthAddress
from eth_typing import BlockNumber, ChecksumAddress, HexAddress
from y import convert
from y.time import closest_block_after_timestamp


WALLETS: Final[Dict[ChecksumAddress, "TreasuryWallet"]] = {}


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

    def __post_init__(self) -> None:
        self.address = EthAddress(self.address)

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
            return WALLETS[address]
        except KeyError:
            pass
        checksummed = convert.to_address(address)
        try:
            instance = WALLETS[address] = WALLETS[checksummed]
        except KeyError:
            return None
        else:
            return instance
