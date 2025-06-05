Transactions Dashboard 
======================

This dashboard provides a real-time view of the transactions in dao-treasury's database, displaying columns such as timestamp, block, hash, token, addresses, and associated metadata (address nicknames, amount, price, and value in USD).

Key Features
------------

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

Usage Tips
----------
- **Filter Combinations**: You can combine chain, token, and address filters to isolate specific events or activity.  
- **“All” Selections**: Selecting “All” in each filter bypasses that dimension, ensuring a broad dataset.  
- **Time Shifting**: Grafana’s time range picker allows you to analyze historical data (e.g., last month, last quarter) to spot trends in token activity.

Conclusion
----------
This dashboard offers a comprehensive overview of your DAO's value transfers. By leveraging Grafana’s powerful variable filters and a direct SQLite data source, users can drill down into specific transactions over any chosen time range, chain, token, or addresses. The result is a dynamic, flexible workflow for analyzing and monitoring token movement in near-real-time.
