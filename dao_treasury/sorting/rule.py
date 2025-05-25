import asyncio
from dataclasses import dataclass
from typing import TYPE_CHECKING, Callable, ClassVar, Dict, Final, List, Optional

from brownie.convert.datatypes import EthAddress
from eth_typing import HexStr

from dao_treasury._wallet import TreasuryWallet
from dao_treasury.types import TxGroupDbid

if TYPE_CHECKING:
    from dao_treasury.db import TreasuryTx


_match_all: Final[Dict[TxGroupDbid, List[str]]] = {}
"""An internal cache defining a list of which matcher attributes are used for each SortRule"""


@dataclass(kw_only=True, frozen=True)
class _SortRule:
    txgroup: TxGroupDbid
    hash: Optional[HexStr] = None
    from_address: Optional[EthAddress] = None
    from_nickname: Optional[str] = None
    to_address: Optional[EthAddress] = None
    to_nickname: Optional[str] = None
    token_address: Optional[EthAddress] = None
    symbol: Optional[str] = None
    func: Optional[Callable[["TreasuryTx"], bool]] = None

    __instances__: ClassVar[List["_SortRule"]] = []
    __matching_attrs__: ClassVar[List[str]] = [
        "hash",
        "from_address",
        "from_nickname",
        "to_address",
        "to_nickname",
        "token_address",
        "symbol",
    ]

    def __post_init__(self) -> None:
        """Validates inputs, checksums addresses, and adds the newly initialized SortRule to __instances__ class var"""

        if self.txgroup in _match_all:
            raise ValueError(f"there is already a matcher defined for txgroup {self.txgroup}: {self}")

        # ensure addresses are checksummed if applicable
        for attr in ["from_address", "to_address", "token_address"]:
            value = getattr(self, attr)
            if value is not None:
                checksummed = EthAddress(value)
                # NOTE: we must use object.__setattr__ to modify a frozen dataclass instance
                object.__setattr__(self, attr, checksummed)

        # define matchers used for this instance
        # TODO: maybe import the string matchers and use them here too? They're a lot faster
        matchers = [
            attr
            for attr in self.__matching_attrs__
            if getattr(self, attr) is not None
        ]

        _match_all[self.txgroup] = matchers

        if self.func is not None and matchers:
            raise ValueError(
                "You must specify attributes for matching or pass in a custom matching function, not both."
            )
        
        if self.func is None and not matchers:
            raise ValueError(
                "You must specify attributes for matching or pass in a custom matching function."
            )

        # append new instance to instances classvar
        self.__instances__.append(self)

    async def match(self, tx: "TreasuryTx") -> bool:
        """Returns True if `tx` matches this SortRule, False otherwise"""
        if matchers := _match_all[self.txgroup]:
            return all(
                getattr(self, matcher) == getattr(tx, matcher)
                for matcher in matchers
            )
        elif asyncio.iscoroutinefunction(self.func):
            return await self.func(tx)  # type: ignore [no-any-return]
        elif callable(self.func):
            return self.func(tx)
        else:
            raise TypeError(f"func must be callable. You passed {self.func}")


class _InboundSortRule(_SortRule):
    async def match(self, tx: "TreasuryTx") -> bool:
        return (
            tx.to_address is not None
            and TreasuryWallet._get_instance(tx.to_address.address) is not None
            and await super().match(tx)
        )

class _OutboundSortRule(_SortRule):
    async def match(self, tx: "TreasuryTx") -> bool:
        return (
            TreasuryWallet._get_instance(tx.from_address.address) is not None
            and await super().match(tx)
        )


class RevenueSortRule(_InboundSortRule):
    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Revenue:'."""
        object.__setattr__(self, "txgroup", f"Revenue:{self.txgroup}")
        super().__post_init__()


class CostOfRevenueSortRule(_OutboundSortRule):
    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Cost of Revenue:'."""
        object.__setattr__(self, "txgroup", f"Cost of Revenue:{self.txgroup}")
        super().__post_init__()


class ExpenseSortRule(_OutboundSortRule):
    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Expenses:'."""
        object.__setattr__(self, "txgroup", f"Expenses:{self.txgroup}")
        super().__post_init__()


class OtherIncomeSortRule(_InboundSortRule):
    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Other Income:'."""
        object.__setattr__(self, "txgroup", f"Other Income:{self.txgroup}")
        super().__post_init__()


class OtherExpenseSortRule(_OutboundSortRule):
    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Other Expenses:'."""
        object.__setattr__(self, "txgroup", f"Other Expenses:{self.txgroup}")
        super().__post_init__()


class IgnoreSortRule(_SortRule):
    def __post_init__(self) -> None:
        """Prepends `self.txgroup` with 'Ignore:'."""
        object.__setattr__(self, "txgroup", f"Ignore:{self.txgroup}")
        super().__post_init__()
