"""Address nickname setup utilities.

This module provides functions to assign human-readable nicknames to
important on-chain addresses (e.g., Zero Address, Disperse.app, tokens).
It is used at package initialization to ensure all analytics and dashboards
display professional, consistent labels.

Key Responsibilities:
    - Set nicknames for core addresses in the database.
    - Integrate with constants and token metadata.
    - Support professional, readable analytics outputs.

This is called automatically on package import.
"""

from typing import Final

from pony.orm import db_session

from dao_treasury import constants
from dao_treasury.db import Address, init_db, set_address_nicknames_for_tokens


set_nickname: Final = Address.set_nickname


def setup_address_nicknames_in_db() -> None:
    init_db()
    with db_session:
        set_nickname(constants.ZERO_ADDRESS, "Zero Address")
        for address in constants.DISPERSE_APP:
            set_nickname(address, "Disperse.app")
        set_address_nicknames_for_tokens()
