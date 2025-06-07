Specifying Treasury Wallets
===========================

The DAO Treasury CLI supports two modes for specifying wallets:

1. Simple Mode (default)  
   Use the ``--wallet`` flag to list one or more wallet addresses.  
   Example:

   .. code-block:: bash

       dao-treasury --wallet 0xABC... 0xDEF...

2. Advanced Mode  
   Use the ``--wallets`` flag with a path to a YAML file, which will be parsed by :func:`~load_wallets_from_yaml`. This YAML must map each wallet address to a configuration object using the pattern:

   ::

       address:
         networks:                # optional list of chain IDs where this wallet is active
           - <chain-id>
           - <chain-id>
         start:
           timestamp: <unix-timestamp>        # universal for all chains
           <chain-id>:
             block: <block-number>           # chain-specific start block
         end:
           timestamp: <unix-timestamp>        # universal for all chains
           <chain-id>:
             block: <block-number>           # chain-specific end block

   Only one of ``timestamp`` or a chain-specific ``block`` may be provided under ``start`` or under ``end``.

Example YAML File
-----------------

.. code-block:: yaml

    0xABCDEF0123456789ABCDEF0123456789ABCDEF01:
      networks:
        - 1
        - 420
      start:
        timestamp: 1600000000
        1:
          block: 1000000
      end:
        timestamp: 1700000000
        1:
          block: 2000000

    0x1234567890ABCDEF1234567890ABCDEF12345678:
      start:
        timestamp: 1610000000
      end:
        1:
          block: 2500000

    # Bare address entry (default settings, all chains)
    0xAAAABBBBCCCCDDDDEEEEFFFF0000111122223333:

Notes
-----

- The top-level keys are wallet addresses.
- Use the optional ``networks`` key (a list of integer chain IDs) to restrict a wallet to specific chains.
- Under ``start`` or ``end``, use ``timestamp`` for a universal timestamp setting.
- For chain-specific block numbers, use the integer chain ID as a key mapping to a ``block`` value.
- You may specify a bare address key with no nested config to include it with default settings.
- Use either ``--wallet`` or ``--wallets``, but not both.
- Conflicting settings (e.g., both ``timestamp`` and a chain-specific ``block`` under the same section) will result in an error.

Once you've finished congifuring your DAO's treasury wallets, the next step is [defining sort rules](https://bobthebuidler.github.io/dao-treasury/sort_rules.html)