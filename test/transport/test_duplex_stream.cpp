#include "test_duplex_stream.h"
#include <algorithm>

namespace xrtransport {
namespace test {

TestSyncDuplexStream::TestSyncDuplexStream(std::shared_ptr<SharedBuffer> buffer,
                                   SharedBuffer::Side side,
                                   asio::io_context& io_context)
    : buffer_(std::move(buffer)), side_(side), io_context_(io_context) {
}

void TestSyncDuplexStream::close() {
    buffer_->close();
}

void TestSyncDuplexStream::close(asio::error_code& ec) {
    ec.clear();
    buffer_->close();
}

std::size_t TestSyncDuplexStream::read_some(const asio::mutable_buffer& buffers) {
    asio::error_code ec;
    auto result = read_some(buffers, ec);
    if (ec) {
        throw std::system_error(ec);
    }
    return result;
}

std::size_t TestSyncDuplexStream::read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) {
    ec.clear();

    if (!buffer_->is_open()) {
        ec = asio::error::bad_descriptor;
        return 0;
    }

    apply_delays();

    // Simulate partial reads by limiting read size
    size_t request_size = std::min(buffers.size(), max_read_size_);

    // In blocking mode, wait for data if none available
    while (buffer_->available(side_) == 0) {
        bool wait_result = buffer_->wait_for_data(side_);
        if (!wait_result) {
            ec = asio::error::operation_aborted;
            return 0;
        }
    }

    size_t bytes_read = buffer_->read(side_, buffers.data(), request_size);
    return bytes_read;
}

std::size_t TestSyncDuplexStream::write_some(const asio::const_buffer& buffers) {
    asio::error_code ec;
    auto result = write_some(buffers, ec);
    if (ec) {
        throw std::system_error(ec);
    }
    return result;
}

std::size_t TestSyncDuplexStream::write_some(const asio::const_buffer& buffers, asio::error_code& ec) {
    ec.clear();

    if (!buffer_->is_open()) {
        ec = asio::error::bad_descriptor;
        return 0;
    }

    apply_delays();

    size_t bytes_written = buffer_->write(side_, buffers.data(), buffers.size());
    return bytes_written;
}

void TestSyncDuplexStream::apply_delays() {
    if (read_delay_.count() > 0 || write_delay_.count() > 0) {
        auto total_delay = read_delay_ + write_delay_;
        if (total_delay.count() > 0) {
            std::this_thread::sleep_for(total_delay);
        }
    }
}

std::pair<std::unique_ptr<SyncDuplexStream>, std::unique_ptr<SyncDuplexStream>>
create_connected_streams(asio::io_context& io_context) {
    auto buffer = std::make_shared<SharedBuffer>();

    return std::make_pair(
        std::make_unique<TestSyncDuplexStream>(buffer, SharedBuffer::SIDE_A, io_context),
        std::make_unique<TestSyncDuplexStream>(buffer, SharedBuffer::SIDE_B, io_context)
    );
}

} // namespace test
} // namespace xrtransport