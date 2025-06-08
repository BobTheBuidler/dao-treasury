from typing import Final

from typed_envs import EnvVarFactory


_factory = EnvVarFactory("DAO_TREASURY")

SQL_DEBUG: Final = _factory.create_env("SQL_DEBUG", bool, default=False, verbose=False)
