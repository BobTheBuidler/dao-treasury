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
    """Base class for matching strings to a transaction group identifier.

    Each subclass maintains a registry of instances and a cache for fast lookups.
    Matching is performed by testing membership via `__contains__`.

    Examples:
        >>> from dao_treasury.sorting._matchers import FromAddressMatcher
        >>> from dao_treasury.types import TxGroupDbid
        >>> address = "0xAbC1230000000000000000000000000000000000"
        >>> fam = FromAddressMatcher(TxGroupDbid(1), [address])
        >>> FromAddressMatcher.match(address)
        TxGroupDbid(1)
        >>> FromAddressMatcher.match("missing")
        None

    See Also:
        :class:`dao_treasury.sorting._matchers._HexStringMatcher`,
        :class:`dao_treasury.sorting._matchers._AddressMatcher`,
        :meth:`match`
    """

    __instances__: ClassVar[List[Self]]
    __cache__: ClassVar[Dict[str, TxGroupDbid]]

    @classmethod
    def match(cls, string: str) -> Optional[TxGroupDbid]:
        # sourcery skip: use-next
        """Return the TxGroupDbid for a matching instance or None if no match.

        The lookup first checks the internal cache, then iterates through
        all instances and tests membership with `__contains__`. On first hit,
        the result is cached for future calls.

        Args:
            string: Input string to match (e.g., address or hash).

        Examples:
            >>> from dao_treasury.sorting._matchers import HashMatcher
            >>> from dao_treasury.types import TxGroupDbid
            >>> hash_str = "0xdeadbeef" + "00"*28
            >>> hmatch = HashMatcher(TxGroupDbid(2), [hash_str])
            >>> HashMatcher.match(hash_str)
            TxGroupDbid(2)
            >>> HashMatcher.match("0xother")
            None

        See Also:
            :attr:`__cache__`
        """
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
        """Initialize matcher with a txgroup and a set of validated strings.

        Ensures that the txgroup identifier is unique among instances.

        Args:
            txgroup: Identifier of the transaction group.
            validated_values: Set of unique, pre-validated strings for matching.

        Raises:
            TypeError: If txgroup is not an integer.
            ValueError: If an instance for the same txgroup already exists.

        See Also:
            :attr:`txgroup_id`
        """
        if not isinstance(txgroup, int):
            raise TypeError(txgroup)

        for matcher in self.__instances__:
            if matcher.txgroup_id == txgroup:
                raise ValueError(
                    f"TxGroup[{txgroup}] already has a {type(self).__name__}: {matcher}"
                )
        self.txgroup_id: Final[TxGroupDbid] = txgroup

        self.__one_value: Final = len(validated_values) == 1
        self.__value: Final = list(validated_values)[0] if self.__one_value else ""
        self.__values: Final = validated_values

    def __contains__(self, string: str) -> bool:
        """Return True if the given string matches one of the validated values.

        For a single-value matcher, performs equality; otherwise membership.

        Args:
            string: Input to test for membership.

        See Also:
            :meth:`match`
        """
        return string == self.__value if self.__one_value else string in self.values

    @property
    def values(self) -> Set[HexStr]:
        """Set of all validated strings used for matching.

        Returns:
            The original set of strings passed at initialization.

        Example:
            >>> from dao_treasury.sorting._matchers import HashMatcher
            >>> from dao_treasury.types import TxGroupDbid
            >>> hex_str = "0x" + "f"*64
            >>> matcher = HashMatcher(TxGroupDbid(4), [hex_str])
            >>> matcher.values
            {'0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff'}

        See Also:
            :meth:`match`
        """
        return self.__values


class _HexStringMatcher(_Matcher):
    """Matcher for fixed-length hexadecimal strings.

    Validates and normalizes hex strings (must start with “0x”, lowercase)
    to the length specified by :attr:`expected_length`.

    See Also:
        :attr:`expected_length`,
        :meth:`_validate_hexstr`
    """

    expected_length: ClassVar[int]

    @classmethod
    def _validate_hexstr(cls, hexstr: HexStr) -> HexStr:
        """Validate that input is a hex string of length `expected_length`.

        Normalizes to lowercase and prepends '0x' if necessary.

        Args:
            hexstr: Candidate hex string.

        Raises:
            ValueError: If not a valid hex string or wrong length.

        See Also:
            :attr:`expected_length`
        """
        if not is_hexstr(hexstr):
            raise ValueError(f"value must be a hex string, not {hexstr}")
        hexstr = hexstr.lower()
        if not hexstr.startswith("0x"):
            hexstr = f"0x{hexstr}"
        if len(hexstr) != cls.expected_length:
            raise ValueError(
                f"{hexstr} has incorrect length (expected {cls.expected_length}, actual {len(hexstr)})"
            )
        return hexstr


class _AddressMatcher(_HexStringMatcher):
    """Matcher for Ethereum addresses, mapping them to a TxGroupDbid.

    Ensures each address is unique across all matchers.

    Examples:
        >>> from dao_treasury.sorting._matchers import _AddressMatcher
        >>> from dao_treasury.types import TxGroupDbid
        >>> addr = "0xAbC1230000000000000000000000000000000000"
        >>> am = _AddressMatcher(TxGroupDbid(5), [addr])
        >>> addr in am
        True
        >>> "0x0000000000000000000000000000000000000000" in am
        False

    See Also:
        :class:`FromAddressMatcher`,
        :class:`ToAddressMatcher`
    """

    expected_length: ClassVar[int] = 42

    def __init__(self, txgroup: TxGroupDbid, addresses: Iterable[HexAddress]) -> None:
        """Create an address matcher with checksum validation.

        Converts inputs to checksummed addresses and ensures that each address is only
        registered once. Duplicate addresses in the input iterable will log a warning,
        but only the first occurrence is used.

        Args:
            txgroup: Identifier of the transaction group.
            addresses: Iterable of hex address strings.

        Raises:
            ValueError: If `addresses` is empty, or if any address already has an
                existing matcher.

        Examples:
            >>> from dao_treasury.sorting._matchers import _AddressMatcher
            >>> from dao_treasury.types import TxGroupDbid
            >>> addr = "0xAbC1230000000000000000000000000000000000"
            >>> # duplicate in list triggers warning but does not raise
            >>> am = _AddressMatcher(TxGroupDbid(5), [addr, addr])
            >>> addr in am
            True

        See Also:
            :meth:`_validate_hexstr`
        """
        addresses = list(addresses)
        if not addresses:
            raise ValueError("You must provide at least one address")

        validated: Set[ChecksumAddress] = set()
        for address in addresses:
            address = convert.to_address(self._validate_hexstr(address))
            for matcher in self.__instances__:
                if address in matcher:
                    raise ValueError(
                        f"address {address} already has a matcher: {matcher}"
                    )
            if address in validated:
                logger.warning("duplicate address %s", address)
            validated.add(address)

        super().__init__(txgroup, validated)

        logger.info("%s created", self)
        self.__instances__.append(self)  # type: ignore [arg-type]

    @db_session  # type: ignore [misc]
    def __repr__(self) -> str:
        """Return a string representation including the full txgroup path and addresses.

        Queries the database for the TxGroup entity to show its full path.

        Examples:
            >>> from dao_treasury.sorting._matchers import FromAddressMatcher
            >>> from dao_treasury.types import TxGroupDbid
            >>> fam = FromAddressMatcher(TxGroupDbid(6), ["0xAbC1230000000000000000000000000000000000"])
            >>> repr(fam)
            "FromAddressMatcher(txgroup='Parent:Child', addresses=['0xAbC1230000000000000000000000000000000000'])"
        """
        from dao_treasury.db import TxGroup

        txgroup = TxGroup.get(txgroup_id=self.txgroup_id)
        return f"{type(self).__name__}(txgroup='{txgroup.fullname}', addresses={list(self.values)})"


@final
class FromAddressMatcher(_AddressMatcher):
    """Final matcher that categorizes by transaction `from_address`.

    Examples:
        >>> from dao_treasury.sorting._matchers import FromAddressMatcher
        >>> from dao_treasury.types import TxGroupDbid
        >>> address = "0xAbC1230000000000000000000000000000000000"
        >>> fam = FromAddressMatcher(TxGroupDbid(7), [address])
        >>> FromAddressMatcher.match(address)
        TxGroupDbid(7)
    """

    __instances__: ClassVar[List["FromAddressMatcher"]] = []
    __cache__: ClassVar[Dict[ChecksumAddress, TxGroupDbid]] = {}


@final
class ToAddressMatcher(_AddressMatcher):
    """Final matcher that categorizes by transaction `to_address`.

    Examples:
        >>> from dao_treasury.sorting._matchers import ToAddressMatcher
        >>> from dao_treasury.types import TxGroupDbid
        >>> address = "0xDef4560000000000000000000000000000000000"
        >>> tam = ToAddressMatcher(TxGroupDbid(8), [address])
        >>> ToAddressMatcher.match(address)
        TxGroupDbid(8)
    """

    __instances__: ClassVar[List["ToAddressMatcher"]] = []
    __cache__: ClassVar[Dict[ChecksumAddress, TxGroupDbid]] = {}


@final
class HashMatcher(_HexStringMatcher):
    """Final matcher that categorizes by transaction hash.

    Matches full 66-character hex transaction hashes.

    Examples:
        >>> from dao_treasury.sorting._matchers import HashMatcher
        >>> from dao_treasury.types import TxGroupDbid
        >>> hash_str = '0x' + 'f' * 64
        >>> hm = HashMatcher(TxGroupDbid(9), [hash_str])
        >>> HashMatcher.match(hash_str)
        TxGroupDbid(9)
        >>> repr(hm)
        "HashMatcher(txgroup='Root:Group', hashes=['0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff'])"
    """

    expected_length: ClassVar[int] = 66
    __instances__: ClassVar[List["HashMatcher"]] = []
    __cache__: ClassVar[Dict[HexStr, TxGroupDbid]] = {}

    def __init__(self, txgroup: TxGroupDbid, hashes: Iterable[HexStr]) -> None:
        """Initialize hash matcher ensuring unique transaction hashes.

        Validates and normalizes hashes to fixed length, and ensures that each hash is
        only registered once. Duplicate hashes in the input iterable will log a warning,
        but only the first occurrence is used.

        Args:
            txgroup: Identifier of the transaction group.
            hashes: Iterable of hex string hashes.

        Raises:
            ValueError: If `hashes` is empty, or if any hash already has an existing
                matcher.

        Examples:
            >>> from dao_treasury.sorting._matchers import HashMatcher
            >>> from dao_treasury.types import TxGroupDbid
            >>> hash_str = '0x' + 'f' * 64
            >>> # duplicate in list logs warning but does not raise
            >>> hm = HashMatcher(TxGroupDbid(9), [hash_str, hash_str])
            >>> HashMatcher.match(hash_str)
            TxGroupDbid(9)

        See Also:
            :meth:`_validate_hexstr`
        """
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
        """Return a string representation including the full txgroup path and hashes.

        Queries the database for the TxGroup entity to show its full path.

        Examples:
            >>> from dao_treasury.sorting._matchers import HashMatcher
            >>> from dao_treasury.types import TxGroupDbid
            >>> hash_str = '0x' + 'f' * 64
            >>> hm = HashMatcher(TxGroupDbid(10), [hash_str])
            >>> repr(hm)
            "HashMatcher(txgroup='Root:Group', hashes=['0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff'])"
        """
        from dao_treasury.db import TxGroup

        txgroup = TxGroup.get(txgroup_id=self.txgroup_id)
        return f"{type(self).__name__}(txgroup='{txgroup.fullname}', hashes={list(self.values)})"
