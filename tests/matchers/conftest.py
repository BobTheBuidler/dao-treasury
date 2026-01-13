import logging

import pytest

from dao_treasury.sorting._matchers import (
    FromAddressMatcher,
    HashMatcher,
    ToAddressMatcher,
    logger,
)

# Ensure that INFO logging is disabled so that __repr__ is not invoked during tests.
logger.setLevel(logging.WARNING)


@pytest.fixture(autouse=True)
def reset_matchers():
    # Clear matcher state before each test
    FromAddressMatcher.__instances__.clear()
    FromAddressMatcher.__cache__.clear()
    ToAddressMatcher.__instances__.clear()
    ToAddressMatcher.__cache__.clear()
    HashMatcher.__instances__.clear()
    HashMatcher.__cache__.clear()
    yield
    # Clear matcher state after each test
    FromAddressMatcher.__instances__.clear()
    FromAddressMatcher.__cache__.clear()
    ToAddressMatcher.__instances__.clear()
    ToAddressMatcher.__cache__.clear()
    HashMatcher.__instances__.clear()
    HashMatcher.__cache__.clear()
