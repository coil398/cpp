#ifndef ECHO_SERVER_HPP
#define ECHO_SERVER_HPP

#include <boost/asio.hpp>
#include <boost/asio/thread_pool.hpp>
#include <iostream>
#include <memory>

using boost::asio::ip::tcp;

#endif // ECHO_SERVER_HPP

class Session : public std::enable_shared_from_this<Session> {
public:
  explicit Session(tcp::socket socket) : socket_(std::move(socket)) {}

  void start() { do_read(); }

private:
  void do_read() {
    auto self(shared_from_this());
    socket_.async_read_some(
        boost::asio::buffer(data_, max_length),
        [this, self](boost::system::error_code ec, std::size_t length) {
          if (!ec) {
            do_write(length);
          }
        });
  }

  void do_write(std::size_t length) {
    auto self(shared_from_this());
    boost::asio::async_write(
        socket_, boost::asio::buffer(data_, length),
        [this, self](boost::system::error_code ec, std::size_t) {
          if (!ec) {
            do_read();
          }
        });
  }

  tcp::socket socket_;
  enum { max_length = 1024 };
  char data_[max_length];
};

class Server {
public:
  Server(boost::asio::thread_pool &thread_pool, short port)
      : acceptor_(thread_pool.get_executor().context(),
                  tcp::endpoint(tcp::v4(), port)),
        thread_pool_(thread_pool) {
    do_accept();
  }

private:
  void do_accept() {
    acceptor_.async_accept([this](boost::system::error_code ec,
                                  tcp::socket socket) {
      if (!ec) {
        boost::asio::post(thread_pool_, [socket = std::move(socket)]() mutable {
          std::make_shared<Session>(std::move(socket))->start();
        });
      }
      do_accept();
    });
  }

  tcp::acceptor acceptor_;
  boost::asio::thread_pool &thread_pool_;
};
