#ifndef XRTRANSPORT_MODULE_INTERFACE_H
#define XRTRANSPORT_MODULE_INTERFACE_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"
#include "openxr/openxr.h"

#include <cstdint>

#ifdef _WIN32
// this header is only used by modules exporting the symbols
#define XRTP_MODULE_API __declspec(dllexport)
#else
#define XRTP_MODULE_API
#endif

extern "C" {

/**
 * Called immediately after module is loaded, before connection handshake.
 * Can be used to register handlers on the transport or proactively load XR functions.
 */
XRTP_MODULE_API void on_init(xrtransport::Transport* transport, xrtransport::FunctionLoader* function_loader);

/**
 * Mechanism used by the server to know what extensions to request when creating the runtime.
 * 
 * Uses a double-call idiom:
 * Call first will null extensions_out to know how much space to allocate via num_extensions_out.
 * Then call again to populate strings via extensions_out.
 */
XRTP_MODULE_API void get_required_extensions(std::uint32_t* num_extensions_out, const char** extensions_out);

/**
 * Called immediately after the xrCreateInstance call completes.
 * Can be used to load functions that require an XrInstance to be loaded.
 */
XRTP_MODULE_API void on_instance(xrtransport::Transport* transport, xrtransport::FunctionLoader* function_loader, XrInstance instance);

/**
 * Called immediately before module is unloaded.
 */
XRTP_MODULE_API void on_shutdown();

}

#endif // XRTRANSPORT_MODULE_INTERFACE_H