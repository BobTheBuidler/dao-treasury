"""Docker orchestration utilities for DAO Treasury.

Provides functions to build, start, and stop Docker Compose services
required for analytics dashboards (Grafana, renderer). Integrates with
eth-portfolio's Docker setup and ensures all containers are managed
consistently for local analytics.

Key Responsibilities:
    - Build and manage Grafana and renderer containers.
    - Integrate with eth-portfolio Docker services.
    - Provide decorators/utilities for container lifecycle management.

This is the main entry for all Docker-based orchestration.
"""

import logging
from functools import wraps
from importlib import resources
from typing import Any, Callable, Coroutine, Final, Literal, Tuple, TypeVar, List

import eth_portfolio_scripts.docker
from eth_portfolio_scripts.docker import docker_compose
from typing_extensions import ParamSpec

logger: Final = logging.getLogger(__name__)

COMPOSE_FILE: Final = str(
    resources.files("dao_treasury").joinpath("docker-compose.yaml")
)
"""The path of dao-treasury's docker-compose.yaml file on your machine"""


def up(*services: str) -> None:
    """Build and start the specified containers defined in the compose file.

    Args:
        services: service names to bring up.

    This function first builds the Docker services by invoking
    :func:`build` and then starts the specified services in detached mode using
    Docker Compose. If Docker Compose is not available, it falls back
    to the legacy ``docker-compose`` command.

    Examples:
        >>> up('grafana')
        starting the grafana container
        >>> up()
        starting all containers (grafana and renderer)

    See Also:
        :func:`build`
        :func:`down`
        :func:`_exec_command`
    """
    # the proper envs for victoria-metrics arent set yet when we need to start up the postgres container,
    # but they're ready by the time we start the other containers
    if services != ("postgres",):
        # eth-portfolio containers must be started first so dao-treasury can attach to the eth-portfolio docker network
        eth_portfolio_scripts.docker.up("victoria-metrics")

    build(*services)
    _print_notice("starting", services)
    _exec_command(["up", "-d", *services])


def down() -> None:
    """Stop and remove Grafana containers.

    This function brings down the Docker Compose services defined
    in the compose file. Any positional arguments passed are ignored.

    Examples:
        >>> down()
        # Stops containers

    See Also:
        :func:`up`
    """
    print("stopping all dao-treasury containers")
    _exec_command(["down"])


def build(*services: str) -> None:
    """Build Docker images for Grafana containers.

    This function builds all services defined in the Docker Compose
    configuration file. It is a prerequisite step before starting
    containers with :func:`up`.

    Examples:
        >>> build()
        building the grafana containers

    See Also:
        :func:`up`
        :func:`_exec_command`
    """
    _print_notice("building", services)
    _exec_command(["build", *services])


def _print_notice(
    doing: Literal["building", "starting"], services: Tuple[str, ...]
) -> None:
    if len(services) == 1:
        container = services[0]
        print(f"{doing} the {container} container")
    elif len(services) == 2:
        first, second = services
        print(f"{doing} the {first} and {second} containers")
    else:
        *all_but_last, last = services
        print(f"{doing} the {', '.join(all_but_last)}, and {last} containers")


_P = ParamSpec("_P")
_T = TypeVar("_T")


def ensure_containers(
    fn: Callable[_P, Coroutine[Any, Any, _T]],
) -> Callable[_P, Coroutine[Any, Any, _T]]:
    """Decorator to ensure Grafana containers are running before execution.

    This async decorator starts the Docker Compose services via
    :func:`up` before invoking the wrapped coroutine function. Once
    the wrapped function completes or raises an exception, the containers
    can be torn down by calling :func:`down`, although teardown is
    currently commented out.

    Args:
        fn: The asynchronous function to wrap.

    Returns:
        A new coroutine function that wraps the original.

    Examples:
        >>> @ensure_containers
        ... async def main_task():
        ...     # Container-dependent logic here
        ...     pass
        >>> import asyncio
        >>> asyncio.run(main_task())

    See Also:
        :func:`up`
        :func:`down`
    """

    @wraps(fn)
    async def compose_wrap(*args: _P.args, **kwargs: _P.kwargs) -> _T:
        # register shutdown sequence
        # TODO: argument to leave them up
        # NOTE: do we need both this and the finally?
        # signal.signal(signal.SIGINT, down)

        # start Grafana containers
        up("grafana")

        try:
            # attempt to run `fn`
            return await fn(*args, **kwargs)
        finally:
            # stop and remove containers
            # down()
            pass

    return compose_wrap


def _exec_command(command: List[str], *, compose_options: Tuple[str, ...] = ()) -> None:
    """Execute a Docker Compose command with system checks and fallback.

    This internal function ensures that Docker and Docker Compose
    are installed by calling :func:`check_system`. It then executes the
    specified command using the ``docker compose`` CLI. If that fails,
    it falls back to the legacy ``docker-compose`` command.

    Args:
        command: The sequence of command arguments for Docker Compose
            (e.g., ``['up', '-d']`` or ``['down']``).
        compose_options: Additional options to pass before specifying
            the compose file (not commonly used).

    Raises:
        RuntimeError: If both ``docker compose`` and ``docker-compose``
            invocations fail.

    Examples:
        >>> _exec_command(['up', '-d'])
        # Executes `docker compose -f docker-compose.yaml up -d`

    See Also:
        :func:`check_system`
    """
    docker_compose._exec_command(
        command, compose_file=COMPOSE_FILE, compose_options=compose_options
    )
