#ifndef XRTRANSPORT_TRANSPORT_IMPL_H
#define XRTRANSPORT_TRANSPORT_IMPL_H

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

namespace xrtransport {

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
struct [[nodiscard]] MessageLockInImpl {
    std::unique_lock<std::recursive_mutex> lock;
    SyncReadStream* stream;

    MessageLockInImpl(std::unique_lock<std::recursive_mutex>&& lock, SyncReadStream& stream)
        : lock(std::move(lock)), stream(&stream) {}

    MessageLockInImpl(const MessageLockInImpl&) = delete;
    MessageLockInImpl& operator=(const MessageLockInImpl&) = delete;
    MessageLockInImpl(MessageLockInImpl&&) = default;
    MessageLockInImpl& operator=(MessageLockInImpl&&) = default;
};

struct [[nodiscard]] MessageLockOutImpl {
private:
    SyncWriteStream* stream;
public:
    std::unique_lock<std::recursive_mutex> lock;
    SendBuffer buffer;

    MessageLockOutImpl(std::uint16_t header, std::unique_lock<std::recursive_mutex>&& lock, SyncWriteStream& stream)
        : lock(std::move(lock)), stream(&stream), buffer() {
        // write header to buffer
        asio::write(stream, asio::buffer(reinterpret_cast<std::uint8_t*>(&header), sizeof(std::uint16_t)));
    }

    MessageLockOutImpl(const MessageLockOutImpl&) = delete;
    MessageLockOutImpl& operator=(const MessageLockOutImpl&) = delete;
    MessageLockOutImpl(MessageLockOutImpl&&) = default;
    MessageLockOutImpl& operator=(MessageLockOutImpl&&) = default;

    void flush() {
        asio::write(*stream, asio::buffer(buffer.data()));
        buffer.clear();
    }

    ~MessageLockOutImpl() {
        flush();
    }
};

// Lock class for raw stream access
struct [[nodiscard]] StreamLockImpl {
    std::unique_lock<std::recursive_mutex> lock;
    SyncDuplexStream* stream;

    StreamLockImpl(std::unique_lock<std::recursive_mutex>&& lock, SyncDuplexStream& stream)
        : lock(std::move(lock)), stream(&stream) {}

    StreamLockImpl(const StreamLockImpl&) = delete;
    StreamLockImpl& operator=(const StreamLockImpl&) = delete;
    StreamLockImpl(StreamLockImpl&&) = default;
    StreamLockImpl& operator=(StreamLockImpl&&) = default;
};

// Transport class for message-based communication
class TransportImpl {
private:
    std::unique_ptr<SyncDuplexStream> stream;
    mutable std::recursive_mutex stream_mutex;
    std::atomic<bool> should_stop;
    std::atomic<bool> worker_running;
    std::thread worker_thread;

    std::unordered_map<uint16_t, std::function<void(MessageLockInImpl)>> handlers;

    // Internal helper to dispatch messages to handlers
    void dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock);

    // throwing helper method
    void run_once_internal();

public:
    explicit TransportImpl(std::unique_ptr<SyncDuplexStream> stream);
    ~TransportImpl();

    // Disable copy/assignment
    TransportImpl(const TransportImpl&) = delete;
    TransportImpl& operator=(const TransportImpl&) = delete;

    // Message operations
    MessageLockOutImpl start_message(uint16_t header);
    void register_handler(uint16_t header, std::function<void(MessageLockInImpl)> handler);
    void unregister_handler(uint16_t header);
    void clear_handlers();
    MessageLockInImpl await_message(uint16_t header);

    // Raw stream access
    StreamLockImpl lock_stream();

    // Worker management
    void run(bool synchronous);
    void run_once();
    void stop();

    // Stream status
    bool is_open() const;
    void close();
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_IMPL_H