#ifndef XRTRANSPORT_ASIO_COMPAT_H
#define XRTRANSPORT_ASIO_COMPAT_H

/*
 * ASIO Compatibility Layer
 *
 * This file provides a compatibility layer between ASIO's template-based approach
 * and an object-oriented approach. It defines abstract base classes that mirror
 * ASIO's stream concepts (ReadableStream, WritableStream, etc.) while providing
 * a virtual interface that can be implemented by concrete stream types.
 *
 * This allows for polymorphic use of different stream types (sockets, buffers,
 * files, etc.) without requiring template instantiation at every call site.
 */

#define ASIO_STANDALONE
#include "asio/buffer.hpp"
#include "asio/error_code.hpp"
#include "asio/socket_base.hpp"

#include <cstddef>
#include <functional>

namespace xrtransport {

// Base abstract class for synchronous stream operations
class SyncStream {
public:
    virtual ~SyncStream() = default;

    // Set or get blocking mode
    virtual void blocking_mode(bool mode) = 0;
    virtual bool blocking_mode() const = 0;

    virtual std::size_t available() = 0;
    virtual std::size_t available(asio::error_code& ec) = 0;
};

// Abstract class for synchronous read operations
class SyncReadStream : virtual public SyncStream {
public:
    virtual ~SyncReadStream() = default;

    // Read some data from the stream
    virtual std::size_t read_some(const asio::mutable_buffer& buffers) = 0;
    virtual std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) = 0;

    // Template convenience methods for ASIO compatibility
    template<typename MutableBufferSequence>
    std::size_t read_some(const MutableBufferSequence& buffers) {
        return read_some(asio::mutable_buffer(buffers));
    }

    template<typename MutableBufferSequence>
    std::size_t read_some(const MutableBufferSequence& buffers, asio::error_code& ec) {
        return read_some(asio::mutable_buffer(buffers), ec);
    }
};

// Abstract class for synchronous write operations
class SyncWriteStream : virtual public SyncStream {
public:
    virtual ~SyncWriteStream() = default;

    // Write some data to the stream
    virtual std::size_t write_some(const asio::const_buffer& buffers) = 0;
    virtual std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) = 0;

    // Template convenience methods for ASIO compatibility
    template<typename ConstBufferSequence>
    std::size_t write_some(const ConstBufferSequence& buffers) {
        return write_some(asio::const_buffer(buffers));
    }

    template<typename ConstBufferSequence>
    std::size_t write_some(const ConstBufferSequence& buffers, asio::error_code& ec) {
        return write_some(asio::const_buffer(buffers), ec);
    }
};

// Abstract class for synchronous read/write operations
class SyncDuplexStream : public SyncReadStream, public SyncWriteStream {
public:
    virtual ~SyncDuplexStream() = default;
};

// Base abstract class for asynchronous stream operations
class AsyncStream {
public:
    virtual ~AsyncStream() = default;

    // ASIO-compatible async_wait for readiness notification
    template<typename WaitHandler>
    void async_wait(asio::socket_base::wait_type wait_type, WaitHandler&& handler) {
        async_wait_impl(wait_type, std::forward<WaitHandler>(handler));
    }

protected:
    virtual void async_wait_impl(asio::socket_base::wait_type wait_type, std::function<void(asio::error_code)> handler) = 0;
};

// Abstract class for asynchronous read operations
class AsyncReadStream : virtual public AsyncStream {
public:
    virtual ~AsyncReadStream() = default;

    // Async read some data from the stream
    template<typename MutableBufferSequence, typename ReadHandler>
    void async_read_some(const MutableBufferSequence& buffers, ReadHandler&& handler) {
        async_read_some_impl(asio::mutable_buffer(buffers), std::forward<ReadHandler>(handler));
    }

protected:
    virtual void async_read_some_impl(const asio::mutable_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) = 0;
};

// Abstract class for asynchronous write operations
class AsyncWriteStream : virtual public AsyncStream {
public:
    virtual ~AsyncWriteStream() = default;

    // Async write some data to the stream
    template<typename ConstBufferSequence, typename WriteHandler>
    void async_write_some(const ConstBufferSequence& buffers, WriteHandler&& handler) {
        async_write_some_impl(asio::const_buffer(buffers), std::forward<WriteHandler>(handler));
    }

protected:
    virtual void async_write_some_impl(const asio::const_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) = 0;
};

// Abstract class for asynchronous read/write operations
class AsyncDuplexStream : public AsyncReadStream, public AsyncWriteStream {
public:
    virtual ~AsyncDuplexStream() = default;
};

// Abstract class for full duplex operations (both sync and async)
class DuplexStream : public SyncDuplexStream, public AsyncDuplexStream {
public:
    virtual ~DuplexStream() = default;
};

// Legacy type aliases for backward compatibility
using NonBlockingStream = SyncStream;
using ReadStream = SyncReadStream;
using WriteStream = SyncWriteStream;
using ReadWriteStream = SyncDuplexStream;

} // namespace xrtransport

#endif // XRTRANSPORT_ASIO_COMPAT_H