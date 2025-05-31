from logging import getLogger
from pathlib import Path
from typing import Final, Type, Union, final

import yaml
from pony.orm import db_session
from y import constants

from dao_treasury.sorting import (
    _Matcher,
    FromAddressMatcher,
    HashMatcher,
    ToAddressMatcher,
)
from dao_treasury.types import TopLevelCategory, TxGroupDbid


CHAINID: Final = constants.CHAINID

logger: Final = getLogger("dao_treasury.rules")


@final
class Rules:
    """Loader for transaction‐sorting rule matchers defined in YAML files.

    This class locates rule definitions under a base directory structured by
    top‐level categories (`revenue`, `cost_of_revenue`, `expenses`, `other_income`,
    `other_expense`, `ignore`). Within each category, it searches for YAML files
    named `match_on_hash.{yml,yaml}`, `match_on_from_address.{yml,yaml}`, and
    `match_on_to_address.{yml,yaml}`. Each file may define mapping of transaction
    identifiers to subgroup names under the current chain ID, and those mappings
    are used to create corresponding matcher instances.

    Upon initialization, all matchers are built exactly once, and each matcher
    registers itself in the global in‐memory registry so that incoming transactions
    can be routed accordingly.

    Examples:
        >>> from pathlib import Path
        >>> from dao_treasury.sorting._rules import Rules
        >>> rules = Rules(Path("config/sorting_rules"))
        # Given a file config/sorting_rules/revenue/match_on_hash.yml containing:
        #  1:
        #    DonationReceived:
        #      - 0xabc123...
        #
        # The above will create a `TxGroup` named "Revenue:DonationReceived"
        # and a `HashMatcher` that routes tx hash "0xabc123..." to it.

    See Also:
        :class:`dao_treasury.sorting.HashMatcher`
        :class:`dao_treasury.sorting.FromAddressMatcher`
        :class:`dao_treasury.sorting.ToAddressMatcher`
    """

    def __init__(self, path: Path):
        """Initialize rule directories and build matchers.

        Args:
            path: Base directory containing subdirectories for each top‐level category.
                  Expected layout:
                  ├ revenue/
                  ├ cost_of_revenue/
                  ├ expenses/
                  ├ other_income/
                  ├ other_expense/
                  └ ignore/

        This will set up internal directory attributes and immediately invoke
        the private method to scan and register all matchers.

        Examples:
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

        This method must be called exactly once per `Rules` instance. It will
        raise a `RuntimeError` if re‐invoked.

        It iterates over three file prefixes:
          - "match_on_hash"
          - "match_on_from_address"
          - "match_on_to_address"

        For each prefix, it calls `__build_matchers_for_all_groups`.

        Raises:
            RuntimeError: If this method is invoked a second time on the same object.

        Examples:
            >>> rules = Rules(Path("rules_dir"))
            # Building matchers again raises:
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
            match_rules_filename: Base name of the YAML rule files to load
                                  (without extension), e.g. `"match_on_hash"`.
            matcher_cls: Matcher class to instantiate (e.g. `HashMatcher`,
                         `FromAddressMatcher`, or `ToAddressMatcher`).

        This will call `__build_matchers_for_group` for each category in the
        fixed listing:
          Revenue, Cost of Revenue, Expenses, Other Income, Other Expenses, Ignore

        Examples:
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

        Args:
            top_level_name: Top‐level category name used as the parent TxGroup
                            (e.g. `"Revenue"`, `"Expenses"`, `"Ignore"`).
            rules: Path to the directory containing the YAML rule file for this group.
            filename: Base filename of the rules (without `.yml`/`.yaml`).
            matcher_cls: Matcher class to register rules (subclass of `_Matcher`).

        Behavior:
            1. Search for `filename.yml` or `filename.yaml` in `rules`.
            2. If not found, skip silently.
            3. Otherwise, read the file bytes and parse YAML with `safe_load`.
            4. Warn and return if file is empty.
            5. From parsed content, extract the mapping for the current `CHAINID`.
            6. For each key (subgroup name) and its list/dict of values,
               compute or create a child TxGroup, then instantiate the matcher.

        Raises:
            FileNotFoundError: If no rule file is present under the directory.
            ValueError: If the YAML structure for a chain ID is neither list nor dict.

        Examples:
            >>> rules = Rules(Path("rules"))
            >>> # Attempt to load hash‐based rules for 'Expenses'
            >>> rules._Rules__build_matchers_for_group(
            ...     "Expenses",
            ...     rules.expenses_dir,
            ...     "match_on_hash",
            ...     HashMatcher
            ... )
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

        Examples:
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
