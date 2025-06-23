# System Patterns

This document describes the key technical, architectural, and workflow patterns that govern the entire DAO Treasury repository. It is intended as a reference for all contributors and maintainers, ensuring consistency, maintainability, and extensibility across the codebase.

---

## 1. Data Modeling and Persistence

- **Pony ORM** is used for all sql interaction, with entities for chains, addresses, tokens, transaction groups, treasury transactions, streams, and streamed funds.
- **Type hints** and `Final` are used throughout for safety and clarity.
- **SQL views** are created in `db.py` for all reporting and analytics needs.
- **Extensible models:** New entities and relationships can be added by following the established ORM and view patterns.

---

## 2. Service Orchestration and Deployment

- **Docker Compose** orchestrates all services (Grafana, renderer, etc.), with persistent volumes and environment-based configuration.
- **Makefile** and **Poetry** are used for build, test, and documentation automation.
- **Environment variables** are used for all sensitive and environment-specific settings.

---

## 3. Code Organization and Modularity

- **Modular package structure:** Core logic is in `dao_treasury/`, with submodules for sorting, streams, and rules.
- **Sorting rules** are defined in YAML, loaded dynamically, and are fully extensible.
- **Streams** (e.g., LlamaPay) are processed asynchronously and can be extended for new protocols.
- **No duplicated logic:** Patterns for category resolution, sorting, and reporting are centralized.

---

## 4. Testing and Quality

- **pytest** is used for all tests, with `conftest.py` for fixtures and hooks.
- **Type checking** is enforced with mypy, with strict settings and error code management.
- **C extensions** are built for performance-critical modules using mypyc.

---

## 5. Documentation and Developer Workflow

- **Sphinx** is used for API and feature documentation, with auto-generated docs from code.
- **README.md** and `docs/` provide clear onboarding, usage, and contribution instructions.
- **Contribution guidelines** are explicit and support both technical and non-technical contributors.
- **Makefile** targets automate builds and documentation generation.

---

## 6. Naming, Formatting, and User-Facing Conventions

- **Title Case** for all user-facing strings in dashboards and reports.
- **Consistent naming** for files, classes, and functions.
- **Professional, clear UI/UX** in all outputs.

---

## 7. Extensibility and Maintainability

- **Single source of truth** for all data relationships and business logic.
- **New features** (entities, rules, dashboards, streams) can be added by following established patterns.
- **Modular design** allows for easy extension and refactoring.

---

## 8. Security, Error Handling, and Logging

- **Logging** is used throughout for traceability and debugging.
- **Error handling** is explicit, with custom exceptions and validation.
- **Sensitive data** (API keys, credentials) is managed via environment variables.

---

## Example Patterns

**Data Model Example (Pony ORM):**
```python
class TreasuryTx(db.Entity):
    _table_ = "treasury_txs"
    treasury_tx_id = PrimaryKey(int, auto=True)
    # ... other fields ...
```

**Service Orchestration Example (Docker Compose):**
```yaml
services:
  grafana:
    image: grafana/grafana:10.2.0
    ports:
      - 127.0.0.1:3004:3000
    environment:
      - GF_AUTH_ANONYMOUS_ENABLED=true
    volumes:
      - grafana_data:/var/lib/grafana
```

**Testing Example (pytest):**
```python
def test_wallet_balance():
    # Test logic here
    assert ...
```

**Sorting Rule Example (YAML):**
```yaml
1:
  DonationReceived:
    - 0xabc123...
```

---

**All contributors should follow these patterns to ensure the project remains robust, maintainable, and easy to extend.**
