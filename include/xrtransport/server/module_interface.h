#ifndef XRTRANSPORT_SERVER_MODULE_INTERFACE_H
#define XRTRANSPORT_SERVER_MODULE_INTERFACE_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"
#include "xrtransport/api.h"
#include "openxr/openxr.h"

#include <cstdint>

extern "C" {

/**
 * Called immediately after module is loaded, before connection handshake.
 * Can be used to register handlers on the transport or proactively load XR functions.
 * Return false to disable the module, usually if a necessary extension isn't present.
 */
XRTP_API_EXPORT bool xrtp_on_init(
    xrtp_Transport transport,
    xrtransport::FunctionLoader* function_loader,
    std::uint32_t num_extensions,
    const XrExtensionProperties* extensions);

/**
 * Mechanism used by the server to know what extensions to request when creating the runtime.
 * 
 * Uses a double-call idiom:
 * Call first will null extensions_out to know how much space to allocate via num_extensions_out.
 * Then call again to populate strings via extensions_out.
 */
XRTP_API_EXPORT void xrtp_get_required_extensions(
    std::uint32_t* num_extensions_out,
    const char** extensions_out);

/**
 * Called immediately after the xrCreateInstance call completes.
 * Can be used to load functions that require an XrInstance to be loaded.
 */
XRTP_API_EXPORT void xrtp_on_instance(
    xrtp_Transport transport,
    xrtransport::FunctionLoader* function_loader,
    XrInstance instance);

/**
 * Called immediately before the xrDestroyInstance call completes.
 * Should be used to clean up any instance-specific state, as many instances could be created and
 * destroyed over the lifetime of the server.
 */
XRTP_API_EXPORT void xrtp_on_instance_destroy();

/**
 * Called immediately before module is unloaded.
 */
XRTP_API_EXPORT void xrtp_on_shutdown();

}

#endif // XRTRANSPORT_SERVER_MODULE_INTERFACE_H