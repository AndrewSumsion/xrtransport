#ifndef XRTRANSPORT_HANDLE_EXCHANGE_H
#define XRTRANSPORT_HANDLE_EXCHANGE_H

#include <stdint.h>

// fits an int fd on linux, or a HANDLE on win32
typedef uint32_t xrtp_Handle;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This interface is to be implemented by both client and server modules. Any auxiliary information
 * and/or connection must be created during the initialization of these modules, and these
 * functions are only to be used after initialization is complete. Other modules will depend on
 * these modules and will be placed in the same directory.
 * 
 * For example, for a Linux implementation, the server module will open a unix socket to send FDs
 * via SCM_RIGHTS, and the client will request the path to the socket, and both will establish the
 * connection.
 * 
 * For a Windows implementation, no auxiliary connection must be established, but the client must
 * tell the server its process ID so that the server can duplicate HANDLEs into the client
 * process's namespace.
 */
xrtp_Handle xrtp_read_handle();
void xrtp_write_handle(xrtp_Handle handle);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // XRTRANSPORT_HANDLE_EXCHANGE_H
