# Tech Context

## Technologies Used
- Python (Pony ORM for data modeling, async utilities)
- SQLite (local database for DAO treasury data)
- Grafana (dashboarding and analytics)
- SQL (custom views for reporting)
- Brownie, y, and eth_portfolio for blockchain data integration

## Development Setup
- All database models and view creation logic are in `dao_treasury/db.py`.
- All dashboards are provisioned via JSON files and use consistent category logic.
- User-facing strings in dashboards are standardized to Title Case.

## Technical Constraints
- New dashboards must follow the established pattern for maintainability.
