#include "echo_server.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <port>\n";
    return 1;
  }

  try {
    boost::asio::io_context io_context;
    Server server(io_context, std::atoi(argv[1]));
    io_context.run();
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << "\n";
  }

  return 0;
}
