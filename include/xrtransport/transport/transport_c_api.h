// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_TRANSPORT_C_API_H
#define XRTRANSPORT_TRANSPORT_C_API_H

#include "xrtransport/api.h"

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// opaque types
typedef struct xrtp_Transport_T xrtp_Transport_T;
typedef struct xrtp_MessageLockOut_T xrtp_MessageLockOut_T;
typedef struct xrtp_MessageLockIn_T xrtp_MessageLockIn_T;
typedef struct xrtp_MessageLock_T xrtp_MessageLock_T;

typedef xrtp_Transport_T* xrtp_Transport;
typedef xrtp_MessageLockOut_T* xrtp_MessageLockOut;
typedef xrtp_MessageLockIn_T* xrtp_MessageLockIn;
typedef xrtp_MessageLock_T* xrtp_MessageLock;

// message headers
typedef uint16_t xrtp_MessageHeader;
#define XRTP_MSG_FUNCTION_CALL 1
#define XRTP_MSG_FUNCTION_RETURN 2
#define XRTP_MSG_SYNCHRONIZATION_REQUEST 3
#define XRTP_MSG_SYNCHRONIZATION_RESPONSE 4
#define XRTP_MSG_POLL_EVENT 5
#define XRTP_MSG_POLL_EVENT_RETURN 6
#define XRTP_MSG_SHUTDOWN 99
#define XRTP_MSG_CUSTOM_BASE 100

// transport status
typedef enum xrtp_TransportStatus {
    // Just created and not yet useable.
    // You should register handlers and call start
    XRTP_STATUS_CREATED,

    // Started, reading from the stream and handling messages
    XRTP_STATUS_OPEN,

    // Shutdown initiated
    // Writes have been disabled and peer can handle pending messages.
    // Once the peer has finished, the transport will be closed.
    XRTP_STATUS_WRITE_CLOSED,

    // Worker threads have stopped, and the underlying stream has been closed
    XRTP_STATUS_CLOSED
} xrtp_TransportStatus;

// protocol values
#define XRTRANSPORT_PROTOCOL_VERSION 1
#define XRTRANSPORT_MAGIC 0x50545258 // "XRTP" as a little-endian uint32_t

typedef int32_t xrtp_Result;

/**
 * Must be called with a class that implements SyncDuplexStream from asio_compat.h
 * This function takes memory ownership of the SyncDuplexStream.
 * 
 * The transport will start reading the stream immediately.
 */
XRTP_API xrtp_Result xrtp_transport_create(
    void* sync_duplex_stream,
    xrtp_Transport* transport_out);

/**
 * Start the transport reading and handling messages. The transport is mostly
 * unusable before this, aside from handler management.
 * 
 * Handlers that are needed immediately should be called before this.
 */
XRTP_API xrtp_Result xrtp_transport_start(
    xrtp_Transport transport);

/**
 * Destruct the Transport instance
 * 
 * This will stop the transport's producer and consumer threads, and
 * interrupt any calls awaiting a message
 */
XRTP_API xrtp_Result xrtp_transport_release(
    xrtp_Transport transport);

/**
 * Acquires the Transport's message lock, and returns a buffer that can be
 * written to.
 * 
 * msg_out *must* be released.
 */
XRTP_API xrtp_Result xrtp_start_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockOut* msg_out);

/**
 * Sets the handler for the given message header.
 * 
 * The xrtp_MessageLockIn *must* be released by the handler before finishing
 */
XRTP_API xrtp_Result xrtp_register_handler(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    void (*handler)(xrtp_MessageLockIn, void*),
    void* handler_data);

/**
 * Unsets the handler for the given message header
 */
XRTP_API xrtp_Result xrtp_unregister_handler(
    xrtp_Transport transport,
    xrtp_MessageHeader header);

/**
 * Clears all handlers in the Transport
 */
XRTP_API xrtp_Result xrtp_clear_handlers(
    xrtp_Transport transport);

/**
 * Acquires Transport's message lock and handles messages synchronously
 * until the requested header is detected.
 * 
 * msg_in can be read from and *must* be released.
 */
XRTP_API xrtp_Result xrtp_await_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockIn* msg_in);

/**
 * Similar to xrtp_await_message, but handles the requested message using
 * a registered handler instead of exposing a MessageLockIn.
 */
XRTP_API xrtp_Result xrtp_handle_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header);

/**
 * Acquires the Transport's message lock without any input/output buffers
 * 
 * This is useful for e.g. maintaining the lock while repeatedly locking and
 * unlocking in a loop.
 * 
 * The lock *must* be released.
 */
XRTP_API xrtp_Result xrtp_msg_lock_acquire(
    xrtp_Transport transport,
    xrtp_MessageLock* lock);

/**
 * Returns the current status of the Transport.
 */
XRTP_API xrtp_Result xrtp_transport_get_status(
    xrtp_Transport transport,
    xrtp_TransportStatus* status);

/**
 * Initiates a graceful shutdown of the Transport. Allows the peer to handle
 * the rest of the pending message, and prevents writes until all messages
 * from the peer have been handled, and finally closes the connection.
 */
XRTP_API xrtp_Result xrtp_transport_shutdown(
    xrtp_Transport transport);

/**
 * Allows the handlers to run and waits for the transport to close
 */
XRTP_API xrtp_Result xrtp_transport_join(
    xrtp_Transport transport);

/**
 * Stops the Transport and closes the underlying stream.
 */
XRTP_API xrtp_Result xrtp_transport_close(
    xrtp_Transport transport);

/**
 * Reads some of the MessageLockIn's buffered data
 */
XRTP_API xrtp_Result xrtp_msg_in_read_some(
    xrtp_MessageLockIn msg_in,
    void* dst,
    uint64_t size,
    uint64_t* size_read);

/**
 * Releases the message lock and destructs the MessageLockIn
 */
XRTP_API xrtp_Result xrtp_msg_in_release(
    xrtp_MessageLockIn msg_in);

/**
 * Writes to the MessageLockOut's outbound buffer
 */
XRTP_API xrtp_Result xrtp_msg_out_write_some(
    xrtp_MessageLockOut msg_out,
    const void* src,
    uint64_t size,
    uint64_t* size_written);

/**
 * Writes the MessageLockOut's outbound buffer to the stream
 */
XRTP_API xrtp_Result xrtp_msg_out_flush(
    xrtp_MessageLockOut msg_out);

/**
 * Flushes the MessageLockOut's buffer, releases the message lock,
 * and destructs the MessageLockOut
 */
XRTP_API xrtp_Result xrtp_msg_out_release(
    xrtp_MessageLockOut msg_out);

/**
 * Releases the message lock acquired by xrtp_msg_lock_acquire
 */
XRTP_API xrtp_Result xrtp_msg_lock_release(
    xrtp_MessageLock lock);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // XRTRANSPORT_TRANSPORT_C_API_H