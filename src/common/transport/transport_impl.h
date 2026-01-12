#ifndef XRTRANSPORT_TRANSPORT_IMPL_H
#define XRTRANSPORT_TRANSPORT_IMPL_H

#include "xrtransport/asio_compat.h"
#include "xrtransport/transport/transport_c_api.h" // for xrtp_TransportStatus

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
#include <queue>

namespace xrtransport {

class TransportImpl;

struct MessageHeader {
    uint16_t header;
    uint16_t _padding;
    uint32_t size;
};
static_assert(sizeof(MessageHeader) == 8);

struct MessageIn {
    uint16_t header;

    // All the data read after the header
    // (payload does not include size, size is stored as an attribute of the vector)
    std::vector<uint8_t> payload;

    explicit MessageIn(uint16_t header, std::vector<uint8_t> payload)
        : header(header), payload(std::move(payload))
    {}
};

class ReceiveBuffer : public SyncReadStream {
public:
    explicit ReceiveBuffer(std::size_t size)
        : buffer_(size), read_head(0)
    {}

    explicit ReceiveBuffer(std::vector<uint8_t> buffer)
        : buffer_(std::move(buffer)), read_head(0)
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
    void close() override {}
    void close(asio::error_code& ec) override { ec.clear(); }

    const std::uint8_t* data() const { return buffer_.data(); }
    std::uint8_t* data() { return buffer_.data(); }
    std::size_t size() const { return buffer_.size(); }

    void clear() { buffer_.clear(); }

private:
    std::vector<std::uint8_t> buffer_;
};

// RAII stream lock classes forward declarations
struct [[nodiscard]] MessageLockInImpl;
struct [[nodiscard]] MessageLockOutImpl;
struct [[nodiscard]] MessageLockImpl;

// Transport class for message-based communication
class TransportImpl {
private:
    std::unique_ptr<SyncDuplexStream> stream;

    // Owning a lock on this means you are allowed to handle incoming messages and write messages to the stream
    std::recursive_mutex message_mutex;

    // Determines whether certain operations are allowed, and controls the stopping of the worker threads
    std::atomic<xrtp_TransportStatus> status;

    // this mutex protects access to the queue
    // additionally, this mutex mutually excludes any code that updates the status, and consumer code being
    // between a status check and a wait (using this mutex) to make sure that no consumer falls into a wait
    // after the status has been updated to closed
    std::mutex queue_mutex;
    std::condition_variable queue_cv;
    std::queue<MessageIn> queue;

    // semaphore of threads waiting for the message lock, so that the consumer thread can immediately release
    // it if anyone else is waiting for it
    std::mutex num_waiting_mutex;
    std::condition_variable num_waiting_cv;
    std::uint32_t num_waiting;

    std::thread producer_thread;
    std::thread consumer_thread;

    // protected by message_mutex
    std::unordered_map<uint16_t, std::function<void(MessageLockInImpl)>> handlers;

    // internal helper that will lock the message mutex at a higher priority than the consumer thread
    std::unique_lock<std::recursive_mutex> lock_message_mutex();

    // Internal helper to dispatch messages to handlers
    // message_mutex must be held
    void dispatch_to_handler(MessageIn msg_in);

    void producer_loop();
    void consumer_loop();

    // message_mutex must be held
    MessageIn await_any_message();

    friend class MessageLockOutImpl;
    void flush_to_stream(const void* data, std::size_t size);

    // updates the status to closed in a way that guarantees they will not get stuck in a wait
    void stop_threads();

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
    void handle_message(uint16_t header);

    // Pre-emptive locking of message mutex, useful for keeping a lock when locking in a loop.
    MessageLockImpl acquire_message_lock();

    // Start the internal producer and consumer threads. There is no fully synchronous mode,
    // you *must* call this before using the Transport. Make sure to register any handlers that
    // might be used immediately before calling this.
    void start();

    // close the writing end of the stream. messages can continue to be handled until the other
    // side shuts down
    void shutdown();

    // Allow the handlers to run and wait until the transport closes
    void join();

    xrtp_TransportStatus get_status();

    void close();
};

// RAII stream lock classes
struct [[nodiscard]] MessageLockInImpl {
public:
    std::unique_lock<std::recursive_mutex> lock;
    ReceiveBuffer buffer;

    MessageLockInImpl(std::vector<uint8_t> payload, std::unique_lock<std::recursive_mutex>&& lock)
        : buffer(std::move(payload)), lock(std::move(lock))
    {}

    MessageLockInImpl(const MessageLockInImpl&) = delete;
    MessageLockInImpl& operator=(const MessageLockInImpl&) = delete;
    MessageLockInImpl(MessageLockInImpl&&) = default;
    MessageLockInImpl& operator=(MessageLockInImpl&&) = default;
};

struct [[nodiscard]] MessageLockOutImpl {
private:
    TransportImpl* transport;
    MessageHeader header;
public:
    std::unique_lock<std::recursive_mutex> lock;
    SendBuffer buffer;

    MessageLockOutImpl(std::uint16_t header_code, std::unique_lock<std::recursive_mutex>&& lock, TransportImpl* transport)
        : lock(std::move(lock)), transport(transport), header({header_code, 0, 0}), buffer() {
        // save space for the header in the buffer
        asio::write(buffer, asio::buffer(&header, sizeof(MessageHeader)));
    }

    MessageLockOutImpl(const MessageLockOutImpl&) = delete;
    MessageLockOutImpl& operator=(const MessageLockOutImpl&) = delete;
    MessageLockOutImpl(MessageLockOutImpl&&) = default;
    MessageLockOutImpl& operator=(MessageLockOutImpl&&) = default;

    void flush() {
        if (buffer.size() == 0) return; // buffer was already flushed

        // overwrite header at beginning of buffer with updated size
        header.size = static_cast<std::uint32_t>(buffer.size() - sizeof(MessageHeader));
        std::memcpy(buffer.data(), &header, sizeof(MessageHeader));
        transport->flush_to_stream(buffer.data(), buffer.size());
        buffer.clear();
    }

    ~MessageLockOutImpl() {
        flush();
    }
};

struct [[nodiscard]] MessageLockImpl {
    std::unique_lock<std::recursive_mutex> lock;

    explicit MessageLockImpl(std::unique_lock<std::recursive_mutex>&& lock)
        : lock(std::move(lock))
    {}
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_IMPL_H