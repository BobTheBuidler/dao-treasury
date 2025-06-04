from brownie import ZERO_ADDRESS
from pony.orm import db_session

from dao_treasury.db import Address, _set_address_nicknames_for_tokens


def setup_address_nicknames_in_db() -> None:
    with db_session:
        Address.set_nickname(ZERO_ADDRESS, "Zero Address")
        _set_address_nicknames_for_tokens()
