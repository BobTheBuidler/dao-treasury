from dao_treasury import TreasuryTx
from dao_treasury.sorting.factory import ignore
from dao_treasury.streams import llamapay


@ignore("LlamaPay")
def is_llamapay_stream_replenishment(tx: TreasuryTx) -> bool:
    if tx.to_address.address in llamapay.factories:  # type: ignore [operator]
        # We amortize these streams daily in the `llamapay` module, you'll sort each stream appropriately.
        return True

    # NOTE: not sure if we want this yet
    # Puling unused funds back from vesting escrow / llamapay
    # elif tx.from_address == "Contract: LlamaPay" and "StreamCancelled" in tx.events:
    #    if tx.amount > 0:
    #        tx.amount *= -1
    #    if tx.value_usd > 0:
    #        tx.value_usd *= -1
    #    return True
    return False
