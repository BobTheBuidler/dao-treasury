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
import yaml
from a_sync import create_task
from dao_treasury._wallet import load_wallets_from_yaml
from eth_portfolio_scripts.balances import export_balances
from eth_typing import BlockNumber

from dao_treasury.constants import CHAINID


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
        "Specify one or more addresses separated by spaces. "
        "Check out https://bobthebuidler.github.io/dao-treasury/wallets.html for more info."
    ),
    nargs="+",
)
parser.add_argument(
    "--wallets",
    type=Path,
    help=(
        "Path to a YAML file mapping wallet addresses to advanced settings. "
        "Each address is a key, with nested 'start' and/or 'end' mappings containing "
        "either 'block' or 'timestamp'. "
        "Check out https://bobthebuidler.github.io/dao-treasury/wallets.html for more info."
    ),
    default=None,
)
parser.add_argument(
    "--sort-rules",
    type=Path,
    help=(
        "Directory containing sort rules definitions. "
        "If omitted, transactions are exported without custom sorting. "
        "Check out https://bobthebuidler.github.io/dao-treasury/sort_rules.html for more info."
    ),
    default=None,
)
parser.add_argument(
    "--nicknames",
    type=Path,
    help=(
        "File containing sort address nicknames. "
        "If omitted, transactions are exported without custom sorting. "
        "See https://github.com/BobTheBuidler/yearn-treasury/blob/master/yearn_treasury/addresses.yaml for an example."
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
    "--start-renderer",
    action="store_true",
    help="If set, the Grafana renderer container will be started for dashboard image export. By default, only the grafana container is started.",
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
            wallet: List of simple addresses or TreasuryWallet instances.
            sort_rules: Directory of sorting rules.
            interval: Time interval for balance snapshots.
            daemon: Ignored flag.
            grafana_port: Port for Grafana (sets DAO_TREASURY_GRAFANA_PORT).
            renderer_port: Port for renderer (sets DAO_TREASURY_RENDERER_PORT).
            start_renderer: If True, start renderer; otherwise, only start grafana.

    Example:
        In code::

            await export(args)  # where args come from parser.parse_args()

    See Also:
        :func:`dao_treasury._docker.up`,
        :func:`dao_treasury._docker.down`,
        :class:`dao_treasury.Treasury.populate_db`
    """
    import eth_portfolio_scripts.docker

    from dao_treasury import _docker, constants, db, Treasury

    wallets = getattr(args, "wallet", None)
    wallets_advanced = getattr(args, "wallets", None)

    # Ensure user does not supply both simple and advanced wallet inputs
    if wallets and wallets_advanced:
        parser.error("Cannot specify both --wallet and --wallets")

    # Load advanced wallets from YAML if --wallets provided
    if wallets_advanced:
        wallets = load_wallets_from_yaml(wallets_advanced)

    # Ensure at least one wallet source is provided
    if not wallets:
        parser.error("Must specify either --wallet or --wallets")

    # TODO: remove this after refactoring eth-port a bit so we arent required to bring up the e-p dashboards
    os.environ["GRAFANA_PORT"] = "3003"

    # TODO but make the dashboard files more specific to dao treasury-ing

    if args.nicknames:
        parsed: dict = yaml.safe_load(args.nicknames.read_bytes())
        active_network_config: dict = parsed.get(constants.CHAINID, {})
        for nickname, addresses in active_network_config.items():
            for address in addresses:
                db.Address.set_nickname(address, nickname)

    treasury = Treasury(wallets, args.sort_rules, asynchronous=True)

    # Start only the requested containers
    if args.start_renderer is True:
        _docker.up()
    else:
        _docker.up("grafana")

    # eth-portfolio needs this present
    # TODO: we need to update eth-portfolio to honor wallet join and exit times
    if not getattr(args, "wallet", None):
        args.wallet = [
            wallet.address
            for wallet in wallets
            if wallet.networks is None or CHAINID in wallet.networks
        ]

    # TODO: make this user configurable? would require some dynamic grafana dashboard files
    args.label = "Treasury"

    export_task = create_task(
        asyncio.gather(
            export_balances(args),
            treasury.populate_db(BlockNumber(0), brownie.chain.height),
        )
    )

    await asyncio.sleep(1)

    # we don't need these containers since dao-treasury uses its own.
    eth_portfolio_scripts.docker.stop("grafana")
    eth_portfolio_scripts.docker.stop("renderer")

    try:
        await export_task
    finally:
        _docker.down()


if __name__ == "__main__":
    os.environ["BROWNIE_NETWORK_ID"] = args.network
    brownie.project.run(__file__)
