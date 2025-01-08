# cpp

## Running the Echo Server with Multiple Threads

To run the echo server with multiple threads, follow these steps:

1. Ensure you have Boost libraries installed on your system.
2. Compile the server using a C++ compiler, for example:
   ```sh
   g++ -o echo_server main.cpp -lboost_system -lpthread
   ```
3. Run the server with the desired number of threads:
   ```sh
   ./echo_server <port>
   ```
   The server will automatically utilize the number of hardware concurrency threads available on your system.

## Development Container

To use the development container for development, follow these steps:

1. Ensure you have Docker and Visual Studio Code installed on your system.
2. Open the project in Visual Studio Code.
3. When prompted, reopen the project in the container.
4. The required extensions and settings for the devcontainer are already configured.
