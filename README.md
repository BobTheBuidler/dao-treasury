DAO Treasury is a comprehensive financial reporting and treasury management solution designed specifically for decentralized organizations. Built as an extension to [eth-portfolio](https://github.com/BobTheBuidler/eth-portfolio)'s [Portfolio Exporter](https://bobthebuidler.github.io/eth-portfolio/exporter.html), DAO Treasury automates the collection and visualization of financial data, enabling organizations to monitor and report on treasury activities with clarity and transparency.

## Key Features

- **Financial Reporting for DAOs:** Extends core portfolio functionalities to generate detailed reports tailored for on-chain organizations.
- **Dashboard Provisioning:** Utilizes [Grafana](https://grafana.com/) dashboards—defined in JSON files within the .grafana/provisioning directories—to offer real-time, dynamic visualizations of treasury data.
- **Automated Data Export:** Features a treasury export tool that, once configured (with a supported [brownie network](https://eth-brownie.readthedocs.io/en/stable/network-management.html) and [Docker](https://www.docker.com/get-started/)), continuously captures financial snapshots at set intervals.
- **Ease of Contribution:** Non-technical users can easily update or create dashboard visuals using Grafana’s intuitive UI. The [Contributing Guidelines](https://github.com/BobTheBuidler/dao-treasury/blob/master/CONTRIBUTING.md) document provides a step-by-step guide to defining new visuals and dashboards and integrating those changes into the repository, ensuring that anyone can contribute to the visual reporting aspect of the project.

## Requirements
- Python 3.10 or higher.
- At least 16GB of RAM.
- All dependencies installed as specified in the project’s pyproject.toml file.

## Prerequisites

- First, you will need to bring your own archive node. This can be one you run yourself, or one from one of the common providers (Tenderly, Alchemy, QuickNode, etc.)
- You must configure a [brownie network](https://eth-brownie.readthedocs.io/en/stable/network-management.html) to use your RPC.
- You will need an auth token for [Etherscan](https://etherscan.io/)'s API. Follow their [guide](https://docs.etherscan.io/etherscan-v2/getting-an-api-key) to get your key, and set env var `ETHERSCAN_TOKEN` with its value.
- You'll also need [Docker](https://www.docker.com/get-started/) installed on your system. If on MacOS, you will need to leave Docker Desktop open while Yearn Treasury is running.

## Installation

```bash
pip install dao-treasury
```

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
To view the dashboards, just open your browser and navigate to [http://localhost:3004](http://localhost:3004)!

Enjoy!

## Screenshots

#### [DAO Transactions Dashboard](https://bobthebuidler.github.io/dao-treasury/transactions.html)

![image](https://github.com/user-attachments/assets/64eb8947-bdd9-490e-a9ea-c9a8e4194df2)

## Contributing

We welcome contributions to DAO Treasury! For detailed guidelines on how to contribute, please see the [Contributing Guidelines](https://github.com/BobTheBuidler/dao-treasury/blob/master/CONTRIBUTING.md).
