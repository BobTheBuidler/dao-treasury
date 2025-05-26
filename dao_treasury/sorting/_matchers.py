from logging import getLogger
from typing import ClassVar, Dict, Final, Iterable, List, Optional, Set, final

from eth_typing import ChecksumAddress, HexAddress, HexStr
from eth_utils import is_hexstr
from pony.orm import db_session
from typing_extensions import Self
from y import convert

from dao_treasury.types import TxGroupDbid


logger: Final = getLogger("dao_treasury")


class _Matcher:
    __instances__: ClassVar[List[Self]]
    __cache__: ClassVar[Dict[str, TxGroupDbid]]

    @classmethod
    def match(cls, string: str) -> Optional[TxGroupDbid]:
        # sourcery skip: use-next
        try:
            return cls.__cache__[string]
        except KeyError:
            for matcher in cls.__instances__:
                if string in matcher:
                    txgroup_id = matcher.txgroup_id
                    cls.__cache__[string] = txgroup_id
                    return txgroup_id
            return None

    def __init__(self, txgroup: TxGroupDbid, validated_values: Set[str]) -> None:
        if not isinstance(txgroup, int):
            raise TypeError(txgroup)
        
        for matcher in self.__instances__:
            if matcher.txgroup_id == txgroup:
                raise ValueError(f"TxGroup[{txgroup}] already has a {type(self).__name__}: {matcher}")
        self.txgroup_id: Final[TxGroupDbid] = txgroup
        
        self.__one_value: Final = len(validated_values) == 1
        self.__value: Final = list(validated_values)[0] if self.__one_value else ""
        self.__values: Final = validated_values
    
    def __contains__(self, string: str) -> bool:
        return string == self.__value if self.__one_value else string in self.values
    
    @property
    def values(self) -> Set[HexStr]:
        return self.__values


class _HexStringMatcher(_Matcher):
    expected_length: ClassVar[int]

    @classmethod
    def _validate_hexstr(cls, hexstr: HexStr) -> HexStr:
        if not is_hexstr(hexstr):
            raise ValueError(f"value must be a hex string, not {hexstr}")
        hexstr = hexstr.lower()
        if not hexstr.startswith("0x"):
            hexstr = f"0x{hexstr}"
        if len(hexstr) != cls.expected_length:
            raise ValueError(f"{hexstr} has incorrect length (expected {cls.expected_length}, actual {len(hexstr)})")
        return hexstr


class _AddressMatcher(_HexStringMatcher):
    expected_length: ClassVar[int] = 42
        
    def __init__(self, txgroup: TxGroupDbid, addresses: Iterable[HexAddress]) -> None:
        addresses = list(addresses)
        if not addresses:
            raise ValueError("You must provide at least one address")

        validated: Set[ChecksumAddress] = set()
        for address in addresses:
            address = convert.to_address(self._validate_hexstr(address))
            for matcher in self.__instances__:
                if address in matcher:
                    raise ValueError(f"address {address} already has a matcher: {matcher}")
            if address in validated:
                logger.warning("duplicate hash %s", address)
            validated.add(address)
        
        super().__init__(txgroup, validated)

        logger.info("%s created", self)
        self.__instances__.append(self)  # type: ignore [arg-type]
    
    @db_session  # type: ignore [misc]
    def __repr__(self) -> str:
        from dao_treasury.db import TxGroup

        txgroup = TxGroup.get(txgroup_id=self.txgroup_id)
        return f"{type(self).__name__}(txgroup='{txgroup.full_string}', addresses={list(self.values)})"


@final
class FromAddressMatcher(_AddressMatcher):
    __instances__: ClassVar[List["FromAddressMatcher"]] = []
    __cache__: ClassVar[Dict[ChecksumAddress, TxGroupDbid]] = {}


@final
class ToAddressMatcher(_AddressMatcher):
    __instances__: ClassVar[List["ToAddressMatcher"]] = []
    __cache__: ClassVar[Dict[ChecksumAddress, TxGroupDbid]] = {}


@final
class HashMatcher(_HexStringMatcher):
    expected_length: ClassVar[int] = 66
    __instances__: ClassVar[List["HashMatcher"]] = []
    __cache__: ClassVar[Dict[HexStr, TxGroupDbid]] = {}
        
    def __init__(self, txgroup: TxGroupDbid, hashes: Iterable[HexStr]) -> None:        
        hashes = list(hashes)
        if not hashes:
            raise ValueError("You must provide at least one transaction hash")

        validated: Set[HexStr] = set()
        for txhash in hashes:
            txhash = self._validate_hexstr(txhash)
            for matcher in self.__instances__:
                if txhash in matcher:
                    raise ValueError(f"hash {txhash} already has a matcher: {matcher}")
            if txhash in validated:
                logger.warning("duplicate hash %s", txhash)
            validated.add(txhash)
        
        super().__init__(txgroup, validated)

        logger.info("%s created", self)
        HashMatcher.__instances__.append(self)
    
    @db_session  # type: ignore [misc]
    def __repr__(self) -> str:
        from dao_treasury.db import TxGroup

        txgroup = TxGroup.get(txgroup_id=self.txgroup_id)
        return f"{type(self).__name__}(txgroup='{txgroup.full_string}', hashes={list(self.values)})"
