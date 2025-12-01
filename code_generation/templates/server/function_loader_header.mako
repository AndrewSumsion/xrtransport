<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("server/function_loader_header.mako")}

#ifndef XRTRANSPORT_FUNCTION_LOADER_H
#define XRTRANSPORT_FUNCTION_LOADER_H

#include "openxr/openxr.h"

#include <stdexcept>

namespace xrtransport {

class FunctionLoaderException : public std::runtime_error {
public:
    explicit FunctionLoaderException(const std::string& message) : std::runtime_error(message) {}
};

// Used by ensure_function_loaded to load XR functions
// Starts as XR_NULL_HANDLE but must be set once an instance is created
// so that it can be used to fetch functions.
extern XrInstance loader_instance;

<%utils:for_grouped_functions args="function">
extern PFN_${function.name} pfn_${function.name};
</%utils:for_grouped_functions>

void ensure_function_loaded(const char* name, PFN_xrVoidFunction* function);

} // namespace xrtransport

#endif // XRTRANSPORT_FUNCTION_LOADER_H