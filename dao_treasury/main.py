"""Command-line interface for exporting DAO treasury transactions.

This module defines the `main` entrypoint script for running a one-time export of treasury transactions,
populating the local SQLite database, and launching Grafana with its renderer. It uses Brownie and
:class:`dao_treasury.Treasury` to fetch on-chain ledger entries, then applies optional sorting rules
before inserting them via :func:`dao_treasury._docker.ensure_containers`.

Example:
    Running from the shell:

        $ dao-treasury --network mainnet --sort-rules ./rules --wallet 0xABC123... \
            --grafana-port 3000 --renderer-port 8091

See Also:
    :func:`dao_treasury._docker.ensure_containers`
    :class:`dao_treasury.Treasury`
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
    "--sort-rules",
    type=Path,
    help=(
        "Directory containing sort rules definitions. "
        "If omitted, transactions are exported without custom sorting."
    ),
    default=None,
)
parser.add_argument(
    '--interval',
    type=str,
    help='The time interval between datapoints. default: 1d',
    default='1d',
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
    """Run the export process synchronously by invoking the asynchronous export.

    This function is the entrypoint for the `dao-treasury` console script. It
    parses command-line arguments and invokes :func:`export`.

    Examples:
        From the command line::

            $ dao-treasury --network mainnet --sort-rules=./rules --wallet 0xABC123...
    """
    asyncio.get_event_loop().run_until_complete(export(args))


async def export(args) -> None:
    """Perform a one-time export of treasury transactions and start Grafana services.

    This coroutine instantiates a :class:`dao_treasury.Treasury` object using
    `args.wallet` and `args.sort_rules`, then ensures that the necessary Docker
    containers (Grafana and the renderer) are running before populating the
    database with transactions from block 0 to the current chain height.

    Args:
        args: Parsed command-line arguments with attributes:
            - wallet: Wallet address(es) for the DAO treasury.
            - sort_rules: Directory of sorting rules.
            - daemon: Whether to run as a daemon (currently ignored).
            - grafana_port: Port for Grafana.
            - renderer_port: Port for the renderer service.
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
