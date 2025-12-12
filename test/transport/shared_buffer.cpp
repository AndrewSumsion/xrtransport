#include "shared_buffer.h"
#include <algorithm>

namespace xrtransport {
namespace test {

size_t SharedBuffer::write(Side side, const void* data, size_t size) {
    std::lock_guard<std::mutex> lock(mutex_);

    auto& write_buffer = get_write_buffer(side);
    const uint8_t* byte_data = static_cast<const uint8_t*>(data);

    // Append data to the write buffer
    write_buffer.insert(write_buffer.end(), byte_data, byte_data + size);

    // Notify waiting readers
    cv_.notify_all();

    return size;
}

size_t SharedBuffer::read(Side side, void* data, size_t size) {
    std::lock_guard<std::mutex> lock(mutex_);

    const auto& read_buffer = get_read_buffer(side);
    auto& read_pos = get_read_pos(side);

    // Calculate how much data is available
    size_t available_bytes = read_buffer.size() - read_pos;
    size_t bytes_to_read = std::min(size, available_bytes);

    if (bytes_to_read > 0) {
        // Copy data from buffer
        std::memcpy(data, read_buffer.data() + read_pos, bytes_to_read);
        read_pos += bytes_to_read;
    }

    return bytes_to_read;
}

size_t SharedBuffer::available(Side side) const {
    std::lock_guard<std::mutex> lock(mutex_);

    const auto& read_buffer = get_read_buffer(side);
    const auto& read_pos = get_read_pos(side);

    return read_buffer.size() - read_pos;
}

bool SharedBuffer::wait_for_data(Side side) const {
    std::unique_lock<std::mutex> lock(mutex_);

    cv_.wait(lock, [this, side] {
        return get_read_buffer(side).size() > get_read_pos(side) || closed;
    });

    return !closed;
}

void SharedBuffer::clear() {
    std::lock_guard<std::mutex> lock(mutex_);

    buffer_a_to_b_.clear();
    buffer_b_to_a_.clear();
    read_pos_a_to_b_ = 0;
    read_pos_b_to_a_ = 0;

    cv_.notify_all();
}

void SharedBuffer::close() {
    std::lock_guard<std::mutex> lock(mutex_);
    closed = true;
    cv_.notify_all();
}

bool SharedBuffer::is_open() const {
    return !closed;
}

std::vector<uint8_t>& SharedBuffer::get_write_buffer(Side side) {
    return (side == SIDE_A) ? buffer_a_to_b_ : buffer_b_to_a_;
}

const std::vector<uint8_t>& SharedBuffer::get_read_buffer(Side side) const {
    // Each side reads from the other side's write buffer
    return (side == SIDE_A) ? buffer_b_to_a_ : buffer_a_to_b_;
}

std::vector<uint8_t>& SharedBuffer::get_read_buffer(Side side) {
    // Each side reads from the other side's write buffer
    return (side == SIDE_A) ? buffer_b_to_a_ : buffer_a_to_b_;
}

size_t& SharedBuffer::get_read_pos(Side side) {
    // Each side has its own read position for the other side's buffer
    return (side == SIDE_A) ? read_pos_b_to_a_ : read_pos_a_to_b_;
}

const size_t& SharedBuffer::get_read_pos(Side side) const {
    // Each side has its own read position for the other side's buffer
    return (side == SIDE_A) ? read_pos_b_to_a_ : read_pos_a_to_b_;
}

} // namespace test
} // namespace xrtransport