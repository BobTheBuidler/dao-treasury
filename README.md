This library extends eth_portfolio with additional functionality centered around producing financial reports for DAOs and other on-chain orgs.

## Installation

```bash
pip install dao-treasury
```

## Prerequisites

You must have a [brownie network](https://eth-brownie.readthedocs.io/en/stable/network-management.html) configured to use your RPC.
You will also need [Docker](https://www.docker.com/get-started/) installed on your system.

## Usage

Run the treasury export tool:

```bash
# For pip installations:
dao-treasury run --wallet 0x123 --network mainnet --interval 12h
```

For local development (from source installation), use:
```bash
poetry run dao-treasury run --wallet 0x123 --network mainnet --interval 12h
```

**CLI Options:**
- `--network`: The id of the brownie network the exporter will connect to (default: mainnet)
- `--interval`: The time interval between each data snapshot (default: 12h)
- `--daemon`: Run the export process in the background (default: False) (NOTE: currently unsupported)
- `--grafana-port`: Set the port for the Grafana dashboard where you can view data (default: 3004)
- `--renderer-port`: Set the port for the report rendering service (default: 8080)
- `--victoria-port`: Set the port for the Victoria metrics reporting endpoint (default: 8430)

After running the command, the export script will run continuously until you close your terminal.
To access the dashboard, open your browser and navigate to [http://localhost:3003](http://localhost:3003) for the eth-portfolio dashboard and [http://localhost:3004](http://localhost:3004) for the dao-treasury dashboard. Soon I will combine them into one interface but for now you can check both.

Enjoy!
