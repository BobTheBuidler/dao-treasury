from logging import getLogger
from pathlib import Path
from typing import Final, Type, Union, final

import yaml
from pony.orm import db_session
from y import constants

from dao_treasury.sorting import _Matcher, FromAddressMatcher, HashMatcher, ToAddressMatcher
from dao_treasury.types import TopLevelCategory, TxGroupDbid


CHAINID: Final = constants.CHAINID

logger: Final = getLogger("dao_treasury.rules")


@final
class Rules:
    def __init__(self, path: Path):
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
        if self.__initialized:
            raise RuntimeError("You cannot initialize the rules more than once")
        self.__build_matchers_for_all_groups("match_on_hash", HashMatcher)
        self.__build_matchers_for_all_groups("match_on_from_address", FromAddressMatcher)
        self.__build_matchers_for_all_groups("match_on_to_address", ToAddressMatcher)
        self.__initialized = True
    
    def __build_matchers_for_all_groups(self, match_rules_filename: str, matcher_cls: Type[_Matcher]) -> None:
        self.__build_matchers_for_group("Revenue", self.revenue_dir, match_rules_filename, matcher_cls)
        self.__build_matchers_for_group("Cost of Revenue", self.cost_of_revenue_dir, match_rules_filename, matcher_cls)
        self.__build_matchers_for_group("Expenses", self.expenses_dir, match_rules_filename, matcher_cls)
        self.__build_matchers_for_group("Other Income", self.other_income_dir, match_rules_filename, matcher_cls)
        self.__build_matchers_for_group("Other Expenses", self.other_expense_dir, match_rules_filename, matcher_cls)
        self.__build_matchers_for_group("Ignore", self.ignore_dir, match_rules_filename, matcher_cls)
    
    def __build_matchers_for_group(
        self, 
        top_level_name: TopLevelCategory, 
        rules: Path, 
        filename: str, 
        matcher_cls: Type[_Matcher],
    ) -> None:
        try:
            matchers = self.__get_rule_file(rules, filename)
        except FileNotFoundError:
            return
        
        from dao_treasury.db import TxGroup

        parent: Union[TxGroup, TxGroupDbid] = TxGroup.get_or_insert(top_level_name, None)
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
        for suffix in (".yml", ".yaml"):
            fullname = filename + suffix
            p = path / fullname
            if p.exists():
                return p
        logger.warning("%s does not exist", p)
        raise FileNotFoundError(p)
