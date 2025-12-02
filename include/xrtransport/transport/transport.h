#ifndef XRTRANSPORT_TRANSPORT_H
#define XRTRANSPORT_TRANSPORT_H

#include "xrtransport/asio_compat.h"

#include "asio/write.hpp"
#include "asio/read.hpp"

#include <mutex>
#include <thread>
#include <functional>
#include <unordered_map>
#include <cstdint>
#include <memory>
#include <atomic>
#include <stdexcept>
#include <vector>

#define XRTRANSPORT_PROTOCOL_VERSION 1
// "XRTP" as a little-endian uint32_t
#define XRTRANSPORT_MAGIC 0x50545258

namespace xrtransport {

// Exception for Transport-specific errors
class TransportException : public std::runtime_error {
public:
    explicit TransportException(const std::string& message) : std::runtime_error(message) {}
};

// Message type constants
constexpr uint16_t FUNCTION_CALL = 1;
constexpr uint16_t FUNCTION_RETURN = 2;
constexpr uint16_t CUSTOM_BASE = 100;

class SendBuffer : public SyncWriteStream {
public:
    std::size_t write_some(const asio::const_buffer& buffer, asio::error_code& ec) {
        ec.clear();
        std::size_t total = 0;
        const std::uint8_t* data = static_cast<const std::uint8_t*>(buffer.data());
        std::size_t size = buffer.size();
        buffer_.insert(buffer_.end(), data, data + size);
        total += size;
        return total;
    }

    std::size_t write_some(const asio::const_buffer& buffer) {
        asio::error_code ec;
        auto n = write_some(buffer, ec);
        if (ec) throw asio::system_error(ec);
        return n;
    }

    // No-ops
    void non_blocking(bool mode) {}
    bool non_blocking() const { return false; }
    bool is_open() const { return true; }
    void close() {}
    void close(asio::error_code& ec) { ec.clear(); }

    const std::vector<std::uint8_t>& data() const { return buffer_; }
    std::vector<std::uint8_t>& data() { return buffer_; }

    void clear() { buffer_.clear(); }

private:
    std::vector<std::uint8_t> buffer_;
};

// RAII stream lock classes
struct [[nodiscard]] MessageLockIn {
    std::unique_lock<std::recursive_mutex> lock;
    SyncReadStream& stream;

    MessageLockIn(std::unique_lock<std::recursive_mutex>&& lock, SyncReadStream& stream)
        : lock(std::move(lock)), stream(stream) {}

    MessageLockIn(const MessageLockIn&) = delete;
    MessageLockIn& operator=(const MessageLockIn&) = delete;
    MessageLockIn(MessageLockIn&&) = default;
    MessageLockIn& operator=(MessageLockIn&&) = default;
};

struct [[nodiscard]] MessageLockOut {
private:
    SyncWriteStream& stream_;
public:
    std::unique_lock<std::recursive_mutex> lock;
    SendBuffer buffer;

    MessageLockOut(std::uint16_t header, std::unique_lock<std::recursive_mutex>&& lock, SyncWriteStream& stream)
        : lock(std::move(lock)), stream_(stream), buffer() {
        // write header to buffer
        asio::write(stream_, asio::buffer(reinterpret_cast<std::uint8_t*>(&header), sizeof(std::uint16_t)));
    }

    MessageLockOut(const MessageLockOut&) = delete;
    MessageLockOut& operator=(const MessageLockOut&) = delete;
    MessageLockOut(MessageLockOut&&) = default;
    MessageLockOut& operator=(MessageLockOut&&) = default;

    void flush() {
        asio::write(stream_, asio::buffer(buffer.data()));
        buffer.clear();
    }

    ~MessageLockOut() {
        flush();
    }
};

// Lock class for raw stream access
struct [[nodiscard]] StreamLock {
    std::unique_lock<std::recursive_mutex> lock;
    SyncDuplexStream& stream;

    StreamLock(std::unique_lock<std::recursive_mutex>&& lock, SyncDuplexStream& stream)
        : lock(std::move(lock)), stream(stream) {}

    StreamLock(const StreamLock&) = delete;
    StreamLock& operator=(const StreamLock&) = delete;
    StreamLock(StreamLock&&) = default;
    StreamLock& operator=(StreamLock&&) = default;
};

// Transport class for message-based communication
class Transport {
private:
    std::unique_ptr<DuplexStream> stream;
    mutable std::recursive_mutex stream_mutex;
    std::atomic<bool> should_stop;
    std::unordered_map<uint16_t, std::function<void(Transport&, MessageLockIn)>> handlers;

    // Internal helper to dispatch messages to handlers
    void dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock);

    // Async worker cycle function
    void worker_cycle();

public:
    explicit Transport(std::unique_ptr<DuplexStream> stream);
    ~Transport();

    // Disable copy/assignment
    Transport(const Transport&) = delete;
    Transport& operator=(const Transport&) = delete;

    // Message operations
    MessageLockOut start_message(uint16_t header);
    void register_handler(uint16_t header, std::function<void(Transport&, MessageLockIn)> handler);
    void unregister_handler(uint16_t header);
    void clear_handlers();
    MessageLockIn await_message(uint16_t header);

    // Raw stream access
    StreamLock lock_stream();

    // Worker management
    void start_worker();
    void stop_worker();

    // Stream status
    bool is_open() const;
    void close();
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_H