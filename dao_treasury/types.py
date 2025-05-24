from typing import Literal, NewType


TopLevelCategory = Literal["Revenue", "Cost of Revenue", "Expenses", "Other Income", "Other Expenses", "Ignore"]

TxGroupDbid = NewType("TxGroupDbid", int)
