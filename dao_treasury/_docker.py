"""This module contains utilities for managing dao-treasury's docker containers"""

import logging
from importlib import resources
import subprocess
from functools import wraps
from typing import Any, Callable, Coroutine, Final, Iterable, Tuple, TypeVar, List

import eth_portfolio_scripts.docker
from typing_extensions import ParamSpec

logger: Final = logging.getLogger(__name__)

compose_file: Final = str(
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
    # eth-portfolio containers must be started first so dao-treasury can attach to the eth-portfolio docker network
    eth_portfolio_scripts.docker.up("victoria-metrics")
    build(*services)
    print(f"starting the {', '.join(services) if services else 'grafana'} container(s)")
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
    print("building the grafana containers")
    _exec_command(["build", *services])


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
    eth_portfolio_scripts.docker.check_system()
    try:
        subprocess.check_output(
            ["docker", "compose", *compose_options, "-f", compose_file, *command]
        )
    except (subprocess.CalledProcessError, FileNotFoundError) as e:
        try:
            subprocess.check_output(
                ["docker-compose", *compose_options, "-f", compose_file, *command]
            )
        except (subprocess.CalledProcessError, FileNotFoundError) as _e:
            raise RuntimeError(
                f"Error occurred while running {' '.join(command)}: {_e}"
            ) from _e
