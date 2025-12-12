#include "test_duplex_stream.h"
#include <algorithm>

namespace xrtransport {
namespace test {

TestDuplexStream::TestDuplexStream(std::shared_ptr<SharedBuffer> buffer,
                                   SharedBuffer::Side side,
                                   asio::io_context& io_context)
    : buffer_(std::move(buffer)), side_(side), io_context_(io_context) {
}

bool TestDuplexStream::is_open() const {
    return buffer_->is_open();
}

void TestDuplexStream::close() {
    buffer_->close();
}

void TestDuplexStream::close(asio::error_code& ec) {
    ec.clear();
    buffer_->close();
}

void TestDuplexStream::non_blocking(bool mode) {
    non_blocking_ = mode;
}

bool TestDuplexStream::non_blocking() const {
    return non_blocking_;
}

std::size_t TestDuplexStream::available() {
    asio::error_code ec;
    return available(ec);
}

std::size_t TestDuplexStream::available(asio::error_code& ec) {
    ec.clear();
    return buffer_->available(side_);
}

std::size_t TestDuplexStream::read_some(const asio::mutable_buffer& buffers) {
    asio::error_code ec;
    auto result = read_some(buffers, ec);
    if (ec) {
        throw std::system_error(ec);
    }
    return result;
}

std::size_t TestDuplexStream::read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) {
    ec.clear();

    if (!is_open()) {
        ec = asio::error::bad_descriptor;
        return 0;
    }

    apply_delays();

    // Simulate partial reads by limiting read size
    size_t request_size = std::min(buffers.size(), max_read_size_);

    if (!non_blocking_) {
        // In blocking mode, wait for data if none available
        while (buffer_->available(side_) == 0) {
            bool wait_result = buffer_->wait_for_data(side_);
            if (!wait_result) {
                ec = asio::error::operation_aborted;
                return 0;
            }
        }
    }

    size_t bytes_read = buffer_->read(side_, buffers.data(), request_size);
    return bytes_read;
}

std::size_t TestDuplexStream::write_some(const asio::const_buffer& buffers) {
    asio::error_code ec;
    auto result = write_some(buffers, ec);
    if (ec) {
        throw std::system_error(ec);
    }
    return result;
}

std::size_t TestDuplexStream::write_some(const asio::const_buffer& buffers, asio::error_code& ec) {
    ec.clear();

    if (!is_open()) {
        ec = asio::error::bad_descriptor;
        return 0;
    }

    apply_delays();

    size_t bytes_written = buffer_->write(side_, buffers.data(), buffers.size());
    return bytes_written;
}

void TestDuplexStream::async_wait_impl(asio::socket_base::wait_type wait_type,
                                       std::function<void(asio::error_code)> handler) {
    if (wait_type == asio::socket_base::wait_read) {
        // Check if data is immediately available
        if (buffer_->available(side_) > 0) {
            // Data available, schedule immediate callback
            asio::post(io_context_, [handler]() {
                handler(asio::error_code{});
            });
        } else {
            // No data available, schedule a deferred check on next io_context iteration
            asio::post(io_context_, [this, handler]() {
                async_wait_impl(asio::socket_base::wait_read, handler);
            });
        }
    } else if (wait_type == asio::socket_base::wait_write) {
        // Write operations are always ready in our test implementation
        asio::post(io_context_, [handler]() {
            handler(asio::error_code{});
        });
    } else if (wait_type == asio::socket_base::wait_error) {
        // This test stream has no error conditions, so never call the handler
        // The wait will effectively hang forever, which is correct behavior
    }
}

void TestDuplexStream::async_read_some_impl(const asio::mutable_buffer& buffers,
                                            std::function<void(asio::error_code, std::size_t)> handler) {
    asio::post(io_context_, [this, buffers, handler]() {
        asio::error_code ec;
        size_t bytes_read = read_some(buffers, ec);
        handler(ec, bytes_read);
    });
}

void TestDuplexStream::async_write_some_impl(const asio::const_buffer& buffers,
                                             std::function<void(asio::error_code, std::size_t)> handler) {
    asio::post(io_context_, [this, buffers, handler]() {
        asio::error_code ec;
        size_t bytes_written = write_some(buffers, ec);
        handler(ec, bytes_written);
    });
}

void TestDuplexStream::apply_delays() {
    if (read_delay_.count() > 0 || write_delay_.count() > 0) {
        auto total_delay = read_delay_ + write_delay_;
        if (total_delay.count() > 0) {
            std::this_thread::sleep_for(total_delay);
        }
    }
}

std::pair<std::unique_ptr<DuplexStream>, std::unique_ptr<DuplexStream>>
create_connected_streams(asio::io_context& io_context) {
    auto buffer = std::make_shared<SharedBuffer>();

    return std::make_pair(
        std::make_unique<TestDuplexStream>(buffer, SharedBuffer::SIDE_A, io_context),
        std::make_unique<TestDuplexStream>(buffer, SharedBuffer::SIDE_B, io_context)
    );
}

} // namespace test
} // namespace xrtransport