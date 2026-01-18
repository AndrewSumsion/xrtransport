<%namespace name="utils" file="utils.mako"/>\
#ifndef XRTRANSPORT_FUNCTION_LOADER_H
#define XRTRANSPORT_FUNCTION_LOADER_H

#include "openxr/openxr.h"

#include <stdexcept>
#include <string>

namespace xrtransport {

class FunctionLoaderException : public std::runtime_error {
public:
    explicit FunctionLoaderException(const std::string& message) : std::runtime_error(message) {}
};

class FunctionLoader {
public:
    explicit FunctionLoader(PFN_xrGetInstanceProcAddr pfn_xrGetInstanceProcAddr) :
        loader_instance(XR_NULL_HANDLE),
        GetInstanceProcAddr(pfn_xrGetInstanceProcAddr)
    {}

    // Used by ensure_function_loaded to load XR functions
    // Starts as XR_NULL_HANDLE but must be set once an instance is created
    // so that it can be used to fetch functions.
    XrInstance loader_instance;

    // used to load functions
    PFN_xrGetInstanceProcAddr GetInstanceProcAddr;

<%utils:for_grouped_functions args="function">\
    PFN_${function.name} ${function.name[2:]} = nullptr;
</%utils:for_grouped_functions>

    // defined inline in header so that it can be used by server modules
    template <typename FuncPtr,
            typename = std::enable_if_t<
                std::is_pointer_v<FuncPtr> &&
                std::is_function_v<std::remove_pointer_t<FuncPtr>>
            >>
    void ensure_function_loaded(const char* name, FuncPtr& function) const {
        if (*function != nullptr) {
            // function is already loaded, do nothing
            return;
        }

        XrResult result = GetInstanceProcAddr(loader_instance, name, reinterpret_cast<PFN_xrVoidFunction*>(&function));

        if (!XR_SUCCEEDED(result)) {
            throw FunctionLoaderException("xrGetInstanceProcAddr for " + std::string(name) + " returned an error: " + std::to_string(result));
        }
    }
};

} // namespace xrtransport

#endif // XRTRANSPORT_FUNCTION_LOADER_H