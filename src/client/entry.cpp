#include "runtime.h"
#include "exports.h"
#include "available_extensions.h"
#include "transport_manager.h"
#include "synchronization.h"

#include "xrtransport/extensions/extension_functions.h"
#include "xrtransport/time.h"
#include "xrtransport/api.h"

#include "openxr/openxr_loader_negotiation.h"
#ifdef __ANDROID__
#define XR_USE_PLATFORM_ANDROID
#include "openxr/openxr_platform.h"
#endif
#include "openxr/openxr.h"

#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace xrtransport;

// different name to allow static, this symbol must not be exported per spec
static XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddrImpl(
    XrInstance                                  instance,
    const char*                                 name,
    PFN_xrVoidFunction*                         function);
static XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateInstanceExtensionPropertiesImpl(
    const char*                                 layerName,
    uint32_t                                    propertyCapacityInput,
    uint32_t*                                   propertyCountOutput,
    XrExtensionProperties*                      properties);
static XRAPI_ATTR XrResult XRAPI_CALL xrCreateInstanceImpl(
    const XrInstanceCreateInfo*                 createInfo,
    XrInstance*                                 instance);

// built-in extension functions
#ifdef _WIN32
static XRAPI_ATTR XrResult XRAPI_CALL xrConvertWin32PerformanceCounterToTimeKHRImpl(
    XrInstance                                  instance,
    const LARGE_INTEGER*                        performanceCounter,
    XrTime*                                     time);

static XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimeToWin32PerformanceCounterKHRImpl(
    XrInstance                                  instance,
    XrTime                                      time,
    LARGE_INTEGER*                              performanceCounter);
#else
static XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimespecTimeToTimeKHRImpl(
    XrInstance                                  instance,
    const struct timespec*                      timespecTime,
    XrTime*                                     time);

static XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimeToTimespecTimeKHRImpl(
    XrInstance                                  instance,
    XrTime                                      time,
    struct timespec*                            timespecTime);
#endif

// custom xrtransport functions for API layers
static XRAPI_ATTR XrResult XRAPI_CALL xrtransportGetTransport(xrtp_Transport* transport_out);

static const std::unordered_map<std::string, std::vector<std::string>> built_in_extensions = {
#ifdef _WIN32
    {"XR_KHR_win32_convert_performance_counter_time", {
        "xrConvertWin32PerformanceCounterToTimeKHR",
        "xrConvertTimeToWin32PerformanceCounterKHR",
    }},
#else
    {"XR_KHR_convert_timespec_time", {
        "xrConvertTimespecTimeToTimeKHR",
        "xrConvertTimeToTimespecTimeKHR",
    }},
#endif
};

static const std::unordered_map<std::string, PFN_xrVoidFunction> built_in_functions = {
    {"xrGetInstanceProcAddr", (PFN_xrVoidFunction)xrGetInstanceProcAddrImpl},
    {"xrEnumerateInstanceExtensionProperties", (PFN_xrVoidFunction)xrEnumerateInstanceExtensionPropertiesImpl},
    {"xrCreateInstance", (PFN_xrVoidFunction)xrCreateInstanceImpl},
    {"xrtransportGetTransport", (PFN_xrVoidFunction)xrtransportGetTransport},
#ifdef _WIN32
    {"xrConvertWin32PerformanceCounterToTimeKHR", (PFN_xrVoidFunction)xrConvertWin32PerformanceCounterToTimeKHRImpl},
    {"xrConvertTimeToWin32PerformanceCounterKHR", (PFN_xrVoidFunction)xrConvertTimeToWin32PerformanceCounterKHRImpl},
#else
    {"xrConvertTimespecTimeToTimeKHR", (PFN_xrVoidFunction)xrConvertTimespecTimeToTimeKHRImpl},
    {"xrConvertTimeToTimespecTimeKHR", (PFN_xrVoidFunction)xrConvertTimeToTimespecTimeKHRImpl},
#endif
};

static XrInstance saved_instance = XR_NULL_HANDLE;
static std::unordered_set<std::string> available_functions = {
    "xrEnumerateInstanceExtensionProperties",
    "xrEnumerateApiLayerProperties",
    "xrCreateInstance"
};

static XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddrImpl(XrInstance instance, const char* name, PFN_xrVoidFunction* function) {
    if (!function) {
        return XR_ERROR_HANDLE_INVALID;
    }

    if (name == nullptr) {
        return XR_ERROR_FUNCTION_UNSUPPORTED;
    }

    std::string name_str(name);

    // allow API layers to access transport (allowed will null instance handle)
    if (name_str == "xrtransportGetTransport") {
        *function = reinterpret_cast<PFN_xrVoidFunction>(xrtransportGetTransport);
        return XR_SUCCESS;
    }

    // for spec compliance
    if (instance == XR_NULL_HANDLE &&
        name_str != "xrEnumerateInstanceExtensionProperties" &&
        name_str != "xrEnumerateApiLayerProperties" &&
        name_str != "xrCreateInstance") {
        if (function) *function = nullptr;
        return XR_ERROR_HANDLE_INVALID;
    }

    // check if function is in core or enabled extensions
    if (available_functions.find(name_str) == available_functions.end()) {
        return XR_ERROR_FUNCTION_UNSUPPORTED;
    }

    if (built_in_functions.find(name_str) != built_in_functions.end()) {
        // function found in built-in functions
        *function = built_in_functions.at(name_str);
        return XR_SUCCESS;
    }
    else if (function_exports_table.find(name_str) != function_exports_table.end()) {
        // function found in dispatch table
        *function = function_exports_table.at(name_str);
        return XR_SUCCESS;
    }
    else {
        // somehow the function was not in either table, but *was* in available_functions.
        // this should never happen, but just return XR_ERROR_FUNCTION_UNSUPPORTED
        return XR_ERROR_FUNCTION_UNSUPPORTED;
    }
}

static XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateInstanceExtensionPropertiesImpl(const char* layerName, uint32_t propertyCapacityInput, uint32_t* propertyCountOutput, XrExtensionProperties* properties) {
    // If a layer is specified, just don't return anything
    // TODO: maybe we should expose server extensions to this?
    if (layerName) {
        *propertyCountOutput = 0;
        return XR_SUCCESS;
    }

    auto& available_extensions = get_available_extensions();

    uint32_t extension_count = available_extensions.size();

    if (propertyCapacityInput != 0 && propertyCapacityInput < extension_count) {
        *propertyCountOutput = extension_count;
        return XR_ERROR_SIZE_INSUFFICIENT;
    }

    if (propertyCapacityInput == 0) {
        *propertyCountOutput = extension_count;
        return XR_SUCCESS;
    }

    int i = 0;
    for (const auto& [extension_name, extension_version] : available_extensions) {
        XrExtensionProperties& ext_out = properties[i++];
        std::memcpy(ext_out.extensionName, extension_name.c_str(), extension_name.size() + 1);
        ext_out.extensionVersion = extension_version;
    }

    return XR_SUCCESS;
}

static XrBaseOutStructure* remove_from_chain(XrBaseOutStructure* base, XrStructureType target_type) {
    XrBaseOutStructure* result = nullptr;

    XrBaseOutStructure* prev_node = base;
    XrBaseOutStructure* node = base->next;
    while (node != nullptr) {
        if (node->type == target_type) {
            // if we haven't already found one of the target type, save it
            if (!result) {
                result = node;
            }
            prev_node->next = node->next;
            node = node->next;
        }
        else {
            prev_node = node;
            node = node->next;
        }
    }

    return result;
}

static XRAPI_ATTR XrResult XRAPI_CALL xrCreateInstanceImpl(const XrInstanceCreateInfo* create_info, XrInstance* instance) {
    if (saved_instance != XR_NULL_HANDLE) {
        // can't create multiple instances
        return XR_ERROR_LIMIT_REACHED;
    }

    if (create_info->applicationInfo.apiVersion > XR_CURRENT_API_VERSION) {
        return XR_ERROR_API_VERSION_UNSUPPORTED;
    }

    // check available extensions and populate available functions
    auto& available_extensions = get_available_extensions();

    // first make sure all extensions are available
    for (int i = 0; i < create_info->enabledExtensionCount; i++) {
        std::string extension_name = create_info->enabledExtensionNames[i];
        if (available_extensions.find(extension_name) == available_extensions.end()) {
            return XR_ERROR_EXTENSION_NOT_PRESENT;
        }
    }

    // now populate available functions
    for (int i = 0; i < create_info->enabledExtensionCount; i++) {
        std::string extension_name = create_info->enabledExtensionNames[i];

        // handle built-in extensions
        if (built_in_extensions.find(extension_name) != built_in_extensions.end()) {
            for (auto& function_name : built_in_extensions.at(extension_name)) {
                available_functions.emplace(function_name);
            }
        }
        // handle other extensions
        else if (extension_functions.find(extension_name) != extension_functions.end()) {
            for (auto& function_name : extension_functions.at(extension_name)) {
                available_functions.emplace(function_name);
            }
        }
    }

    // populate core functions
    for (auto& function_name : core_functions) {
        available_functions.emplace(function_name);
    }

    // Remove platform structs from pNext chain

    // Technically a violation of the spec to manipulate the chain, but it's easier than copying the whole chain
    // and I don't think anyone relies on their XrInstanceCreateInfo not being edited.
    XrBaseOutStructure* chain_base = reinterpret_cast<XrBaseOutStructure*>(const_cast<XrInstanceCreateInfo*>(create_info));

    // TODO: save this, and use a Transport handler to relay messages from the host to this callback
    // either way it needs to be removed from the chain before going to the host
    auto debug_create_info = reinterpret_cast<XrDebugUtilsMessengerCreateInfoEXT*>(remove_from_chain(chain_base, XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT));

#ifdef __ANDROID__
    // TODO: It is unclear if we will need to save the contents of this struct
    // either way it needs to be removed from the chain before going to the host
    auto android_create_info = reinterpret_cast<XrInstanceCreateInfoAndroidKHR*>(remove_from_chain(chain_base, XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR));

    // this struct is required on Android
    if (!android_create_info) {
        return XR_ERROR_INITIALIZATION_FAILED;
    }
#endif

    // Do the instance creation
    XrResult result = runtime::xrCreateInstance(create_info, instance);
    if (XR_SUCCEEDED(result)) {
        saved_instance = *instance;
        // now that instance has been created, synchronization can start
        enable_synchronization();
    }
    else {
        // If instance creation failed, no functions are available
        available_functions.clear();
    }
    return result;
}

extern "C" XRTP_API_EXPORT XrResult XRAPI_CALL xrNegotiateLoaderRuntimeInterface(const XrNegotiateLoaderInfo* loaderInfo, XrNegotiateRuntimeRequest* runtimeRequest) {
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

static XRAPI_ATTR XrResult XRAPI_CALL xrtransportGetTransport(xrtp_Transport* transport_out) {
    Transport& transport = get_transport();
    *transport_out = transport.get_handle();
    return XR_SUCCESS;
}

#ifdef _WIN32
static XRAPI_ATTR XrResult XRAPI_CALL xrConvertWin32PerformanceCounterToTimeKHRImpl(
    XrInstance                                  instance,
    const LARGE_INTEGER*                        performanceCounter,
    XrTime*                                     time)
{
    if (instance != saved_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    convert_from_platform_time(performanceCounter, time);
    return XR_SUCCESS;
}

static XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimeToWin32PerformanceCounterKHRImpl(
    XrInstance                                  instance,
    XrTime                                      time,
    LARGE_INTEGER*                              performanceCounter)
{
    if (instance != saved_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    convert_to_platform_time(time, performanceCounter);
    return XR_SUCCESS;
}
#else
static XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimespecTimeToTimeKHRImpl(
    XrInstance                                  instance,
    const struct timespec*                      timespecTime,
    XrTime*                                     time)
{
    if (instance != saved_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    convert_from_platform_time(timespecTime, time);
    return XR_SUCCESS;
}

static XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimeToTimespecTimeKHRImpl(
    XrInstance                                  instance,
    XrTime                                      time,
    struct timespec*                            timespecTime)
{
    if (instance != saved_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    convert_to_platform_time(time, timespecTime);
    return XR_SUCCESS;
}
#endif