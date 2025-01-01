#include "echo_server.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <port>\n";
    return 1;
  }

  try {
    boost::asio::io_context io_context;
    boost::asio::thread_pool thread_pool(std::thread::hardware_concurrency());
    Server server(io_context, std::atoi(argv[1]), thread_pool);
    io_context.run();
    thread_pool.join();
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << "\n";
  }

  return 0;
}