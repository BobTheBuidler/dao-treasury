import asyncio
from datetime import datetime, timedelta, timezone
from decimal import Decimal
from logging import getLogger
from typing import (
    Awaitable,
    Callable,
    Dict,
    Final,
    Iterator,
    List,
    Optional,
    Set,
    final,
)

import dank_mids
import pony.orm
from a_sync import AsyncThreadPoolExecutor, igather
from brownie.network.event import _EventItem
from eth_typing import BlockNumber, ChecksumAddress, HexAddress, HexStr
from tqdm.asyncio import tqdm_asyncio

from y import Contract, Network, get_block_at_timestamp, get_price
from y.time import UnixTimestamp
from y.utils.events import decode_logs, get_logs_asap

from dao_treasury import constants
from dao_treasury.db import (
    Stream,
    StreamedFunds,
    Address,
    Token,
    must_sort_outbound_txgroup_dbid,
)
from dao_treasury._wallet import TreasuryWallet


logger: Final = getLogger(__name__)

_UTC: Final = timezone.utc

_ONE_DAY: Final = 60 * 60 * 24

_STREAMS_THREAD: Final = AsyncThreadPoolExecutor(1)

create_task: Final = asyncio.create_task

ObjectNotFound: Final = pony.orm.ObjectNotFound
commit: Final = pony.orm.commit
db_session: Final = pony.orm.db_session


networks: Final = [Network.Mainnet]

factories: List[HexAddress] = []

if dai_stream_factory := {
    Network.Mainnet: "0x60c7B0c5B3a4Dc8C690b074727a17fF7aA287Ff2",
}.get(constants.CHAINID):
    factories.append(dai_stream_factory)

if yfi_stream_factory := {
    Network.Mainnet: "0xf3764eC89B1ad20A31ed633b1466363FAc1741c4",
}.get(constants.CHAINID):
    factories.append(yfi_stream_factory)


def _generate_dates(
    start: datetime, end: datetime, stop_at_today: bool = True
) -> Iterator[datetime]:
    current = start
    while current < end:
        yield current
        current += timedelta(days=1)
        if stop_at_today and current.date() > datetime.now(_UTC).date():
            break


_StreamToStart = Callable[[HexStr, Optional[BlockNumber]], Awaitable[int]]

_streamToStart_cache: Final[Dict[HexStr, _StreamToStart]] = {}


def _get_streamToStart(stream_id: HexStr) -> _StreamToStart:
    if streamToStart := _streamToStart_cache.get(stream_id):
        return streamToStart
    with db_session:
        contract: Contract = Stream[stream_id].contract.contract  # type: ignore [misc]
    streamToStart = contract.streamToStart.coroutine
    _streamToStart_cache[stream_id] = streamToStart
    return streamToStart


async def _get_start_timestamp(
    stream_id: HexStr, block: Optional[BlockNumber] = None
) -> int:
    streamToStart = _streamToStart_cache.get(stream_id)
    if streamToStart is None:
        streamToStart = await _STREAMS_THREAD.run(_get_streamToStart, stream_id)
    # try:
    return int(await streamToStart(f"0x{stream_id}", block_identifier=block))  # type: ignore [call-arg]
    # except Exception:
    #    return 0


def _pause_stream(stream_id: HexStr) -> None:
    with db_session:
        Stream[stream_id].pause()  # type: ignore [misc]


def _stop_stream(stream_id: str, block: BlockNumber) -> None:
    with db_session:
        Stream[stream_id].stop_stream(block)  # type: ignore [misc]


_block_timestamps: Final[Dict[BlockNumber, UnixTimestamp]] = {}


async def _get_block_timestamp(block: BlockNumber) -> UnixTimestamp:
    if timestamp := _block_timestamps.get(block):
        return timestamp
    timestamp = await dank_mids.eth.get_block_timestamp(block)
    _block_timestamps[block] = timestamp
    return timestamp


"""
class _StreamProcessor(ABC):
    @abstractmethod
    async def _load_streams(self) -> None:
        ...
"""


@final
class LlamaPayProcessor:
    """
    Generalized async processor for DAO stream contracts.
    Args are passed in at construction time.
    Supports time-bounded admin periods for filtering.
    """

    handled_events: Final = (
        "StreamCreated",
        "StreamCreatedWithReason",
        "StreamModified",
        "StreamPaused",
        "StreamCancelled",
    )
    skipped_events: Final = (
        "PayerDeposit",
        "PayerWithdraw",
        "Withdraw",
    )

    def __init__(self) -> None:
        self.stream_contracts: Final = {Contract(addr) for addr in factories}

    async def _get_streams(self) -> None:
        await igather(
            self._load_contract_events(stream_contract)
            for stream_contract in self.stream_contracts
        )

    async def _load_contract_events(self, stream_contract: Contract) -> None:
        events = decode_logs(
            await get_logs_asap(stream_contract.address, None, sync=False)
        )
        keys: Set[str] = set(events.keys())
        for k in keys:
            if k not in self.handled_events and k not in self.skipped_events:
                raise NotImplementedError(f"Need to handle event: {k}")

        if "StreamCreated" in keys:
            for event in events["StreamCreated"]:
                from_address, *_ = event.values()
                from_address = Address.get_or_insert(from_address).address
                if not TreasuryWallet.check_membership(
                    from_address, event.block_number
                ):
                    continue
                await _STREAMS_THREAD.run(self._get_stream, event)

        if "StreamCreatedWithReason" in keys:
            for event in events["StreamCreatedWithReason"]:
                from_address, *_ = event.values()
                from_address = Address.get_or_insert(from_address).address
                if not TreasuryWallet.check_membership(
                    from_address, event.block_number
                ):
                    continue
                await _STREAMS_THREAD.run(self._get_stream, event)

        if "StreamModified" in keys:
            for event in events["StreamModified"]:
                from_address, _, _, old_stream_id, *_ = event.values()
                if not TreasuryWallet.check_membership(
                    from_address, event.block_number
                ):
                    continue
                await _STREAMS_THREAD.run(
                    _stop_stream, old_stream_id.hex(), event.block_number
                )
                await _STREAMS_THREAD.run(self._get_stream, event)

        if "StreamPaused" in keys:
            for event in events["StreamPaused"]:
                from_address, *_, stream_id = event.values()
                if not TreasuryWallet.check_membership(
                    from_address, event.block_number
                ):
                    continue
                await _STREAMS_THREAD.run(_pause_stream, stream_id.hex())

        if "StreamCancelled" in keys:
            for event in events["StreamCancelled"]:
                from_address, *_, stream_id = event.values()
                if not TreasuryWallet.check_membership(
                    from_address, event.block_number
                ):
                    continue
                await _STREAMS_THREAD.run(
                    _stop_stream, stream_id.hex(), event.block_number
                )

    def _get_stream(self, log: _EventItem) -> Stream:
        with db_session:
            if log.name == "StreamCreated":
                from_address, to_address, amount_per_second, stream_id = log.values()
                reason = None
            elif log.name == "StreamCreatedWithReason":
                from_address, to_address, amount_per_second, stream_id, reason = (
                    log.values()
                )
            elif log.name == "StreamModified":
                (
                    from_address,
                    _,
                    _,
                    old_stream_id,
                    to_address,
                    amount_per_second,
                    stream_id,
                ) = log.values()
                reason = Stream[old_stream_id.hex()].reason  # type: ignore [misc]
            else:
                raise NotImplementedError("This is not an appropriate event log.")

            stream_id_hex = stream_id.hex()
            try:
                return Stream[stream_id_hex]  # type: ignore [misc]
            except ObjectNotFound:
                entity = Stream(
                    stream_id=stream_id_hex,
                    contract=Address.get_dbid(log.address),
                    start_block=log.block_number,
                    token=Token.get_dbid(Contract(log.address).token()),
                    from_address=Address.get_dbid(from_address),
                    to_address=Address.get_dbid(to_address),
                    amount_per_second=amount_per_second,
                    txgroup=must_sort_outbound_txgroup_dbid,
                )
                if reason is not None:
                    entity.reason = reason
                commit()
                return entity

    def streams_for_recipient(
        self, recipient: ChecksumAddress, at_block: Optional[BlockNumber] = None
    ) -> List[Stream]:
        with db_session:
            streams = Stream.select(lambda s: s.to_address.address == recipient)
            if at_block is None:
                return list(streams)
            return [
                s for s in streams if (s.end_block is None or at_block <= s.end_block)
            ]

    def streams_for_token(
        self, token: ChecksumAddress, include_inactive: bool = False
    ) -> List[Stream]:
        with db_session:
            streams = Stream.select(lambda s: s.token.address.address == token)
            return (
                list(streams)
                if include_inactive
                else [s for s in streams if s.is_alive]
            )

    async def process_streams(self, run_forever: bool = False) -> None:
        logger.info("Processing stream events and streamed funds...")
        # Always sync events before processing
        await self._get_streams()
        with db_session:
            streams = [s.stream_id for s in Stream.select()]
        await tqdm_asyncio.gather(
            *(
                self.process_stream(stream_id, run_forever=run_forever)
                for stream_id in streams
            ),
            desc="LlamaPay Streams",
        )

    async def process_stream(
        self, stream_id: HexStr, run_forever: bool = False
    ) -> None:
        start, end = await _STREAMS_THREAD.run(Stream._get_start_and_end, stream_id)
        for date_obj in _generate_dates(start, end, stop_at_today=not run_forever):
            if await self.process_stream_for_date(stream_id, date_obj) is None:
                return

    async def process_stream_for_date(
        self, stream_id: HexStr, date_obj: datetime
    ) -> Optional[StreamedFunds]:
        entity = await _STREAMS_THREAD.run(
            StreamedFunds.get_entity, stream_id, date_obj
        )
        if entity:
            return entity

        stream_token, start_date = await _STREAMS_THREAD.run(
            Stream._get_token_and_start_date, stream_id
        )
        check_at = date_obj + timedelta(days=1) - timedelta(seconds=1)
        block = await get_block_at_timestamp(check_at, sync=False)
        price_fut = asyncio.create_task(get_price(stream_token, block, sync=False))
        start_timestamp = await _get_start_timestamp(stream_id, block)
        if start_timestamp == 0:
            if await _STREAMS_THREAD.run(Stream.check_closed, stream_id):
                price_fut.cancel()
                return None

            while start_timestamp == 0:
                block -= 1
                start_timestamp = await _get_start_timestamp(stream_id, block)

            block_datetime = datetime.fromtimestamp(
                await _get_block_timestamp(block), tz=_UTC
            )
            assert block_datetime.date() == date_obj.date()
            seconds_active = (check_at - block_datetime).seconds
            is_last_day = True
        else:
            seconds_active = int(check_at.timestamp()) - start_timestamp
            is_last_day = False

        seconds_active_today = min(seconds_active, _ONE_DAY)
        if seconds_active_today < _ONE_DAY and not is_last_day:
            if date_obj.date() != start_date:
                seconds_active_today = _ONE_DAY

        with db_session:
            price = Decimal(await price_fut)
            entity = await _STREAMS_THREAD.run(
                StreamedFunds.create_entity,
                stream_id,
                date_obj,
                price,
                seconds_active_today,
                is_last_day,
            )
            return entity
