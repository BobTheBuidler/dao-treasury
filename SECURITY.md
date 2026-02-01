# Security Policy

## Reporting a Vulnerability

- Use GitHub Security Advisories for private disclosure.
- Include affected version, environment details (OS, Python, Docker), and minimal reproduction steps.
- Do not open a public issue for active vulnerabilities or exploits.

## Scope

- This policy covers code and configuration in this repository, including Docker services and Grafana provisioning files.
- Third-party services (RPC providers, hosting environments, or external dependencies outside this repo) are out of scope.

## Security Practices (Current)

- Services are bound to `127.0.0.1` by default, limiting exposure to the local host.
- Grafana authentication is required by default via `GF_SECURITY_ADMIN_USER` and `GF_SECURITY_ADMIN_PASSWORD`.
- Anonymous Grafana access is optional, Viewer-only, and disabled by default (`DAO_TREASURY_GRAFANA_ANON_ENABLED=false`).
- Grafana sign-ups are disabled by default.
- Grafana admin credentials are validated at startup; invalid credentials fail fast.
- Secrets are provided via environment variables; they are not stored in the repo.
- Grafana is pinned to a specific image tag in `dao_treasury/docker-compose.yaml`.

## Open Issues / Required Disclosures (TODO)

- `dao_treasury/docker-compose.yaml`: Postgres credentials default to `dao_treasury` and should be required via env vars or secrets.
- `dao_treasury/docker-compose.yaml`: Renderer image uses `latest`; should be pinned to a version or digest.
- `dao_treasury/docker-compose.yaml`: `GF_INSTALL_PLUGINS` pulls plugins at runtime; should be pinned or baked into the image.
- `dao_treasury/docker-compose.yaml`: Renderer metrics are enabled and port is published; disable or restrict unless needed.
- `dao_treasury/docker-compose.yaml`: Services join the external `docker_eth_portfolio` network; evaluate whether this is required and limit cross-container access.
