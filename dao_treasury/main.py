
import argparse
import asyncio
import logging
import os
from pathlib import Path

import brownie
from eth_typing import BlockNumber


logger = logging.getLogger(__name__)
logging.basicConfig(level=logging.INFO)

parser = argparse.ArgumentParser(
    description="Runs the DAO Treasury Exporter until stopped",
)

parser.add_argument(
    '--network', 
    type=str,
    help='The brownie network identifier for the rpc you wish to use. default: mainnet',
    default='mainnet', 
)
parser.add_argument(
    "--sort-rules",
    type=Path,
    help="The directory where your sort rules are defined. If not provided, transactions will be exported without sorting.",
    default=None,
)
# TODO pass interval to the eth-portfolio portfolio exporter, but make the dashboard files more specific to dao treasury-ing
#parser.add_argument(
#    '--interval', 
#    type=str,
#    help='The time interval between datapoints. default: 1d',
#    default='1d', 
#)
parser.add_argument(
    '--daemon', 
    action="store_true",
    help='TODO: If True, starts a daemon process instead of running in your terminal. Not currently supported.',
)
parser.add_argument(
    '--grafana-port',
    type=int,
    help='The port that will be used by grafana',
    default=3000,
)
parser.add_argument(
    '--renderer-port',
    type=int,
    help='The port that will be used by grafana',
    default=8091,
)

args = parser.parse_args()

os.environ['GF_PORT'] = str(args.grafana_port)
os.environ['RENDERER_PORT'] = str(args.renderer_port)

# TODO: run forever arg
def main() -> None:
    asyncio.run(export(args))

async def export(args) -> None:
    from dao_treasury import _docker, Treasury
    # TODO pass interval to the eth-portfolio portfolio exporter, but make the dashboard files more specific to dao treasury-ing
    #interval = parse_timedelta(args.interval)

    treasury = Treasury(args.wallet, args.sort_rules, asynchronous=True)
    await _docker.ensure_containers(treasury.populate_db)(BlockNumber(0), brownie.chain.height)

if __name__ == "__main__":
    os.environ['BROWNIE_NETWORK_ID'] = args.network
    brownie.project.run(__file__)
