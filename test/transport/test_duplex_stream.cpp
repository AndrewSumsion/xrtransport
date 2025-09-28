#include "test_duplex_stream.h"
#include <algorithm>

namespace xrtransport {
namespace test {

TestDuplexStream::TestDuplexStream(std::shared_ptr<SharedBuffer> buffer,
                                   SharedBuffer::Side side,
                                   asio::io_context& io_context)
    : buffer_(std::move(buffer)), side_(side), io_context_(io_context) {
}

void TestDuplexStream::blocking_mode(bool mode) {
    blocking_mode_ = mode;
}

bool TestDuplexStream::blocking_mode() const {
    return blocking_mode_;
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
    apply_delays();

    // Simulate partial reads by limiting read size
    size_t request_size = std::min(buffers.size(), max_read_size_);

    if (blocking_mode_) {
        // In blocking mode, wait for data if none available
        while (buffer_->available(side_) == 0) {
            buffer_->wait_for_data(side_);
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
            // No data available, schedule a deferred check
            // In a real implementation this would be more sophisticated,
            // but for testing we'll just post a delayed callback
            asio::post(io_context_, [this, handler]() {
                // Check again after posting
                if (buffer_->available(side_) > 0) {
                    handler(asio::error_code{});
                } else {
                    // Still no data, try again later
                    // This is a simple implementation - in practice you'd want
                    // a more efficient notification mechanism
                    async_wait_impl(asio::socket_base::wait_read, handler);
                }
            });
        }
    } else {
        // Write operations are always ready in our test implementation
        asio::post(io_context_, [handler]() {
            handler(asio::error_code{});
        });
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

std::pair<std::unique_ptr<TestDuplexStream>, std::unique_ptr<TestDuplexStream>>
create_connected_streams(asio::io_context& io_context) {
    auto buffer = std::make_shared<SharedBuffer>();

    auto stream_a = std::make_unique<TestDuplexStream>(buffer, SharedBuffer::SIDE_A, io_context);
    auto stream_b = std::make_unique<TestDuplexStream>(buffer, SharedBuffer::SIDE_B, io_context);

    return std::make_pair(std::move(stream_a), std::move(stream_b));
}

} // namespace test
} // namespace xrtransport