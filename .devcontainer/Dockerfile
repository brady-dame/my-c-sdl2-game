# Base image
FROM ubuntu:24.04

# Install C development tools, SDL2, and utilities
RUN apt-get update && apt-get install -y \
    build-essential \
    pkg-config \
    cmake \
    gdb \
    valgrind \
    git \
    wget \
    curl \
    vim \
    nano \
    libsdl2-dev \
    libsdl2-image-dev \
    libsdl2-mixer-dev \
    libsdl2-ttf-dev \
    && rm -rf /var/lib/apt/lists/*

# Set the default working directory inside the container
WORKDIR /workspace
