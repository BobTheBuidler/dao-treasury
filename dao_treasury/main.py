"""Command-line interface for exporting DAO treasury transactions.

This module parses command-line arguments, sets up environment variables for
Grafana and its renderer, and defines the entrypoint for a one-time export of
DAO treasury transactions. It populates the local SQLite database and starts
the required Docker services for Grafana dashboards. Transactions are fetched
via :class:`dao_treasury.Treasury`, sorted according to optional rules, and
inserted using the database routines (:func:`dao_treasury.db.TreasuryTx.insert`).

Example:
    Running from the shell::

        $ dao-treasury --network mainnet --sort-rules ./rules --wallet 0xABC123... \
            --interval 6h --grafana-port 3000 --renderer-port 8091

See Also:
    :func:`dao_treasury._docker.up`,
    :func:`dao_treasury._docker.down`,
    :class:`dao_treasury.Treasury`,
    :func:`dao_treasury.db.TreasuryTx.insert`
"""

import argparse
import asyncio
import logging
import os
from pathlib import Path

import brownie
from eth_typing import BlockNumber

from eth_portfolio_scripts.balances import export_balances


logger = logging.getLogger(__name__)
logging.basicConfig(level=logging.INFO)

parser = argparse.ArgumentParser(
    description="Run a single DAO Treasury export and populate the database.",
)
parser.add_argument(
    "--network",
    type=str,
    help="Brownie network identifier for the RPC to use. Default: mainnet",
    default="mainnet",
)
parser.add_argument(
    "--wallet",
    type=str,
    help=(
        "DAO treasury wallet address(es) to include in the export. "
        "Specify one or more addresses separated by spaces."
    ),
    nargs="+",
)
parser.add_argument(
    "--sort-rules",
    type=Path,
    help=(
        "Directory containing sort rules definitions. "
        "If omitted, transactions are exported without custom sorting."
    ),
    default=None,
)
parser.add_argument(
    "--interval",
    type=str,
    help="The time interval between datapoints. default: 1d",
    default="1d",
)
parser.add_argument(
    "--daemon",
    action="store_true",
    help="TODO: If True, run as a background daemon. Not currently supported.",
)
parser.add_argument(
    "--grafana-port",
    type=int,
    help="Port for the DAO Treasury dashboard web interface. Default: 3000",
    default=3000,
)
parser.add_argument(
    "--renderer-port",
    type=int,
    help="Port for the Grafana rendering service. Default: 8091",
    default=8091,
)

args = parser.parse_args()

os.environ["DAO_TREASURY_GRAFANA_PORT"] = str(args.grafana_port)
os.environ["DAO_TREASURY_RENDERER_PORT"] = str(args.renderer_port)


# TODO: run forever arg
def main() -> None:
    """Entrypoint for the `dao-treasury` console script.

    This function invokes the export coroutine using the arguments parsed at import time.
    It runs the asynchronous export to completion.

    Example:
        From the command line::

            $ dao-treasury --network mainnet --sort-rules=./rules --wallet 0xABC123... 0xDEF456...

    See Also:
        :func:`export`
    """
    asyncio.get_event_loop().run_until_complete(export(args))


async def export(args) -> None:
    """Perform one-time export of treasury transactions and manage Docker services.

    This coroutine creates a :class:`dao_treasury.Treasury` instance using the
    provided wallets and sort rules, brings up the Grafana and renderer containers,
    then concurrently exports balance snapshots and populates the transaction database
    for blocks from 0 to the current chain height.

    Args:
        args: Parsed command-line arguments containing:
            wallet: Treasury wallet address strings.
            sort_rules: Directory of sorting rules.
            interval: Time interval for balance snapshots.
            daemon: Ignored flag.
            grafana_port: Port for Grafana (sets DAO_TREASURY_GRAFANA_PORT).
            renderer_port: Port for renderer (sets DAO_TREASURY_RENDERER_PORT).

    Note:
        Inside this coroutine, the environment variable GRAFANA_PORT is overridden to "3003"
        to satisfy current dashboard requirements.

    Example:
        In code::

            await export(args)  # where args come from parser.parse_args()

    See Also:
        :func:`dao_treasury._docker.up`,
        :func:`dao_treasury._docker.down`,
        :class:`dao_treasury.Treasury.populate_db`
    """
    from dao_treasury import _docker, Treasury

    # TODO: remove this after refactoring eth-port a bit so we arent required to bring up the e-p dashboards
    os.environ["GRAFANA_PORT"] = "3003"

    # TODO but make the dashboard files more specific to dao treasury-ing

    treasury = Treasury(args.wallet, args.sort_rules, asynchronous=True)
    _docker.up()
    try:
        await asyncio.gather(
            export_balances(args),
            treasury.populate_db(BlockNumber(0), brownie.chain.height),
        )
    finally:
        _docker.down()


if __name__ == "__main__":
    os.environ["BROWNIE_NETWORK_ID"] = args.network
    brownie.project.run(__file__)
