# Use the official C++ development container image as the base image
FROM mcr.microsoft.com/devcontainers/cpp:0-ubuntu-20.04

# Install clang and clangd
RUN apt-get update && apt-get install -y clang clangd

# Set environment variables for C++ compiler
ENV CXX=clang++
ENV CC=clang
