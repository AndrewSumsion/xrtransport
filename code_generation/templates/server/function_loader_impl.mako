<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("server/function_loader_impl.mako")}

#include "function_loader.h"

#include "openxr/openxr.h"

#include <string>

namespace xrtransport {

XrInstance loader_instance = XR_NULL_HANDLE;

<%utils:for_grouped_functions args="function">
PFN_${function.name} pfn_${function.name} = nullptr;
</%utils:for_grouped_functions>

void ensure_function_loaded(const char* name, PFN_xrVoidFunction* function) {
    if (*function != nullptr) {
        // function is already loaded, do nothing
        return;
    }

    XrResult result = xrGetInstanceProcAddr(loader_instance, name, function);

    if (!XR_SUCCEEDED(result)) {
        throw FunctionLoaderException("xrGetInstanceProcAddr for " + std::string(name) + " returned an error: " + std::to_string(result));
    }
}

} // namespace xrtransport