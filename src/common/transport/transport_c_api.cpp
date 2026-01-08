#include "xrtransport/transport/transport_c_api.h"

#include "xrtransport/transport/error.h"

#include "transport_impl.h"

#include <spdlog/spdlog.h>

#include <memory>
#include <system_error>

using namespace xrtransport;

// helper macros for stringifying the line number
#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define FILE_AND_LINE __FILE__ ":" STR(__LINE__)

#define XRTP_TRY try
#define XRTP_CATCH_HANDLER \
catch (const TransportException& e) { \
    spdlog::error("TransportException in " FILE_AND_LINE ": {}", e.what()); \
    return -1; \
} \
catch (const std::system_error& e) { \
    spdlog::error("system_error in " FILE_AND_LINE ": {}", e.what()); \
    return (xrtp_Result) e.code().value(); \
} \
catch (...) { \
    spdlog::error("unexpected error in " FILE_AND_LINE); \
    return -1; \
}

xrtp_Result xrtp_transport_create(
    void* sync_duplex_stream,
    xrtp_Transport* transport_out)
XRTP_TRY
{
    // unique_ptr takes ownership of duplex_stream
    std::unique_ptr<SyncDuplexStream> p_duplex_stream(reinterpret_cast<SyncDuplexStream*>(sync_duplex_stream));
    TransportImpl* transport = new TransportImpl(std::move(p_duplex_stream));
    *transport_out = reinterpret_cast<xrtp_Transport>(transport);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_transport_start(
    xrtp_Transport transport)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->start();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_transport_release(
    xrtp_Transport transport)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    delete transport_impl;
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_start_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockOut* msg_out)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    auto msg_out_impl = transport_impl->start_message(header);
    auto p_msg_out_impl = new MessageLockOutImpl(std::move(msg_out_impl)); // move onto heap
    *msg_out = reinterpret_cast<xrtp_MessageLockOut>(p_msg_out_impl);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_register_handler(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    void (*handler)(xrtp_MessageLockIn, void*),
    void* handler_data)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    auto handler_func = [handler, handler_data](MessageLockInImpl msg_in_impl) {
        // move onto heap so that handler can clean it up (via delete) before returning
        MessageLockInImpl* msg_in_impl_heap = new MessageLockInImpl(std::move(msg_in_impl));
        xrtp_MessageLockIn msg_in = reinterpret_cast<xrtp_MessageLockIn>(msg_in_impl_heap);
        handler(msg_in, handler_data);
        // handler is required to have called xrtp_msg_in_release before it finishes,
        // which has the corresponding `delete` to the above `new`
    };
    transport_impl->register_handler(header, handler_func);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_unregister_handler(
    xrtp_Transport transport,
    xrtp_MessageHeader header)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->unregister_handler(header);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_clear_handlers(
    xrtp_Transport transport)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->clear_handlers();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_await_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockIn* msg_in)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    auto msg_in_impl = transport_impl->await_message(header);
    auto p_msg_in_impl = new MessageLockInImpl(std::move(msg_in_impl)); // move onto heap
    *msg_in = reinterpret_cast<xrtp_MessageLockIn>(p_msg_in_impl);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_handle_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->handle_message(header);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_lock_acquire(
    xrtp_Transport transport,
    xrtp_MessageLock* lock)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    auto lock_impl = transport_impl->acquire_message_lock();
    auto p_lock_impl = new MessageLockImpl(std::move(lock_impl)); // move onto heap
    *lock = reinterpret_cast<xrtp_MessageLock>(p_lock_impl);
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_transport_get_status(
    xrtp_Transport transport,
    xrtp_TransportStatus* status)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    *status = transport_impl->get_status();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_transport_shutdown(
    xrtp_Transport transport)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->shutdown();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_transport_join(
    xrtp_Transport transport)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->join();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_transport_close(
    xrtp_Transport transport)
XRTP_TRY
{
    auto transport_impl = reinterpret_cast<TransportImpl*>(transport);
    transport_impl->close();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_in_read_some(
    xrtp_MessageLockIn msg_in,
    void* dst,
    uint64_t size,
    uint64_t* size_read)
XRTP_TRY
{
    auto msg_in_impl = reinterpret_cast<MessageLockInImpl*>(msg_in);
    *size_read = msg_in_impl->buffer.read_some(asio::buffer(dst, size));
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_in_release(
    xrtp_MessageLockIn msg_in)
XRTP_TRY
{
    auto msg_in_impl = reinterpret_cast<MessageLockInImpl*>(msg_in);
    delete msg_in_impl;
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_out_write_some(
    xrtp_MessageLockOut msg_out,
    const void* src,
    uint64_t size,
    uint64_t* size_written)
XRTP_TRY
{
    auto msg_out_impl = reinterpret_cast<MessageLockOutImpl*>(msg_out);
    *size_written = msg_out_impl->buffer.write_some(asio::buffer(src, size));
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_out_flush(
    xrtp_MessageLockOut msg_out)
XRTP_TRY
{
    auto msg_out_impl = reinterpret_cast<MessageLockOutImpl*>(msg_out);
    msg_out_impl->flush();
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_out_release(
    xrtp_MessageLockOut msg_out)
XRTP_TRY
{
    auto msg_out_impl = reinterpret_cast<MessageLockOutImpl*>(msg_out);
    delete msg_out_impl;
    return 0;
}
XRTP_CATCH_HANDLER

xrtp_Result xrtp_msg_lock_release(
    xrtp_MessageLock lock)
XRTP_TRY
{
    auto lock_impl = reinterpret_cast<MessageLockImpl*>(lock);
    delete lock_impl;
    return 0;
}
XRTP_CATCH_HANDLER