# Server Implementation Plan

## Overview
Create a server that accepts connections, performs handshake, and forwards OpenXR function calls from the client to the native OpenXR runtime. The server runs synchronously on the main thread with modular extension support.

---

## Phase 1: Foundation & Connection Infrastructure

### 1.1 Cross-Platform Library Loading Utility
**File:** `include/xrtransport/module_loader.h`

```cpp
#ifndef XRTRANSPORT_MODULE_LOADER_H
#define XRTRANSPORT_MODULE_LOADER_H

#ifdef _WIN32
    #include <windows.h>
    #define MODULE_HANDLE HMODULE
    #define MODULE_LOAD(path) LoadLibraryA(path)
    #define MODULE_SYM(handle, name) GetProcAddress(handle, name)
    #define MODULE_UNLOAD(handle) FreeLibrary(handle)
    #define MODULE_EXT ".dll"
#else
    #include <dlfcn.h>
    #define MODULE_HANDLE void*
    #define MODULE_LOAD(path) dlopen(path, RTLD_LAZY)
    #define MODULE_SYM(handle, name) dlsym(handle, name)
    #define MODULE_UNLOAD(handle) dlclose(handle)
    #define MODULE_EXT ".so"
#endif

#include "xrtransport/transport/transport.h"
#include "openxr/openxr.h"

namespace xrtransport {

// Module init/shutdown function signatures
typedef bool (*PFN_xrtransport_module_init)(Transport& transport, PFN_xrGetInstanceProcAddr xrGetInstanceProcAddr);
typedef void (*PFN_xrtransport_module_shutdown)();

} // namespace xrtransport

#endif // XRTRANSPORT_MODULE_LOADER_H
```

### 1.2 Connection Abstraction
**File:** `include/xrtransport/server/connection.h`

```cpp
#ifndef XRTRANSPORT_SERVER_CONNECTION_H
#define XRTRANSPORT_SERVER_CONNECTION_H

#include "xrtransport/asio_compat.h"
#include <memory>

namespace xrtransport {

// Creates a connection stream (implementation detail: TCP, but abstracted)
// Throws exception on failure
std::unique_ptr<DuplexStream> create_connection();

} // namespace xrtransport

#endif
```

**File:** `src/server/connection.cpp`

**Implementation details (hidden from header):**
- Hardcoded TCP port (e.g., 9876)
- Creates TCP server socket, listens, accepts ONE client connection
- Wraps socket in ASIO-compatible stream
- Keeps server socket open but doesn't accept more clients
- Returns `unique_ptr<DuplexStream>` on success
- Throws exception on failure
- **Note:** The fact that this uses TCP is an implementation detail not exposed in the header

### 1.3 Handshake Implementation
**File:** `src/server/server.cpp`

**Function:** `bool perform_handshake(DuplexStream& stream)`

Per `protocol.txt`:
- Read 4-byte version from client (uint32_t)
- If matches: send OK (>0 uint32_t), return `true`
- If mismatch: send QUIT (0 uint32_t), close stream, return `false`
- On exception: close stream, rethrow

---

## Phase 2: Code Generation - Forward Functions

### 2.1 Extension Function Mapping Generator
**File:** `code_generation/templates/server/extension_functions.mako`

**Generates:** `include/xrtransport/server/extension_functions.h`

```cpp
// Generated map: extension name -> list of function names
const std::unordered_map<std::string, std::vector<std::string>> extension_functions = {
    {"XR_KHR_vulkan_enable", {"xrGetVulkanGraphicsRequirementsKHR", "xrGetVulkanInstanceExtensionsKHR", ...}},
    {"XR_EXT_debug_utils", {"xrCreateDebugUtilsMessengerEXT", ...}},
    // ... all extensions
};

// Core functions (need dynamic lookup after xrCreateInstance)
const std::vector<std::string> core_functions = {
    "xrCreateSession",
    "xrDestroySession",
    // ... all core functions except the pre-instance ones
};

// Pre-instance functions (can be retrieved with null XrInstance)
const std::vector<std::string> pre_instance_functions = {
    "xrEnumerateApiLayerProperties",
    "xrEnumerateInstanceExtensionProperties",
    "xrCreateInstance"
};
```

### 2.2 OpenXR Function Pointer Declarations (GLEW-style)
**File:** `code_generation/templates/server/openxr_function_pointers.mako`

**Generates:** `include/xrtransport/server/openxr_functions.h`

```cpp
// GLEW-style function pointer declarations
// These are populated dynamically as we go
namespace xrtransport {

extern PFN_xrEnumerateApiLayerProperties pfn_xrEnumerateApiLayerProperties;
extern PFN_xrEnumerateInstanceExtensionProperties pfn_xrEnumerateInstanceExtensionProperties;
extern PFN_xrCreateInstance pfn_xrCreateInstance;
extern PFN_xrDestroyInstance pfn_xrDestroyInstance;
extern PFN_xrCreateSession pfn_xrCreateSession;
// ... for ALL OpenXR functions

} // namespace xrtransport
```

### 2.3 Forward Function Generator
**File:** `code_generation/templates/server/forward_functions_header.mako`

**Generates:** `include/xrtransport/server/forward_functions.h`

```cpp
// Forward declarations
void forward_xrEnumerateApiLayerProperties(MessageLockIn msg_in, Transport& transport);
void forward_xrEnumerateInstanceExtensionProperties(MessageLockIn msg_in, Transport& transport);
// ... for all functions

// Forward function pointer type
typedef void (*ForwardFunction)(MessageLockIn, Transport&);

// Lookup table (populated at runtime)
extern std::unordered_map<uint32_t, ForwardFunction> forward_function_table;

// Initialize pre-instance function pointers (called at startup)
void init_pre_instance_functions(PFN_xrGetInstanceProcAddr xrGetInstanceProcAddr);

// Populate remaining function pointers after xrCreateInstance
void populate_function_pointers(XrInstance instance, const std::vector<std::string>& enabled_extensions);
```

**File:** `code_generation/templates/server/forward_functions_impl.mako`

**Generates:** `src/server/forward_functions.cpp`

```cpp
#include "xrtransport/server/forward_functions.h"
#include "xrtransport/server/openxr_functions.h"
// ...

// Define function pointer instances
PFN_xrEnumerateApiLayerProperties pfn_xrEnumerateApiLayerProperties = nullptr;
PFN_xrEnumerateInstanceExtensionProperties pfn_xrEnumerateInstanceExtensionProperties = nullptr;
PFN_xrCreateInstance pfn_xrCreateInstance = nullptr;
// ... for ALL functions

// Forward function lookup table
std::unordered_map<uint32_t, ForwardFunction> forward_function_table;

void init_pre_instance_functions(PFN_xrGetInstanceProcAddr xrGetInstanceProcAddr) {
    // Populate pre-instance functions (null XrInstance works)
    xrGetInstanceProcAddr(XR_NULL_HANDLE, "xrEnumerateApiLayerProperties",
        (PFN_xrVoidFunction*)&pfn_xrEnumerateApiLayerProperties);
    xrGetInstanceProcAddr(XR_NULL_HANDLE, "xrEnumerateInstanceExtensionProperties",
        (PFN_xrVoidFunction*)&pfn_xrEnumerateInstanceExtensionProperties);
    xrGetInstanceProcAddr(XR_NULL_HANDLE, "xrCreateInstance",
        (PFN_xrVoidFunction*)&pfn_xrCreateInstance);

    // Add to forward table
    forward_function_table[FUNCTION_ID_xrEnumerateApiLayerProperties] = forward_xrEnumerateApiLayerProperties;
    forward_function_table[FUNCTION_ID_xrEnumerateInstanceExtensionProperties] = forward_xrEnumerateInstanceExtensionProperties;
    forward_function_table[FUNCTION_ID_xrCreateInstance] = forward_xrCreateInstance;
}

void populate_function_pointers(XrInstance instance, const std::vector<std::string>& enabled_extensions) {
    // Populate core functions
    for (const auto& func_name : core_functions) {
        PFN_xrVoidFunction func_ptr = nullptr;
        xrGetInstanceProcAddr(instance, func_name.c_str(), &func_ptr);

        // Store in appropriate pfn_xr... variable (generated mapping)
        // Add to forward_function_table
    }

    // Populate extension functions
    for (const auto& ext_name : enabled_extensions) {
        auto it = extension_functions.find(ext_name);
        if (it != extension_functions.end()) {
            for (const auto& func_name : it->second) {
                PFN_xrVoidFunction func_ptr = nullptr;
                xrGetInstanceProcAddr(instance, func_name.c_str(), &func_ptr);

                // Store in appropriate pfn_xr... variable (generated mapping)
                // Add to forward_function_table
            }
        }
    }
}

// Generated forward functions for non-custom functions
void forward_xrEnumerateApiLayerProperties(MessageLockIn msg_in, Transport& transport) {
    // Deserialize all parameters (NOT in-place)
    uint32_t propertyCapacityInput;
    deserialize(&propertyCapacityInput, msg_in.stream);
    uint32_t propertyCountOutput;
    deserialize(&propertyCountOutput, msg_in.stream);
    XrApiLayerProperties* properties = nullptr;
    deserialize_ptr(&properties, msg_in.stream);

    // Call native OpenXR function via function pointer
    XrResult result = pfn_xrEnumerateApiLayerProperties(propertyCapacityInput, &propertyCountOutput, properties);

    // Send FUNCTION_RETURN message
    auto msg_out = transport.start_message(FUNCTION_RETURN);
    serialize(&result, msg_out.stream);

    // Serialize modified/output parameters
    serialize(&propertyCountOutput, msg_out.stream);
    serialize_ptr(properties, propertyCapacityInput, msg_out.stream);

    // Cleanup all deserialized arguments
    cleanup(&propertyCapacityInput);
    cleanup(&propertyCountOutput);
    cleanup_ptr(properties, 1);
}

// ... similar for all other functions
```

### 2.4 Custom Function: xrCreateInstance
**File:** `src/server/custom_forward_functions.cpp`

```cpp
void forward_xrCreateInstance(MessageLockIn msg_in, Transport& transport) {
    // Deserialize XrInstanceCreateInfo
    const XrInstanceCreateInfo* create_info = nullptr;
    deserialize_xr(&create_info, msg_in.stream);

    XrInstance instance;

    // Call native xrCreateInstance via function pointer
    XrResult result = pfn_xrCreateInstance(create_info, &instance);

    if (result == XR_SUCCESS) {
        // Extract enabled extensions from create_info
        std::vector<std::string> enabled_extensions;
        for (uint32_t i = 0; i < create_info->enabledExtensionCount; i++) {
            enabled_extensions.push_back(create_info->enabledExtensionNames[i]);
        }

        // Populate global function pointer lookup table
        populate_function_pointers(instance, enabled_extensions);
    }

    // Send response
    auto msg_out = transport.start_message(FUNCTION_RETURN);
    serialize(&result, msg_out.stream);
    serialize(&instance, msg_out.stream);

    cleanup_xr(create_info);
}
```

### 2.5 Update Code Generator for Custom Functions
**File:** `code_generation/spec_parser.py`

Add `CUSTOM_FUNCTIONS` list similar to `CUSTOM_STRUCTS`:
```python
CUSTOM_FUNCTIONS = [
    'xrCreateInstance',
    # Future: xrDestroyInstance?, others as needed
]
```

Update templates to skip generation for custom functions, similar to custom struct handling.

---

## Phase 3: Main Server Loop

### 3.1 Main Server Implementation
**File:** `src/server/server.cpp`

```cpp
void run_server(Transport& transport) {
    spdlog::info("Server ready, awaiting function calls...");

    while (true) {  // TODO: Add clean shutdown mechanism
        // Await FUNCTION_CALL message
        // (Custom messages from client API layers handled in await_message via registered handlers)
        auto msg_in = transport.await_message(FUNCTION_CALL);

        // Read function ID
        uint32_t function_id;
        deserialize(&function_id, msg_in.stream);

        // Lookup and call forward function
        auto it = forward_function_table.find(function_id);
        if (it != forward_function_table.end()) {
            it->second(std::move(msg_in), transport);
        } else {
            fatal_error("Unknown function ID in server: " + std::to_string(function_id));
        }
    }
}
```

### 3.2 Main Entry Point
**File:** `src/server/main.cpp`

```cpp
int main(int argc, char** argv) {
    // Parse command line arguments
    std::string module_dir = "modules";
    if (argc > 1) {
        module_dir = argv[1];
    }

    // Get xrGetInstanceProcAddr from OpenXR loader
    PFN_xrGetInstanceProcAddr xrGetInstanceProcAddr = /* from loader */;

    // Initialize pre-instance function pointers
    init_pre_instance_functions(xrGetInstanceProcAddr);

    try {
        while (true) {
            spdlog::info("Waiting for connection...");
            auto stream = create_connection();

            spdlog::info("Client connected from <connection details>, performing handshake...");
            if (!perform_handshake(*stream)) {
                spdlog::warn("Handshake failed, waiting for new connection...");
                continue;  // Wait for next client
            }

            spdlog::info("Handshake successful, creating transport...");
            Transport transport(std::move(stream));

            // Load modules
            spdlog::info("Loading modules from '{}'...", module_dir);
            load_modules(module_dir, transport, xrGetInstanceProcAddr);

            // Run main server loop (blocks until error/exit)
            run_server(transport);
        }
    } catch (const std::exception& e) {
        spdlog::critical("Server fatal error: {}", e.what());
        return 1;
    }
}
```

---

## Phase 4: Module System

### 4.1 Module Loading Implementation
**File:** `src/server/module_loader.cpp`

```cpp
struct LoadedModule {
    MODULE_HANDLE handle;
    PFN_xrtransport_module_shutdown shutdown_fn;
    std::string path;
};

std::vector<LoadedModule> loaded_modules;

void load_modules(const std::string& module_dir, Transport& transport, PFN_xrGetInstanceProcAddr xrGetInstanceProcAddr) {
    namespace fs = std::filesystem;

    if (!fs::exists(module_dir)) {
        spdlog::warn("Module directory '{}' does not exist", module_dir);
        return;
    }

    for (const auto& entry : fs::directory_iterator(module_dir)) {
        if (entry.path().extension() != MODULE_EXT) continue;

        std::string path = entry.path().string();
        spdlog::info("Loading module: {}", path);

        MODULE_HANDLE handle = MODULE_LOAD(path.c_str());
        if (!handle) {
            spdlog::warn("Failed to load module: {}", path);
            continue;
        }

        auto init_fn = (PFN_xrtransport_module_init)MODULE_SYM(handle, "xrtransport_module_init");
        if (!init_fn) {
            spdlog::warn("Module missing xrtransport_module_init: {}", path);
            MODULE_UNLOAD(handle);
            continue;
        }

        try {
            if (!init_fn(transport, xrGetInstanceProcAddr)) {
                spdlog::warn("Module init returned false: {}", path);
                MODULE_UNLOAD(handle);
                continue;
            }
        } catch (const std::exception& e) {
            spdlog::warn("Module init threw exception: {} - {}", path, e.what());
            MODULE_UNLOAD(handle);
            continue;
        }

        // Store shutdown function for cleanup
        auto shutdown_fn = (PFN_xrtransport_module_shutdown)MODULE_SYM(handle, "xrtransport_module_shutdown");
        loaded_modules.push_back({handle, shutdown_fn, path});

        spdlog::info("Module loaded successfully: {}", path);
    }
}

void shutdown_modules() {
    for (auto& mod : loaded_modules) {
        spdlog::info("Shutting down module: {}", mod.path);
        if (mod.shutdown_fn) {
            try {
                mod.shutdown_fn();
            } catch (const std::exception& e) {
                spdlog::error("Module shutdown error: {} - {}", mod.path, e.what());
            }
        }
        MODULE_UNLOAD(mod.handle);
    }
    loaded_modules.clear();
}
```

---

## Phase 5: Build System Integration

### 5.1 Server CMakeLists.txt
**File:** `src/server/CMakeLists.txt`

```cmake
# Server executable
add_executable(xrtransport_server
    main.cpp
    server.cpp
    connection.cpp
    forward_functions.cpp
    custom_forward_functions.cpp
    module_loader.cpp
)

# Link dependencies
target_link_libraries(xrtransport_server
    xrtransport_transport
    xrtransport_serialization
    openxr_loader  # From external/OpenXR-SDK
)

# Include directories
target_include_directories(xrtransport_server PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/external/asio/asio/include
)

# Platform-specific libraries for module loading
if(WIN32)
    # Windows doesn't need extra libs for LoadLibrary
else()
    target_link_libraries(xrtransport_server dl)  # For dlopen/dlsym
    target_link_libraries(xrtransport_server pthread)  # May be needed for ASIO
endif()

# C++ standard
set_target_properties(xrtransport_server PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
```

### 5.2 Update Root CMakeLists.txt
Already includes OpenXR-SDK before server directory, so just add:
```cmake
# Add server if building server
if(XRTRANSPORT_BUILD_SERVER)
    add_subdirectory(src/server)
endif()
```

---

## Phase 6: Future Enhancements & Notes

### 6.1 Client-Side Extension Validation (Out of Scope)
**Note:** Add validation to client runtime to refuse `xrGetInstanceProcAddr` for extensions not enabled during `xrCreateInstance`. This requires tracking enabled extensions in client state.

### 6.2 Clean Shutdown Mechanism (Future)
**TODO:** Implement graceful shutdown:
- Signal handling (SIGTERM, SIGINT)
- Shutdown message protocol
- Call `shutdown_modules()` before exit
- Clean up Transport, close connections

### 6.3 Connection Recovery (Future)
**TODO:** Allow server to accept new connection after disconnect, potentially reusing same module state if appropriate.

### 6.4 Testing with Monado (Future)
**Testing Flow:**
1. Save original system OpenXR runtime configuration (`XR_RUNTIME_JSON` env var or registry)
2. Set system OpenXR runtime to Monado virtual HMD
3. Launch `xrtransport_server` (will load Monado via openxr_loader)
4. Set system OpenXR runtime to xrtransport client runtime JSON
5. Launch test client application
6. Run OpenXR conformance/functionality tests
7. Restore original system OpenXR configuration
8. Clean up

**Test Infrastructure Needed:**
- Script to save/restore OpenXR runtime config
- Monado virtual device setup
- Client runtime manifest JSON
- Test suite using Catch2

---

## Implementation Order

### Recommended Implementation Sequence:

1. **Phase 1.1** - Cross-platform module loader header (with platform headers)
2. **Phase 2.5** - Update code generator for custom functions
3. **Phase 2.1** - Generate extension function mapping
4. **Phase 2.2** - Generate OpenXR function pointer declarations (GLEW-style)
5. **Phase 2.3** - Generate forward functions (header + impl with pfn_ calls)
6. **Phase 2.4** - Custom xrCreateInstance forward function
7. **Phase 1.2** - Connection abstraction header + TCP implementation
8. **Phase 1.3** - Handshake implementation (per protocol.txt)
9. **Phase 3** - Main server loop
10. **Phase 4** - Module system
11. **Phase 5** - Build system integration
12. **Testing** - Manual testing with simple client
