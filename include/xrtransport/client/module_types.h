#ifndef XRTRANSPORT_CLIENT_MODULE_TYPES_H
#define XRTRANSPORT_CLIENT_MODULE_TYPES_H

#include <openxr/openxr.h>

#include <stdint.h>

/**
 * Contains information about how to layer a function onto the dispatch table.
 * When the specified function is applied, the existing value in the table will be
 * written into *old_function, and new_function will replace it in the dispatch table.
 */
struct LayerFunction {
    const char* function_name;
    PFN_xrVoidFunction new_function;
    PFN_xrVoidFunction* old_function;
};

/**
 * Represents an extension that a module supports. Will be advertised to applications
 * if returned by a module. If that extension is selected, all of the layer functions
 * will be applied.
 */
struct LayerExtension {
    const char* extension_name;
    uint32_t extension_version;
    uint32_t num_functions;
    const LayerFunction* functions;
};

#endif // XRTRANSPORT_CLIENT_MODULE_TYPES_H