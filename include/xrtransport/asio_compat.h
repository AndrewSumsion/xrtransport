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

#include <asio.hpp>

#include <cstddef>
#include <functional>

namespace xrtransport {

// Base abstract class for all stream operations
class Stream {
public:
    virtual ~Stream() = default;

    // Stream state and control
    virtual bool is_open() const = 0;
    virtual void close() = 0;
    virtual void close(asio::error_code& ec) = 0;
};

// Base abstract class for synchronous stream operations
class SyncStream : virtual public Stream {
public:
    virtual ~SyncStream() = default;

    // Set or get non-blocking mode
    virtual void non_blocking(bool mode) = 0;
    virtual bool non_blocking() const = 0;
};

// Base abstract class for read operations with available() method
class ReadStream : virtual public Stream {
public:
    virtual ~ReadStream() = default;

    // Available data for reading
    virtual std::size_t available() = 0;
    virtual std::size_t available(asio::error_code& ec) = 0;
};

// Abstract class for synchronous read operations
class SyncReadStream : virtual public SyncStream, virtual public ReadStream {
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
class AsyncStream : virtual public Stream {
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
class AsyncReadStream : virtual public AsyncStream, virtual public ReadStream {
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

struct Acceptor {
    virtual ~Acceptor() = default;

    virtual std::unique_ptr<SyncDuplexStream> accept() = 0;
};

// Concrete templated implementations

// Concrete implementation of SyncStream
template<typename StreamType>
class SyncStreamImpl : public SyncStream {
private:
    StreamType stream_;

public:
    explicit SyncStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    void non_blocking(bool mode) override {
        stream_.non_blocking(mode);
    }

    bool non_blocking() const override {
        return stream_.non_blocking();
    }
};

// Concrete implementation of SyncReadStream
template<typename StreamType>
class SyncReadStreamImpl : public SyncReadStream {
private:
    StreamType stream_;

public:
    explicit SyncReadStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    void non_blocking(bool mode) override {
        stream_.non_blocking(mode);
    }

    bool non_blocking() const override {
        return stream_.non_blocking();
    }

    std::size_t available() override {
        return stream_.available();
    }

    std::size_t available(asio::error_code& ec) override {
        return stream_.available(ec);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers) override {
        return stream_.read_some(buffers);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) override {
        return stream_.read_some(buffers, ec);
    }
};

// Concrete implementation of SyncWriteStream
template<typename StreamType>
class SyncWriteStreamImpl : public SyncWriteStream {
private:
    StreamType stream_;

public:
    explicit SyncWriteStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    void non_blocking(bool mode) override {
        stream_.non_blocking(mode);
    }

    bool non_blocking() const override {
        return stream_.non_blocking();
    }

    std::size_t write_some(const asio::const_buffer& buffers) override {
        return stream_.write_some(buffers);
    }

    std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) override {
        return stream_.write_some(buffers, ec);
    }
};

// Concrete implementation of SyncDuplexStream
template<typename StreamType>
class SyncDuplexStreamImpl : public SyncDuplexStream {
private:
    StreamType stream_;

public:
    explicit SyncDuplexStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    void non_blocking(bool mode) override {
        stream_.non_blocking(mode);
    }

    bool non_blocking() const override {
        return stream_.non_blocking();
    }

    std::size_t available() override {
        return stream_.available();
    }

    std::size_t available(asio::error_code& ec) override {
        return stream_.available(ec);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers) override {
        return stream_.read_some(buffers);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) override {
        return stream_.read_some(buffers, ec);
    }

    std::size_t write_some(const asio::const_buffer& buffers) override {
        return stream_.write_some(buffers);
    }

    std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) override {
        return stream_.write_some(buffers, ec);
    }
};

// Concrete implementation of AsyncStream
template<typename StreamType>
class AsyncStreamImpl : public AsyncStream {
private:
    StreamType stream_;

public:
    explicit AsyncStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

protected:
    void async_wait_impl(asio::socket_base::wait_type wait_type, std::function<void(asio::error_code)> handler) override {
        stream_.async_wait(wait_type, std::move(handler));
    }
};

// Concrete implementation of AsyncReadStream
template<typename StreamType>
class AsyncReadStreamImpl : public AsyncReadStream {
private:
    StreamType stream_;

public:
    explicit AsyncReadStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    std::size_t available() override {
        return stream_.available();
    }

    std::size_t available(asio::error_code& ec) override {
        return stream_.available(ec);
    }

protected:
    void async_wait_impl(asio::socket_base::wait_type wait_type, std::function<void(asio::error_code)> handler) override {
        stream_.async_wait(wait_type, std::move(handler));
    }

    void async_read_some_impl(const asio::mutable_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) override {
        stream_.async_read_some(buffers, std::move(handler));
    }
};

// Concrete implementation of AsyncWriteStream
template<typename StreamType>
class AsyncWriteStreamImpl : public AsyncWriteStream {
private:
    StreamType stream_;

public:
    explicit AsyncWriteStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

protected:
    void async_wait_impl(asio::socket_base::wait_type wait_type, std::function<void(asio::error_code)> handler) override {
        stream_.async_wait(wait_type, std::move(handler));
    }

    void async_write_some_impl(const asio::const_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) override {
        stream_.async_write_some(buffers, std::move(handler));
    }
};

// Concrete implementation of AsyncDuplexStream
template<typename StreamType>
class AsyncDuplexStreamImpl : public AsyncDuplexStream {
private:
    StreamType stream_;

public:
    explicit AsyncDuplexStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    std::size_t available() override {
        return stream_.available();
    }

    std::size_t available(asio::error_code& ec) override {
        return stream_.available(ec);
    }

protected:
    void async_wait_impl(asio::socket_base::wait_type wait_type, std::function<void(asio::error_code)> handler) override {
        stream_.async_wait(wait_type, std::move(handler));
    }

    void async_read_some_impl(const asio::mutable_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) override {
        stream_.async_read_some(buffers, std::move(handler));
    }

    void async_write_some_impl(const asio::const_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) override {
        stream_.async_write_some(buffers, std::move(handler));
    }
};

// Concrete implementation of DuplexStream
template<typename StreamType>
class DuplexStreamImpl : public DuplexStream {
private:
    StreamType stream_;

public:
    explicit DuplexStreamImpl(StreamType stream) : stream_(std::move(stream)) {}

    bool is_open() const override {
        return stream_.is_open();
    }

    void close() override {
        stream_.close();
    }

    void close(asio::error_code& ec) override {
        stream_.close(ec);
    }

    void non_blocking(bool mode) override {
        stream_.non_blocking(mode);
    }

    bool non_blocking() const override {
        return stream_.non_blocking();
    }

    std::size_t available() override {
        return stream_.available();
    }

    std::size_t available(asio::error_code& ec) override {
        return stream_.available(ec);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers) override {
        return stream_.read_some(buffers);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) override {
        return stream_.read_some(buffers, ec);
    }

    std::size_t write_some(const asio::const_buffer& buffers) override {
        return stream_.write_some(buffers);
    }

    std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) override {
        return stream_.write_some(buffers, ec);
    }

protected:
    void async_wait_impl(asio::socket_base::wait_type wait_type, std::function<void(asio::error_code)> handler) override {
        stream_.async_wait(wait_type, std::move(handler));
    }

    void async_read_some_impl(const asio::mutable_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) override {
        stream_.async_read_some(buffers, std::move(handler));
    }

    void async_write_some_impl(const asio::const_buffer& buffers, std::function<void(asio::error_code, std::size_t)> handler) override {
        stream_.async_write_some(buffers, std::move(handler));
    }
};

template <typename AcceptorType, typename SocketType>
struct AcceptorImpl : public Acceptor {
private:
    std::reference_wrapper<asio::io_context> io_context;
    AcceptorType acceptor;

public:
    AcceptorImpl(asio::io_context& io_context, AcceptorType acceptor)
         : io_context(io_context), acceptor(std::move(acceptor))
    {}

    std::unique_ptr<SyncDuplexStream> accept() override {
        SocketType socket(io_context.get());
        acceptor.accept(socket);
        return std::make_unique<SyncDuplexStreamImpl<SocketType>>(std::move(socket));
    }
};

} // namespace xrtransport

#endif // XRTRANSPORT_ASIO_COMPAT_H