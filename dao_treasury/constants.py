"""Core constants for DAO Treasury.

All constants are marked with `Final`, ensuring immutability and allowing
mypyc to compile them as extremely fast C-level constants for maximum
performance. Defines chain IDs, zero address, and key contract addresses
(e.g., Disperse.app) used throughout the system for transaction processing,
nickname assignment, and analytics.

Key Responsibilities:
    - Provide canonical addresses and chain IDs.
    - Support nickname setup and transaction categorization.
    - Guarantee fast, immutable constants at runtime.

This is the single source of truth for system-wide constants.
"""

from typing import Final

import eth_portfolio._utils
import y.constants


CHAINID: Final = y.constants.CHAINID
# TODO: add docstring

ZERO_ADDRESS: Final = "0x0000000000000000000000000000000000000000"
# TODO: add docstring

# TODO: move disperse.app stuff from yearn-treasury to dao-treasury and then write a docs file
DISPERSE_APP: Final = (
    "0xD152f549545093347A162Dce210e7293f1452150",
    "0xd15fE25eD0Dba12fE05e7029C88b10C25e8880E3",
)
"""If your treasury sends funds to disperse.app, we create additional txs in the db so each individual send can be accounted for."""
# TODO: all crosslink to disperse.py once ready


SUPPRESS_ERROR_LOGS: Final = eth_portfolio._utils.SUPPRESS_ERROR_LOGS
"""Append tokens here when you don't expect them to price successfully and do not want to see the associated error logs."""
