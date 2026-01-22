// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_TEST_SHARED_BUFFER_H
#define XRTRANSPORT_TEST_SHARED_BUFFER_H

#include <vector>
#include <mutex>
#include <condition_variable>
#include <cstdint>
#include <cstring>

namespace xrtransport {
namespace test {

/**
 * Thread-safe shared buffer for bidirectional communication between two TestDuplexStream instances.
 * Each side reads from the other side's write buffer and writes to its own buffer.
 */
class SharedBuffer {
public:
    enum Side {
        SIDE_A,
        SIDE_B
    };

private:
    mutable std::mutex mutex_;
    mutable std::condition_variable cv_;

    std::vector<uint8_t> buffer_a_to_b_;
    std::vector<uint8_t> buffer_b_to_a_;

    size_t read_pos_a_to_b_ = 0;
    size_t read_pos_b_to_a_ = 0;

    bool closed = false;

public:
    SharedBuffer() = default;
    ~SharedBuffer() = default;

    // Disable copy/move to ensure stability of references
    SharedBuffer(const SharedBuffer&) = delete;
    SharedBuffer& operator=(const SharedBuffer&) = delete;
    SharedBuffer(SharedBuffer&&) = delete;
    SharedBuffer& operator=(SharedBuffer&&) = delete;

    /**
     * Write data from the specified side to its write buffer
     */
    size_t write(Side side, const void* data, size_t size);

    /**
     * Read data for the specified side from the other side's write buffer
     */
    size_t read(Side side, void* data, size_t size);

    /**
     * Check how many bytes are available for reading by the specified side
     */
    size_t available(Side side) const;

    /**
     * Wait for data to become available for reading by the specified side
     */
    bool wait_for_data(Side side) const;

    /**
     * Clear all buffers (for test cleanup)
     */
    void clear();

    /**
     * Interrupt any waiting operation
     */
    void close();

    /**
     * Whether the buffer has been closed
     */
    bool is_open() const;

private:
    std::vector<uint8_t>& get_write_buffer(Side side);
    const std::vector<uint8_t>& get_read_buffer(Side side) const;
    std::vector<uint8_t>& get_read_buffer(Side side);
    size_t& get_read_pos(Side side);
    const size_t& get_read_pos(Side side) const;
};

} // namespace test
} // namespace xrtransport

#endif // XRTRANSPORT_TEST_SHARED_BUFFER_H