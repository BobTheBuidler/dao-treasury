DAO Treasury Dashboards
=======================

This section documents the main Grafana dashboards used to monitor and analyze the DAO's treasury activity. Each dashboard provides a unique perspective on the DAO's financial flows, streaming payments, and profit & loss.

.. contents::
   :local:
   :depth: 2

Monthly Profit & Loss Dashboard
-------------------------------

This dashboard summarizes the DAO's monthly profit and loss, providing a clear breakdown of sorted and unsorted financial activity for each month.

### Key Features

- **Monthly P&L Table**
  - Displays a table with one row per month, showing all key financial metrics:
    - **Month**: Year and month (YYYY-MM).
    - **Revenue**: Total revenue for the month.
    - **Cost of Revenue**: Direct costs associated with generating revenue.
    - **Expenses**: Total expenses for the month.
    - **Other Income**: Additional income not classified as revenue.
    - **Other Expense**: Additional expenses not classified as core expenses.
    - **Sorted Net**: Net profit/loss for the month, including only sorted transactions.
    - **Unsorted Income**: Total value of inbound transactions pending categorization.
    - **Unsorted Expense**: Total value of outbound transactions pending categorization.
    - **Net**: Net profit/loss for the month, including both sorted and unsorted transactions.

- **Data Source**
  - Powered by the SQLite database, querying from `treasury_txs`, `txgroups`, and `txgroup_hierarchy` to aggregate monthly results.

- **No Filters/Variables**
  - The dashboard does not include Grafana variables; all data is shown for the available date range.

- **Time Range**
  - The table covers all data from January 2025 onward, as defined in the SQL query.

### Usage Tips

- Use this dashboard for monthly financial reporting and to track the DAO's progress in sorting/categorizing all transactions.
- "Unsorted Income" and "Unsorted Expense" columns highlight transactions that still need review, helping ensure accurate financial statements.
- Compare "Sorted Net" and "Net" to assess the impact of unsorted transactions on monthly results.

### Conclusion

The Monthly Profit & Loss dashboard provides a clear, at-a-glance summary of the DAO's financial performance over time, supporting both operational oversight and formal reporting.

Cashflow Summary Dashboard
--------------------------

This dashboard provides a high-level summary of the DAO's cashflows, including sorted and unsorted transactions, with both stat and timeseries panels for comprehensive financial monitoring.

### Key Features

- **Stat Panels**
  - Quick-glance metrics for key financial categories:
    - **Revenue**: Total revenue over the selected time range.
    - **Expenses**: Total expenses.
    - **Cost of Revenue**: Direct costs associated with generating revenue.
    - **Other Income**: Additional income not classified as revenue.
    - **Other Expenses**: Additional expenses not classified as core expenses.
    - **Sorted Total**: Net total of all sorted transactions.
    - **Unsorted (Inbound/Outbound)**: Totals for transactions pending categorization.
    - **Total**: Net total including both sorted and unsorted transactions.

- **Timeseries Panels**
  - **Weekly Cashflow**: Plots Total Revenue, Total Expenses, and Net over time (by week).
  - **Weekly Cashflow (Including Unsorted)**: Same as above, but includes unsorted transactions for a complete picture.

- **Data Source**
  - All panels use the SQLite database, querying the `general_ledger` and `txgroup_hierarchy` tables for up-to-date financial data.

- **Time Range**
  - Default time range is the last 6 months, but all panels respect the Grafana time picker for custom analysis periods.

- **No Filters/Variables**
  - The dashboard does not include Grafana variables; all data is shown for the selected time range.

### Usage Tips

- Use the stat panels for a quick snapshot of the DAO's financial health.
- Analyze trends in revenue, expenses, and net cashflow over time with the timeseries panels.
- Monitor "Unsorted" panels to track transactions that still need categorization and ensure accurate reporting.

### Conclusion

The Cashflow Summary dashboard offers a concise and dynamic overview of the DAO's financial flows, supporting both high-level monitoring and detailed trend analysis.

Transactions Dashboard 
----------------------

This dashboard provides a real-time view of the transactions in dao-treasury's database, displaying columns such as timestamp, block, hash, token, addresses, and associated metadata (address nicknames, amount, price, and value in USD).

### Key Features

1. Time Range Controls
- The dashboard honors Grafana’s built-in time range filter.  
- You can set a custom time window or pick from Grafana’s presets, such as “Last 24 hours.”  
- The query automatically adjusts to include transactions in the specified time range.

2. Chain Filter
- A variable-driven filter is provided for selecting one or more blockchain networks.
- “All” option is available, which fetches transactions from any chain.

3. Token Filter
- A multi-value token filter allows you to restrict transactions to specific token(s).  
- Selecting “All” includes every token in that time window.
- If multiple tokens are selected, the underlying SQL uses an `IN (...)` clause to retrieve transactions for those tokens only.

4. From Address Filter
- Filters transactions by “from” address or address nickname.  
- Selecting “All” includes transactions from all addresses.

5. To Address Filter
- Similar to the “From Address” filter, this variable narrows down transactions by the “to” address or nickname.
- “All” option pulls all outgoing transactions regardless of destination.

6. Transactions Table
- Displays each transaction in rows with key data columns:  
  - **timestamp**: The date/time (in UTC) when the transaction was recorded.  
  - **block**: The block height at which the transaction occurred.  
  - **hash**: A clickable transaction hash (if the panel is configured with a link) or raw hash data.  
  - **token**: Symbol of the token transferred.  
  - **from** / **from nickname**: The originating address and its nickname (if any).  
  - **to** / **to nickname**: The destination address and nickname (if any).  
  - **amount**: Quantity of tokens transferred in the transaction.  
  - **price**: Price per token (in USD) at the time of transfer.  
  - **value usd**: The total value of the transfer in USD (amount × price).  

7. Sorting & Ordering
- The table is sorted by **timestamp** in descending order by default, showing the newest transactions on top.
- You can adjust sorting or ordering by clicking on the column headers if needed.

### Usage Tips

- **Filter Combinations**: You can combine chain, token, and address filters to isolate specific events or activity.  
- **“All” Selections**: Selecting “All” in each filter bypasses that dimension, ensuring a broad dataset.  
- **Time Shifting**: Grafana’s time range picker allows you to analyze historical data (e.g., last month, last quarter) to spot trends in token activity.

### Conclusion

This dashboard offers a comprehensive overview of your DAO's value transfers. By leveraging Grafana’s powerful variable filters and a direct SQLite data source, users can drill down into specific transactions over any chosen time range, chain, token, or addresses. The result is a dynamic, flexible workflow for analyzing and monitoring token movement in near-real-time.

LlamaPay Streams Dashboard
--------------------------

This dashboard provides a comprehensive view of all LlamaPay payment streams managed by the DAO, including their status, participants, and configuration details.

### Key Features

- **Streams Table**
  - Displays all LlamaPay streams in a tabular format.
  - Columns include:
    - **Stream ID**: Unique identifier for the stream.
    - **Factory**: Contract address of the stream factory.
    - **Start Block**: Block number when the stream started.
    - **End Block**: Block number when the stream ended (if applicable).
    - **Token**: Symbol of the token being streamed.
    - **From**: Sender address.
    - **To**: Recipient address.
    - **Reason**: Optional description or reason for the stream.
    - **Amount Per Second**: Rate of tokens streamed per second.
    - **Status**: Current status (Active, Paused, Stopped).
    - **TxGroup**: Transaction group/category for the stream.

- **Data Source**
  - Powered by the SQLite database, querying the `streams` table and joining with `addresses` and `tokens` for metadata.

- **No Filters/Variables**
  - The dashboard does not include Grafana variables or filters; all streams are shown.

- **Time Range**
  - The default time range is the last 6 hours, but the table is not time-filtered in the SQL query.

### Usage Tips

- Use this dashboard to audit all LlamaPay streams, check their status, and review stream configuration.
- Identify active, paused, or stopped streams and their associated parties.
- Useful for financial operations, compliance, and monitoring ongoing payment flows.

### Conclusion

The LlamaPay Streams dashboard offers a clear, real-time overview of all payment streams, enabling effective monitoring and management of DAO streaming payments.
