from typing import Final

from pony.orm import db_session

from dao_treasury import constants
from dao_treasury.db import Address, _set_address_nicknames_for_tokens


set_nickname: Final = Address.set_nickname


def setup_address_nicknames_in_db() -> None:
    with db_session:
        set_nickname(constants.ZERO_ADDRESS, "Zero Address")
        for address in constants.DISPERSE_APP:
            set_nickname(address, "Disperse.app")
        _set_address_nicknames_for_tokens()
