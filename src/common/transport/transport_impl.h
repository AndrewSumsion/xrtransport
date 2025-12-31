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

class ReceiveBuffer : public SyncReadStream {
public:
    explicit ReceiveBuffer(std::size_t size)
        : buffer_(size), read_head(0)
    {}

    std::size_t read_some(const asio::mutable_buffer& buffer, asio::error_code& ec) override {
        ec.clear();
        if (buffer_.size() - read_head == 0) {
            ec = asio::error::eof;
            return 0;
        }
        std::uint8_t* dest = static_cast<std::uint8_t*>(buffer.data());
        std::size_t size = std::min(buffer.size(), buffer_.size() - read_head);
        std::memcpy(buffer.data(), buffer_.data() + read_head, size);
        read_head += size;

        return size;
    }

    std::size_t read_some(const asio::mutable_buffer& buffer) override {
        asio::error_code ec;
        auto n = read_some(buffer, ec);
        if (ec) throw asio::system_error(ec);
        return n;
    }

    std::size_t available(asio::error_code& ec) override {
        ec.clear();
        return buffer_.size() - read_head;
    }

    std::size_t available() override {
        return buffer_.size() - read_head;
    }

    // No-ops
    void non_blocking(bool mode) override {}
    bool non_blocking() const override { return false; }
    bool is_open() const override { return true; }
    void close() override {}
    void close(asio::error_code& ec) override { ec.clear(); }

    const std::uint8_t* data() const { return buffer_.data(); }
    std::uint8_t* data() { return buffer_.data(); }
    std::size_t size() const { return buffer_.size(); }

private:
    std::size_t read_head;
    std::vector<std::uint8_t> buffer_;
};

class SendBuffer : public SyncWriteStream {
public:
    std::size_t write_some(const asio::const_buffer& buffer, asio::error_code& ec) override {
        ec.clear();
        std::size_t total = 0;
        const std::uint8_t* data = static_cast<const std::uint8_t*>(buffer.data());
        std::size_t size = buffer.size();
        buffer_.insert(buffer_.end(), data, data + size);
        total += size;
        return total;
    }

    std::size_t write_some(const asio::const_buffer& buffer) override {
        asio::error_code ec;
        auto n = write_some(buffer, ec);
        if (ec) throw asio::system_error(ec);
        return n;
    }

    // No-ops
    void non_blocking(bool mode) override {}
    bool non_blocking() const override { return false; }
    bool is_open() const override { return true; }
    void close() override {}
    void close(asio::error_code& ec) override { ec.clear(); }

    const std::uint8_t* data() const { return buffer_.data(); }
    std::uint8_t* data() { return buffer_.data(); }
    std::size_t size() const { return buffer_.size(); }

    void clear() { buffer_.clear(); }

private:
    std::vector<std::uint8_t> buffer_;
};

// RAII stream lock classes
struct [[nodiscard]] MessageLockInImpl {
private:
    SyncReadStream* stream;
public:
    std::unique_lock<std::recursive_mutex> lock;
    ReceiveBuffer buffer;

    MessageLockInImpl(std::size_t size, std::unique_lock<std::recursive_mutex>&& lock, SyncReadStream& stream)
        : lock(std::move(lock)), stream(&stream), buffer(size)
    {
        // read message contents in
        asio::read(stream, asio::buffer(buffer.data(), buffer.size()));
    }

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
        asio::write(buffer, asio::buffer(&header, sizeof(std::uint16_t)));
        std::uint8_t placeholder[6]{}; // 2 bytes of padding + 4 byte size
        asio::write(buffer, asio::buffer(placeholder, sizeof(placeholder)));
    }

    MessageLockOutImpl(const MessageLockOutImpl&) = delete;
    MessageLockOutImpl& operator=(const MessageLockOutImpl&) = delete;
    MessageLockOutImpl(MessageLockOutImpl&&) = default;
    MessageLockOutImpl& operator=(MessageLockOutImpl&&) = default;

    void flush() {
        if (buffer.size() == 0) return; // buffer was already flushed

        // copy buffer size onto reserved slot, -8 to account for header, padding, and size
        std::uint32_t size = static_cast<std::uint32_t>(buffer.size()) - 8;
        std::memcpy(buffer.data() + 4, &size, 4);
        asio::write(*stream, asio::buffer(buffer.data(), buffer.size()));
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
    void dispatch_to_handler(uint16_t header, uint32_t size, std::unique_lock<std::recursive_mutex>&& lock);

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