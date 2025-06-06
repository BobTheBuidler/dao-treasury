Defining Sort Rules
===================

Overview
--------
DAO Treasury’s sorting system provides a flexible and extensible way to classify transactions.
Sort rules can be defined either by specifying a set of transaction attributes to match or by
supplying a custom matching function. The system is built around three main components:

1. Sort Rule Classes and Factories – Predefined sort rule classes (such as RevenueSortRule,
   ExpenseSortRule, etc.) are specialized tools that associate a provided transaction group
   identifier (txgroup) with a fixed category (e.g. “Revenue”, “Expenses”, “Other Income”).
   Internally, these classes register rules under their composite key fullname (e.g., "Revenue:Sales:Ice Cream")
   for matching purposes.
2. Custom Matching via SortRuleFactory – Factories (provided by functions like `revenue`,
   `expense`, etc. in :file:`dao_treasury/sorting/factory.py`) allow registration of custom
   synchronous or asynchronous matching functions.
3. External YAML-Based Sort Rules – Declarative rules defined in YAML files can be loaded at
   runtime by passing the directory path to the CLI via the `--sort-rules` flag.

This document details how to define and register your own sort rules, with real-world examples.

1. Defining Sort Rules with Predefined Classes
------------------------------------------------
DAO Treasury provides specialized rule classes in :file:`dao_treasury/sorting/rule.py`
to cover common transaction types:

- **RevenueSortRule**: Intended for inbound transactions representing revenue.
  - When instantiated with a txgroup like "Sales", it registers the rule internally using a composite key
    such as "Revenue:Sales", signaling that the rule is for revenue transactions.
- **CostOfRevenueSortRule**: Designed for outbound transactions representing cost of revenue.
  - The rule is registered with a composite key like "Cost of Revenue:<txgroup>".
- **ExpenseSortRule**: For outbound transactions representing expenses.
  - A rule created with txgroup "Office" is registered under "Expenses:Office".
- **OtherIncomeSortRule**: For inbound transactions representing other income.
  - The composite key is formed by associating "Other Income" with the provided txgroup.
- **OtherExpenseSortRule**: For outbound transactions representing other expenses.
  - The rule is similarly registered with an "Other Expenses" prefix.
- **IgnoreSortRule**: For transactions that should be omitted from certain reports.
  - The rule is registered using a composite key prefixed with "Ignore:".

Example (static attribute matching):

.. code-block:: python

    from dao_treasury.sorting.rule import RevenueSortRule

    # Create a revenue rule that matches inbound transactions where the token symbol
    # is 'DAI' and the to_address is '0xAbC1230000000000000000000000000000000000'
    # The rule is registered under a composite key "Revenue:Sales"
    # Once defined, all transactions matching this rule will be sorted to group
    # "Revenue:Sales" in the db
    rule = RevenueSortRule(
        txgroup='Sales',
        symbol='DAI',
        to_address='0xAbC1230000000000000000000000000000000000'
    )

2. Registering Custom Matchers Using SortRuleFactory
-----------------------------------------------------
For more dynamic rules, DAO Treasury offers a decorator interface through
:file:`dao_treasury/sorting/factory.py`. Factory functions such as `revenue`, `expense`,
`other_income`, etc., return a SortRuleFactory preconfigured with the appropriate rule type.
These factories support two patterns:

**A. Decorator form**:

.. code-block:: python

    from dao_treasury.sorting.factory import revenue

    @revenue("Token Sales", networks=[1, 3])
    async def match_large_sales(tx):
        return tx.value_usd > 1000

.. note:: Real-world Yearn example: Vault fees rule using `@fees` decorator:  
   https://github.com/BobTheBuidler/yearn-treasury/blob/master/yearn_treasury/rules/revenue/vaults.py

In this form, the factory registers the custom matching function via the rule’s `func` parameter.
The network specification determines if the rule is instantiated (typically, the current CHAINID
must be among the allowed networks).

**B. Static attribute matching**:

.. code-block:: python

    from dao_treasury.sorting.factory import ignore

    ignore("Dust").match(symbol="WETH", from_address="0xAAA...")

3. External YAML-Based Sort Rules
---------------------------------
Define rules in YAML under category subfolders:

.. code-block:: text

    rules/
    ├── revenue/
    │   ├── match_on_hash.yml
    │   └── match_on_to_address.yml
    ├── other_income/
    ├── other_expense/
    └── ignore/

Example YAML mapping:

.. code-block:: yaml

    1:
      DonationReceived:
        - 0xabc123...

Real-world YAML examples:
- Other Expense matcher:  
  https://github.com/BobTheBuidler/yearn-treasury/blob/master/yearn_treasury/rules/other_expense/match_on_to_address.yaml
- Other Income matcher:  
  https://github.com/BobTheBuidler/yearn-treasury/blob/master/yearn_treasury/rules/other_income/match_on_hash.yaml

Enable via CLI:

.. code-block:: console

    dao-treasury --sort-rules ./rules …

Additionally, YAML definitions may include fields such as `from_address`, `to_address`, or full transaction `hash`—these values are validated under the hood by the library’s string matcher classes.

4. Matching Logic in Sort Rules
--------------------------------
Sort rules extend the base class (_SortRule) which defines the matching behavior:

- If specific transaction attributes (like `symbol`, `to_address`, etc.) are provided,
  these are gathered into a cached list (stored in the internal ``_match_all`` dictionary)
  and used for direct attribute comparisons.
- If a custom matching function (`func`) is provided, that function is invoked on the
  transaction. It can be either synchronous (returning a boolean) or asynchronous (awaitable).

The matching process is encapsulated in the `match` method of the rule classes, ensuring that
only one matching strategy (either attribute-based or function-based) is used for a given rule.

Conclusion
----------
Defining custom sort rules involves:

- Using predefined rule classes for standard categories.  
- Registering dynamic rules via decorator factories.  
- Declaring rules in YAML for external, file-based configuration.

This modular design enables DAO Treasury users to flexibly adapt its sorting strategy to the evolving requirements of their DAO.

For details, see:
- :file:`dao_treasury/sorting/rule.py`  
- :file:`dao_treasury/sorting/factory.py`
