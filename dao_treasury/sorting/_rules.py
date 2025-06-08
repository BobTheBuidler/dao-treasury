from logging import getLogger
from pathlib import Path
from typing import Final, Type, Union, final

import yaml
from pony.orm import db_session

from dao_treasury.constants import CHAINID
from dao_treasury.sorting import (
    _Matcher,
    FromAddressMatcher,
    HashMatcher,
    ToAddressMatcher,
)
from dao_treasury.types import TopLevelCategory, TxGroupDbid


logger: Final = getLogger("dao_treasury.rules")


@final
class Rules:
    """Loader for transaction‐sorting rule matchers defined in YAML files.

    This class discovers and instantiates matchers based on simple YAML definitions
    organized under subdirectories for each top‐level category in a given base path.

    The expected directory layout is:

        base_path/
            revenue/
            cost_of_revenue/
            expenses/
            other_income/
            other_expense/
            ignore/

    Under each category directory, files named `match_on_hash.(yml|yaml)`,
    `match_on_from_address.(yml|yaml)`, and `match_on_to_address.(yml|yaml)`
    define mappings of subgroup names to lists or nested dicts of values keyed by
    the active chain ID.

    Upon initialization, all available matchers are built exactly once and registered
    in the global in‐memory registry, allowing transactions to be routed to the
    appropriate `TxGroup` by hash, sender address, or recipient address.

    Examples:
        >>> from pathlib import Path
        >>> from dao_treasury.sorting._rules import Rules
        >>> rules = Rules(Path("config/sorting_rules"))
        # If config/sorting_rules/revenue/match_on_hash.yml contains:
        #   1:
        #     DonationReceived:
        #       - 0xabc123...
        # Then this creates a `TxGroup` named "Revenue:DonationReceived"
        # and a `HashMatcher` that routes hash "0xabc123..." accordingly.

    See Also:
        :class:`dao_treasury.sorting.HashMatcher`
        :class:`dao_treasury.sorting.FromAddressMatcher`
        :class:`dao_treasury.sorting.ToAddressMatcher`
    """

    def __init__(self, path: Path):
        """Initialize rule directories and build matchers.

        Args:
            path: Base directory containing subdirectories for each top‐level category.

        Example:
            >>> from pathlib import Path
            >>> rules = Rules(Path("/absolute/path/to/rules"))
        """
        self.__initialized = False
        self.rules_dir: Final = path
        self.revenue_dir: Final = path / "revenue"
        self.cost_of_revenue_dir: Final = path / "cost_of_revenue"
        self.expenses_dir: Final = path / "expenses"
        self.other_income_dir: Final = path / "other_income"
        self.other_expense_dir: Final = path / "other_expense"
        self.ignore_dir: Final = path / "ignore"
        self.__build_matchers()

    @db_session  # type: ignore [misc]
    def __build_matchers(self) -> None:
        """Scan all categories and rule types, instantiate matchers.

        This method must only run once per `Rules` instance, raising a RuntimeError
        if invoked again. It iterates over the three rule file prefixes and calls
        :meth:`__build_matchers_for_all_groups` for each.

        Raises:
            RuntimeError: If this method is called more than once on the same object.

        Example:
            >>> rules = Rules(Path("rules_dir"))
            # Second build attempt:
            >>> rules._Rules__build_matchers()
            RuntimeError: You cannot initialize the rules more than once
        """
        if self.__initialized:
            raise RuntimeError("You cannot initialize the rules more than once")
        self.__build_matchers_for_all_groups("match_on_hash", HashMatcher)
        self.__build_matchers_for_all_groups(
            "match_on_from_address", FromAddressMatcher
        )
        self.__build_matchers_for_all_groups("match_on_to_address", ToAddressMatcher)
        self.__initialized = True

    def __build_matchers_for_all_groups(
        self, match_rules_filename: str, matcher_cls: Type[_Matcher]
    ) -> None:
        """Register one type of matcher across all top‐level categories.

        Args:
            match_rules_filename: Base filename of the YAML rule files (without extension),
                                  e.g. `"match_on_hash"`.
            matcher_cls: Matcher class to instantiate
                         (HashMatcher, FromAddressMatcher, or ToAddressMatcher).

        This will call :meth:`__build_matchers_for_group` for each of the
        fixed categories: Revenue, Cost of Revenue, Expenses, Other Income,
        Other Expenses, Ignore.

        Example:
            >>> rules = Rules(Path("rules"))
            >>> rules._Rules__build_matchers_for_all_groups("match_on_hash", HashMatcher)
        """
        self.__build_matchers_for_group(
            "Revenue", self.revenue_dir, match_rules_filename, matcher_cls
        )
        self.__build_matchers_for_group(
            "Cost of Revenue",
            self.cost_of_revenue_dir,
            match_rules_filename,
            matcher_cls,
        )
        self.__build_matchers_for_group(
            "Expenses", self.expenses_dir, match_rules_filename, matcher_cls
        )
        self.__build_matchers_for_group(
            "Other Income", self.other_income_dir, match_rules_filename, matcher_cls
        )
        self.__build_matchers_for_group(
            "Other Expenses", self.other_expense_dir, match_rules_filename, matcher_cls
        )
        self.__build_matchers_for_group(
            "Ignore", self.ignore_dir, match_rules_filename, matcher_cls
        )

    def __build_matchers_for_group(
        self,
        top_level_name: TopLevelCategory,
        rules: Path,
        filename: str,
        matcher_cls: Type[_Matcher],
    ) -> None:
        """Load and instantiate matchers defined in a specific category directory.

        This method locates `<filename>.yml` or `<filename>.yaml` under `rules`
        and parses it. If the file is missing, it is skipped silently. If the file
        is empty, a warning is logged. Otherwise:

          1. Reads and YAML-parses the file.
          2. Extracts the mapping for the current `CHAINID`.
          3. For each subgroup name and its values (list or dict),
             obtains or creates a child `TxGroup`, then instantiates `matcher_cls`
             for the values.

        Args:
            top_level_name: Top‐level category name used as parent TxGroup
                            (e.g. `"Revenue"`, `"Expenses"`, `"Ignore"`).
            rules: Path to the directory containing the rule file.
            filename: Base filename of the rules (no extension).
            matcher_cls: Matcher class to register rules.

        Raises:
            ValueError: If the YAML mapping under the chain ID is neither a list nor a dict.
        """
        try:
            matchers = self.__get_rule_file(rules, filename)
        except FileNotFoundError:
            return

        from dao_treasury.db import TxGroup

        parent: Union[TxGroup, TxGroupDbid] = TxGroup.get_or_insert(
            top_level_name, None
        )
        parsed = yaml.safe_load(matchers.read_bytes())
        if not parsed:
            logger.warning(f"no content in rule file: {rules}")
            return

        matching_rules: dict = parsed.get(CHAINID, {})  # type: ignore [type-arg]
        for name, hashes in matching_rules.items():
            txgroup_dbid = TxGroup.get_dbid(name, parent)
            if isinstance(hashes, list):
                # initialize the matcher and add it to the registry
                matcher_cls(txgroup_dbid, hashes)  # type: ignore [arg-type]
            elif isinstance(hashes, dict):
                parent = txgroup_dbid
                for name, hashes in hashes.items():
                    txgroup_dbid = TxGroup.get_dbid(name, parent)
                    # initialize the matcher and add it to the registry
                    matcher_cls(txgroup_dbid, hashes)
            else:
                raise ValueError(hashes)

    def __get_rule_file(self, path: Path, filename: str) -> Path:
        """Locate a YAML rule file by trying `.yml` and `.yaml` extensions.

        Args:
            path: Directory in which to search.
            filename: Base name of the file (no extension).

        Returns:
            Full `Path` to the found file.

        Raises:
            FileNotFoundError: If neither `<filename>.yml` nor `<filename>.yaml` exists.

        Example:
            >>> rules_dir = Path("rules/revenue")
            >>> path = rules._Rules__get_rule_file(rules_dir, "match_on_hash")
            >>> print(path.name)
            match_on_hash.yaml
        """
        for suffix in (".yml", ".yaml"):
            fullname = filename + suffix
            p = path / fullname
            if p.exists():
                return p
        logger.warning("%s does not exist", p)
        raise FileNotFoundError(p)
