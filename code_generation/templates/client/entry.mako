<%namespace name="utils" file="utils.mako"/>
#include "runtime.h"

#define XR_EXTENSION_PROTOTYPES
#include "openxr/openxr_loader_negotiation.h"

#include <unordered_map>
#include <string>

// different name to allow static, this symbol must not be exported per spec
static XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddrImpl(XrInstance instance, const char* name, PFN_xrVoidFunction* function);

static std::unordered_map<std::string, PFN_xrVoidFunction> function_table = {
<%utils:for_grouped_functions args="function">
    {"${function.name}", (PFN_xrVoidFunction)xrtransport::${function.name}},
</%utils:for_grouped_functions>
    {"xrGetInstanceProcAddr", (PFN_xrVoidFunction)xrGetInstanceProcAddrImpl}
};

static XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddrImpl(XrInstance instance, const char* name, PFN_xrVoidFunction* function) {
    if (name == nullptr) {
        if (function) *function = nullptr;
        return XR_ERROR_FUNCTION_UNSUPPORTED;
    }

    std::string name_str(name);

    // for spec compliance
    if (instance == XR_NULL_HANDLE &&
        name_str != "xrEnumerateInstanceExtensionProperties" &&
        name_str != "xrEnumerateApiLayerProperties" &&
        name_str != "xrCreateInstance") {
        if (function) *function = nullptr;
        return XR_ERROR_HANDLE_INVALID;
    }

    if (function_table.find(name) == function_table.end()) {
        return XR_ERROR_FUNCTION_UNSUPPORTED;
    }
    
    if (!function) {
        return XR_ERROR_HANDLE_INVALID;
    }
    *function = function_table.at(name_str);
    return XR_SUCCESS;
}

extern "C" XRAPI_ATTR XrResult XRAPI_CALL xrNegotiateLoaderRuntimeInterface(const XrNegotiateLoaderInfo* loaderInfo, XrNegotiateRuntimeRequest* runtimeRequest) {
    if (!loaderInfo ||
        !runtimeRequest ||
        loaderInfo->structType != XR_LOADER_INTERFACE_STRUCT_LOADER_INFO ||
        loaderInfo->structVersion != XR_LOADER_INFO_STRUCT_VERSION ||
        loaderInfo->structSize != sizeof(XrNegotiateLoaderInfo) ||
        runtimeRequest->structType != XR_LOADER_INTERFACE_STRUCT_RUNTIME_REQUEST ||
        runtimeRequest->structVersion != XR_RUNTIME_INFO_STRUCT_VERSION ||
        runtimeRequest->structSize != sizeof(XrNegotiateRuntimeRequest) ||
        loaderInfo->minInterfaceVersion > XR_CURRENT_LOADER_API_LAYER_VERSION ||
        loaderInfo->maxInterfaceVersion < XR_CURRENT_LOADER_API_LAYER_VERSION ||
        loaderInfo->minApiVersion > XR_CURRENT_API_VERSION ||
        loaderInfo->maxApiVersion < XR_CURRENT_API_VERSION) {
        return XR_ERROR_INITIALIZATION_FAILED;
    }
    
    runtimeRequest->getInstanceProcAddr = xrGetInstanceProcAddrImpl;
    runtimeRequest->runtimeInterfaceVersion = XR_CURRENT_LOADER_API_LAYER_VERSION;
    runtimeRequest->runtimeApiVersion = XR_CURRENT_API_VERSION;

    return XR_SUCCESS;
}