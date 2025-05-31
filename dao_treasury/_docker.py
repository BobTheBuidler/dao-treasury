import logging
import os
import subprocess
from functools import wraps
from typing import Callable, Iterable, Tuple, TypeVar

from eth_portfolio_scripts.docker import check_system
from typing_extensions import ParamSpec

logger = logging.getLogger(__name__)

compose_file = os.path.join(
    os.path.dirname(os.path.abspath(__file__)), "docker-compose.yaml"
)


def up() -> None:
    """Build and start Grafana containers defined in the compose file.

    This function first builds the Docker services by invoking
    :func:`build` and then starts them in detached mode using
    Docker Compose. If Docker Compose is not available, it falls back
    to the legacy ``docker-compose`` command.

    Examples:
        >>> up()
        starting the grafana containers

    See Also:
        :func:`build`
        :func:`down`
        :func:`_exec_command`
    """
    build()
    print("starting the grafana containers")
    _exec_command(["up", "-d"])


def down(*_) -> None:
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


def build() -> None:
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
    _exec_command(["build"])


_P = ParamSpec("_P")
_T = TypeVar("_T")


def ensure_containers(fn: Callable[_P, _T]) -> Callable[_P, _T]:
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
    async def compose_wrap(*args: _P.args, **kwargs: _P.kwargs):
        # register shutdown sequence
        # TODO: argument to leave them up
        # NOTE: do we need both this and the finally?
        # signal.signal(signal.SIGINT, down)

        # start Grafana containers
        up()

        try:
            # attempt to run `fn`
            await fn(*args, **kwargs)
        finally:
            # stop and remove containers
            # down()
            ...

    return compose_wrap


def _exec_command(command: Iterable[str], *, compose_options: Tuple[str] = ()) -> None:
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
    check_system()
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
