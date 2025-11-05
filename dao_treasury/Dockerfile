# syntax=docker/dockerfile:1

FROM python:3.12-slim

ARG DAO_TREASURY_VERSION

# Set environment variables
ENV PYTHONDONTWRITEBYTECODE=1
ENV PYTHONUNBUFFERED=1

# Install system dependencies
RUN apt-get update && \
    apt-get install -y --no-install-recommends build-essential git && \
    rm -rf /var/lib/apt/lists/*

# Set workdir
WORKDIR /app


# Invalidate the docker cache if dao-treasury was updated
RUN echo "DAO_TREASURY_VERSION=${DAO_TREASURY_VERSION}"

# Install container dependencies
RUN pip install --upgrade pip
# NOTE We must pin setuptools==80.9.0 to prevent a conflict with web3 v6
RUN pip install setuptools==80.9.0 dao-treasury==${DAO_TREASURY_VERSION}
