from typing import Final

import y.constants


CHAINID: Final = y.constants.CHAINID

ZERO_ADDRESS: Final = "0x0000000000000000000000000000000000000000"

# TODO: move disperse.app stuff from yearn-treasury to dao-treasury and then write a docs file
DISPERSE_APP: Final = (
    "0xD152f549545093347A162Dce210e7293f1452150",
    "0xd15fE25eD0Dba12fE05e7029C88b10C25e8880E3",
)
"""If your treasury sends funds to disperse.app, we create additional txs in the db so each individual send can be accounted for."""
