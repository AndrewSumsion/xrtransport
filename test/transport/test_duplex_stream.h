// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_TEST_DUPLEX_STREAM_H
#define XRTRANSPORT_TEST_DUPLEX_STREAM_H

#include "xrtransport/asio_compat.h"
#include "shared_buffer.h"
#include "asio.hpp"

#include <memory>
#include <atomic>
#include <chrono>
#include <thread>

namespace xrtransport {
namespace test {

/**
 * Test implementation of SyncDuplexStream that uses SharedBuffer for bidirectional communication.
 * Two TestDuplexStream instances can be created with the same SharedBuffer to simulate
 * a connected pair of streams.
 */
class TestSyncDuplexStream : public SyncDuplexStream {
private:
    std::shared_ptr<SharedBuffer> buffer_;
    SharedBuffer::Side side_;
    asio::io_context& io_context_;

    // Configuration options
    std::chrono::milliseconds read_delay_{0};
    std::chrono::milliseconds write_delay_{0};
    size_t max_read_size_{SIZE_MAX};  // For simulating partial reads

public:
    /**
     * Create a TestDuplexStream
     * @param buffer Shared buffer for communication
     * @param side Which side of the communication this stream represents
     * @param io_context IO context for async operations
     */
    TestSyncDuplexStream(std::shared_ptr<SharedBuffer> buffer,
                     SharedBuffer::Side side,
                     asio::io_context& io_context);

    ~TestSyncDuplexStream() override = default;

    // Configuration methods for testing
    void set_read_delay(std::chrono::milliseconds delay) { read_delay_ = delay; }
    void set_write_delay(std::chrono::milliseconds delay) { write_delay_ = delay; }
    void set_max_read_size(size_t max_size) { max_read_size_ = max_size; }

    // Stream interface
    void close() override;
    void close(asio::error_code& ec) override;

    // SyncReadStream interface
    std::size_t read_some(const asio::mutable_buffer& buffers) override;
    std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) override;

    // SyncWriteStream interface
    std::size_t write_some(const asio::const_buffer& buffers) override;
    std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) override;

private:
    void apply_delays();
};

/**
 * Helper function to create a pair of connected TestDuplexStream instances
 */
std::pair<std::unique_ptr<SyncDuplexStream>, std::unique_ptr<SyncDuplexStream>>
create_connected_streams(asio::io_context& io_context);

} // namespace test
} // namespace xrtransport

#endif // XRTRANSPORT_TEST_DUPLEX_STREAM_H