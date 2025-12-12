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
#include <queue>

namespace xrtransport {

/**
 * Mutex wrapper with a mechanism for explicit handoff between threads
 * 
 * If the owning thread wants to make sure that another thread gets the lock when it releases, it should do this:
 * mutex.transfer(other_thread_id);
 * mutex.unlock();
 * 
 * No other thread will be able to lock the mutex until the target thread locks it and implicitly resets the target thread id.
 */
template <typename _Mutex>
class TransferrableMutex {
private:
    _Mutex mutex;
    std::thread::id dest;
    std::mutex dest_mutex;
    std::condition_variable dest_changed;

    // dest_mutex must be locked before calling
    bool lockable() noexcept {
        return dest == std::thread::id() || dest == std::this_thread::get_id();
    }

public:
    void lock() {
        {
            std::unique_lock<std::mutex> lock(dest_mutex);
            if (!lockable()) {
                dest_changed.wait(lock, [&]{ return lockable(); });
            }
            mutex.lock();
            // lock was acquired, so reset the transfer destination
            dest = std::thread::id();
        }
        // notify other threads that dest changed
        dest_changed.notify_all();
    }

    bool try_lock() noexcept {
        {
            std::lock_guard<std::mutex> lock(dest_mutex);
            if (!lockable()) return false;
            if (!mutex.try_lock()) return false;
            // lock was acquired, so reset the transfer destination
            dest = std::thread::id();
        }
        // notify other threads that dest changed
        dest_changed.notify_all();
        return true;
    }

    void unlock() {
        mutex.unlock();
    }

    void transfer(std::thread::id destination) {
        {
            std::lock_guard<std::mutex> lock(dest_mutex);
            dest = destination;
        }
        dest_changed.notify_all();
    }
};

using TransportMutex = TransferrableMutex<std::recursive_mutex>;

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
    std::unique_lock<TransportMutex> lock;
    SyncReadStream* stream;

    MessageLockInImpl(std::unique_lock<TransportMutex> lock, SyncReadStream& stream)
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
    std::unique_lock<TransportMutex> lock;
    SendBuffer buffer;

    MessageLockOutImpl(std::uint16_t header, std::unique_lock<TransportMutex> lock, SyncWriteStream& stream)
        : lock(std::move(lock)), stream(&stream), buffer() {
        // write header to buffer
        asio::write(stream, asio::buffer(&header, sizeof(std::uint16_t)));
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
    std::unique_lock<TransportMutex> lock;
    SyncDuplexStream* stream;

    StreamLockImpl(std::unique_lock<TransportMutex> lock, SyncDuplexStream& stream)
        : lock(std::move(lock)), stream(&stream) {}

    StreamLockImpl(const StreamLockImpl&) = delete;
    StreamLockImpl& operator=(const StreamLockImpl&) = delete;
    StreamLockImpl(StreamLockImpl&&) = default;
    StreamLockImpl& operator=(StreamLockImpl&&) = default;
};

// Transport class for message-based communication
class TransportImpl {
private:
    std::unique_ptr<DuplexStream> stream;
    mutable TransportMutex stream_mutex;
    std::thread worker_thread;
    std::atomic<bool> should_stop;
    std::atomic<bool> worker_running;
    std::unordered_map<uint16_t, std::function<void(MessageLockInImpl)>> handlers;
    std::unordered_map<uint16_t, std::queue<std::pair<std::thread::id, std::promise<MessageLockInImpl>>>> awaiters;

public:
    explicit TransportImpl(std::unique_ptr<DuplexStream> stream);
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
    void stop();

    // Stream status
    bool is_open() const;
    void close();
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_IMPL_H