#ifndef XRTRANSPORT_CLIENT_MODULE_INTERFACE_H
#define XRTRANSPORT_CLIENT_MODULE_INTERFACE_H

#include "module_types.h"

#include "xrtransport/api.h"

#include <openxr/openxr.h>

#include <stdint.h>

extern "C" {

/**
 * This is called by the runtime to fetch information about which extensions to advertise to the application.
 * 
 * If the application selects one of the extensions specified here, all of the provided LayerFunctions will
 * be layered onto the runtime's dispatch table.
 * 
 * This function uses a two-call idiom: if extensions_out is null, just return the number that would be
 * returned so that the caller can allocate space and call again.
 */
XRTP_API_EXPORT void module_get_extensions(uint32_t* capacity_out, LayerExtension* extensions_out);

} // extern "C"

#endif // XRTRANSPORT_CLIENT_MODULE_INTERFACE_H