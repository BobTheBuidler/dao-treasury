"""Environment variable configuration for DAO Treasury.

Defines and loads environment variables (with types and defaults) used for
system configuration, such as SQL debugging. Uses :mod:`typed_envs` for convenience and safety.

Key Responsibilities:
    - Define and load environment variables for the system.
    - Provide type-safe access to configuration options.

This is the single source of truth for environment-based settings.
"""

from typing import Final

from typed_envs import EnvVarFactory


_factory = EnvVarFactory("DAO_TREASURY")

SQL_DEBUG: Final = _factory.create_env("SQL_DEBUG", bool, default=False, verbose=False)
