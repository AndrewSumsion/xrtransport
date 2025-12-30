#ifndef XRTRANSPORT_CLIENT_MODULE_INTERFACE_H
#define XRTRANSPORT_CLIENT_MODULE_INTERFACE_H

#include "module_types.h"

#include "xrtransport/api.h"

#include <openxr/openxr.h>

#include <stdint.h>

extern "C" {

/**
 * This is called by the runtime to fetch information about which extensions to advertise to the application,
 * and which functions to layer onto the function table.
 * 
 * Any new function you want to expose to an application *must* be included in a ModuleExtension. The runtime
 * tracks available functions based on which extensions the application has enabled.
 * 
 * Any function you wish to override must be provided as a ModuleLayerFunction, with the new_function and
 * an address to store the old_function, which the new_function may call to continue down the layers.
 * 
 * This function must return a pointer to a ModuleInfo struct that contains all of this. The ModuleInfo and
 * all data it references must have a static storage lifetime -- no attempt to clean it up will be made.
 */
XRTP_API_EXPORT void module_get_info(const ModuleInfo** info_out);

} // extern "C"

#endif // XRTRANSPORT_CLIENT_MODULE_INTERFACE_H