# Comprehensive Client-Side OpenXR Implementation Plan

## Project Context
xrtransport is a transparent remote OpenXR runtime system that enables OpenXR applications to run remotely through client-server architecture with automatic serialization/deserialization. Current focus is on implementing the client-side components.

## Current State Analysis
- **Existing serialization**: Auto-generated `serialize(const T*, std::ostream&)` and `deserialize(T*, std::istream&)` functions for all OpenXR structs
- **Protocol**: Binary protocol with function calls as `[uint32_t function_index][serialized_args...]`
- **Memory allocation**: Current deserializers use `std::malloc()` for dynamic allocation
- **Code generation**: Modular architecture with `structs/`, `reflection/`, `test/` modules using Mako templates
- **Header-only library**: Current serializer/deserializer code is entirely header-only
- **Missing**: Client runtime, in-place deserialization, enhanced protocol, function call generation
- **✅ COMPLETED**: Header/implementation split

## 1. Serializer/Deserializer Header/Implementation Split ✅ COMPLETED

### Purpose
Refactor the generated serialization code from header-only library to proper header/implementation separation for better compilation times and linking.

### ✅ Implementation Completed
**Status**: Successfully implemented with the following changes from original plan:

#### **Command Line Interface Changes**
- **Updated arguments**: Changed from `<openxr_spec> <src_out> <test_out>` to `<openxr_spec> <include_out> <src_out> <test_out>`
- **New usage**: `python3 -m code_generation OpenXR-SDK/specification/registry/xr.xml include/xrtransport src/xrtransport test`

#### **Template Architecture**
- **Created split templates**:
  - `serializer_header.mako` / `serializer_impl.mako`
  - `deserializer_header.mako` / `deserializer_impl.mako`
- **Removed old templates**: Deleted monolithic `serializer.mako` and `deserializer.mako`
- **Updated code generation functions**: Added `generate_*_header()` and `generate_*_impl()` functions

#### **Custom Implementation Handling**
- **Moved custom functions**: Extracted inline custom implementations from headers to separate `.cpp` files:
  - `src/xrtransport/custom_serializer.cpp`
  - `src/xrtransport/custom_deserializer.cpp`
- **Updated custom headers**: Changed from inline definitions to declarations only
- **Fixed linking conflicts**: Resolved multiple definition errors during static library linking

#### **Build System**
- **Static library**: `libxrtransport_serialization.a` (791KB)
- **CMake structure**:
  - Root `CMakeLists.txt` builds both `src` and `test`
  - `src/CMakeLists.txt` creates static library with all implementation files
  - `test/CMakeLists.txt` links fuzzer with static library
- **C++ standard**: Enforced C++17 throughout project

#### **Generated Files Structure**
```
include/xrtransport/
├── serializer.h              # Function declarations
├── deserializer.h             # Function declarations
├── reflection_struct.h        # Type metadata
└── custom/
    ├── serializer.h           # Custom function declarations
    └── deserializer.h         # Custom function declarations

src/xrtransport/
├── serializer.cpp             # Generated implementations
├── deserializer.cpp           # Generated implementations
├── custom_serializer.cpp      # Custom implementations
└── custom_deserializer.cpp    # Custom implementations
```

#### **Verification Results**
- ✅ Code generation works with new split templates
- ✅ Static library builds successfully (791KB)
- ✅ Test fuzzer links and passes ("Fuzzer passed")
- ✅ No compilation errors or linking conflicts
- ✅ Proper header/implementation separation achieved

## 2. In-Place Deserialization Implementation

### Purpose
Support deserialization into pre-allocated memory for OpenXR function arguments where application handles all allocation.

### Location & Files
- **Module**: `code_generation/structs/`
- **New files**:
  - `code_generation/structs/deserializer_in_place.py`
  - `code_generation/templates/structs/deserializer_in_place.mako`
- **Output**: `include/xrtransport/deserializer_in_place.h`, `src/xrtransport/deserializer_in_place.cpp`

### Implementation Details
- **Function signature**: `void deserialize_in_place(StructType* s, std::istream& in)`
- **Key difference**: No `malloc()`/`new` calls, assume memory pre-allocated by caller
- **Pointer handling**: Deserialize directly into existing pointer targets
- **Array handling**: Deserialize into pre-allocated array memory
- **Struct chain handling**: Follow existing `pNext` patterns but use existing allocations

### Integration
- Update `code_generation/__main__.py` to generate both regular and in-place deserializers
- Generate separate header/implementation files following new split pattern

## 3. Enhanced Protocol with Custom Messages

### Purpose
Extend binary protocol to support custom message types beyond function calls, enabling full-duplex communication for both client and server custom functionality.

### Protocol Design
- **Message format**: `[2-byte message_type][payload...]`
- **Message types**:
  - `FUNCTION_CALL = 1`: Client function calls to server
  - `FUNCTION_RETURN = 2`: Server function responses to client
  - `CUSTOM_BASE = 100`: Start range for custom messages
- **Function call format**: `[FUNCTION_CALL][uint32_t function_index][serialized_args...]`
- **Function return format**: `[FUNCTION_RETURN][XrResult][serialized_modified_args...]`
- **Custom message format**: `[custom_id][custom_payload...]`

### Key Classes

#### Transport Class (`include/xrtransport/transport.h`)
```cpp
class Transport {
    std::iostream& stream;
    std::thread worker_thread;
    std::mutex stream_mutex;
    std::map<uint16_t, std::function<void(std::istream&)>> handlers;
    std::map<uint16_t, std::condition_variable> awaiting_messages;

public:
    MessageLockOut start_message(uint16_t header);
    void register_handler(uint16_t header, std::function<void(std::istream&)> handler);
    MessageLockIn await_message(uint16_t header);
    void start_worker_thread();
    void stop_worker_thread();
};
```

#### RAII Stream Lock Classes
**Design Decision**: Return references to underlying streams for simplicity and compatibility with existing serialize/deserialize functions.

```cpp
class MessageLockOut {
    std::unique_lock<std::mutex> lock;
    std::ostream& stream;
    uint16_t header;

public:
    MessageLockOut(std::mutex& m, std::ostream& s, uint16_t h);
    ~MessageLockOut(); // Flush stream, release lock
    MessageLockOut(const MessageLockOut&) = delete;
    MessageLockOut& operator=(const MessageLockOut&) = delete;
    MessageLockOut(MessageLockOut&&) = default;
    MessageLockOut& operator=(MessageLockOut&&) = default;

    std::ostream& get_stream() { return stream; }
};

class MessageLockIn {
    std::unique_lock<std::mutex> lock;
    std::istream& stream;

public:
    MessageLockIn(std::mutex& m, std::istream& s);
    ~MessageLockIn(); // Release lock
    MessageLockIn(const MessageLockIn&) = delete;
    MessageLockIn& operator=(const MessageLockIn&) = delete;
    MessageLockIn(MessageLockIn&&) = default;
    MessageLockIn& operator=(MessageLockIn&&) = default;

    std::istream& get_stream() { return stream; }
};
```

### Thread Safety Architecture
- **Worker thread**: Continuously reads message headers and dispatches to handlers
- **await_message()**: Blocks until specific header received, prevents handler execution for that message
- **Mutex protection**: All stream access protected by single mutex
- **Handler dispatch**: Wrong headers dispatched to registered handlers, await_message() continues waiting

## 4. OpenXR Function Call Generation

### Purpose
Auto-generate client-side implementations for all OpenXR functions (except loader negotiation) that serialize arguments, send to server, and deserialize results.

### Location & Files
- **New module**: `code_generation/functions/`
- **Files**:
  - `code_generation/functions/__init__.py`
  - `code_generation/functions/client_runtime.py`
  - `code_generation/templates/functions/client_runtime.mako`

### Function Generation Pattern
```cpp
XrResult xrFunctionName(param1, param2*, param3*) {
    // Send function call with direct streaming
    {
        auto msg_out = transport.start_message(FUNCTION_CALL);
        auto& stream = msg_out.get_stream();
        stream << FUNCTION_INDEX_XR_FUNCTION_NAME;
        serialize(&param1, stream);
        serialize(param2, stream);
        serialize(param3, stream);
    } // MessageLockOut destructor releases lock

    // Receive response
    XrResult result;
    {
        auto msg_in = transport.await_message(FUNCTION_RETURN);
        auto& stream = msg_in.get_stream();
        stream >> result;

        // Deserialize modified arguments in-place
        deserialize_in_place(param2, stream);
        deserialize_in_place(param3, stream);
    } // MessageLockIn destructor releases lock

    return result;
}
```

### Function Index Generation
- Generate enum with function indices matching server
- Use existing spec parsing infrastructure from `spec_parser.py`
- Exclude loader negotiation functions (handled manually)
- **No header generation**: Implement functions directly since openxr.h already contains definitions

### Integration with Existing Infrastructure
- Leverage existing function metadata from spec parsing
- Use same Mako template system
- Generate only implementation file: `src/client/generated/function_implementations.cpp`

## 5. Client Runtime Infrastructure

### Purpose
Provide OpenXR loader-compatible runtime that establishes automatic connection and exposes generated function implementations.

### Directory Structure
```
src/client/
├── runtime.cpp              # Loader negotiation, entry points
├── connection.cpp           # Hardcoded connection parameters
├── transport_manager.cpp    # Transport instance management
└── generated/              # Auto-generated code
    └── function_implementations.cpp
include/client/
└── generated/
    └── function_indices.h
```

### Core Components

#### Runtime Entry Points (`src/client/runtime.cpp`)
- **Manual implementation**: Loader negotiation functions (`xrNegotiateLoaderRuntimeInterface`)
- **Export table**: Function pointer table for OpenXR loader
- **Initialization**: Automatic connection on first OpenXR call
- **Library interface**: Proper .so exports for Android OpenXR loader compatibility

#### Connection Management (`src/client/connection.cpp`)
- **Hardcoded parameters**: Host, port, connection type (initially hardcoded in source)
- **std::iostream abstraction**: Support for TCP sockets via iostream wrapper
- **Automatic connection**: Establish on first function call, crash on failure (no recovery initially)
- **Transport instance**: Single global Transport instance

#### Transport Manager (`src/client/transport_manager.cpp`)
- **Singleton pattern**: Global Transport instance management
- **Lazy initialization**: Create connection when first accessed
- **Thread management**: Start/stop worker thread lifecycle
- **Error handling**: Simple crash-on-failure for initial implementation

## 6. Code Generation Integration

### Updates to Main Generation Script
**File**: `code_generation/__main__.py`

#### New Command Line Arguments
```bash
python3 -m code_generation <openxr_spec> <include_out> <src_out> <test_out> [--client-src <client_src_out>]
```

Where:
- `include_out`: Output directory for header files (replaces old `src_out`)
- `src_out`: Output directory for C++ implementation files (new)
- `test_out`: Output directory for test files (unchanged)
- `client_src_out`: Optional output directory for client implementation files

#### Additional Outputs
1. **Header/Implementation split**: Generate both .h and .cpp files for serializers/deserializers
2. **In-place deserializers**: Generate alongside regular deserializers
3. **Client function implementations**: New output to `<client_src_out>/generated/`
4. **Function indices**: Enum of function indices for client-server matching

#### Integration Points
- **Module imports**: Add functions module to `code_generation/__init__.py`
- **Spec parsing**: Reuse existing function metadata extraction
- **Template system**: Extend existing Mako infrastructure

### Updated File Generation
```python
# Header/implementation outputs
generate_serializer_header(spec, templates_dir, os.path.join(include_out, "serializer.h"))
generate_serializer_impl(spec, templates_dir, os.path.join(src_out, "serializer.cpp"))
generate_deserializer_header(spec, templates_dir, os.path.join(include_out, "deserializer.h"))
generate_deserializer_impl(spec, templates_dir, os.path.join(src_out, "deserializer.cpp"))
generate_deserializer_in_place_header(spec, templates_dir, os.path.join(include_out, "deserializer_in_place.h"))
generate_deserializer_in_place_impl(spec, templates_dir, os.path.join(src_out, "deserializer_in_place.cpp"))

# Existing outputs (updated for header/impl split)
generate_struct_reflection(spec, templates_dir, os.path.join(include_out, "reflection_struct.h"))
generate_struct_fuzzer(spec, templates_dir, os.path.join(test_out, "fuzzer.cpp"), seed)

# New client outputs
if client_src_out:
    generate_client_functions_impl(spec, templates_dir, os.path.join(client_src_out, "generated/function_implementations.cpp"))
    generate_function_indices(spec, templates_dir, os.path.join(client_src_out, "generated/function_indices.h"))
```

## 7. Implementation Phases

### Phase 1: Header/Implementation Split
1. Refactor existing Mako templates to generate separate headers and implementations
2. Update build system to compile new source files
3. Test existing serialization functionality with new structure
4. Ensure no performance regression from split

### Phase 2: Enhanced Protocol & Transport
1. Implement MessageLockOut/MessageLockIn RAII classes with stream reference access
2. Implement Transport class with worker thread
3. Update protocol to use 2-byte message headers with FUNCTION_CALL/FUNCTION_RETURN distinction
4. Test basic custom message functionality

### Phase 3: In-Place Deserialization
1. Create in-place deserializer template for header/implementation split
2. Generate in-place functions alongside existing deserializers
3. Update code generation entry point
4. Test with existing fuzzer framework

### Phase 4: Function Generation Infrastructure
1. Create functions module in code generation
2. Implement client runtime template with proper scoped block usage
3. Generate function indices and implementations (implementation only, no headers)
4. Test with subset of core OpenXR functions

### Phase 5: Client Runtime Assembly
1. Implement loader negotiation manually
2. Create connection management with hardcoded parameters
3. Integrate generated functions with Transport using scoped MessageLock blocks
4. Build as .so compatible with OpenXR loader

## 8. Key Design Decisions Made

### Stream Access Pattern
- **Reference-based access**: MessageLockOut/MessageLockIn provide `get_stream()` returning references to underlying streams
- **RAII scoping**: Proper scoped blocks ensure MessageLock objects are destroyed to release locks
- **Move-only semantics**: Lock classes are move-only to prevent accidental lock duplication
- **Direct streaming**: Serialize calls write directly to Transport's stream without intermediate buffering

### Protocol Message Types
- **FUNCTION_CALL vs FUNCTION_RETURN**: Separate message types for calls and responses
- **Scoped messaging**: Each function call uses separate scoped blocks for sending and receiving
- **Thread safety**: Full mutex protection with worker thread for message dispatch

### Header/Implementation Organization
- **Compilation efficiency**: Split reduces compilation times and enables proper linking
- **Function visibility**: Remove static keywords, enable cross-module usage
- **Build integration**: Proper CMake integration for new source files

### Function Implementation Generation
- **No header generation**: Use openxr.h definitions directly
- **Implementation-only**: Generate only .cpp files for function implementations
- **Direct implementation**: Implement OpenXR functions directly rather than creating wrappers

## 9. Standards Library Analysis

### RAII Stream Access Assessment
The reference-based approach for MessageLockOut/MessageLockIn:
- **Simplicity**: Avoids complex stream inheritance or abstract interface creation
- **Compatibility**: Works directly with existing serialize/deserialize functions
- **Safety**: RAII scoping ensures locks are properly released
- **Performance**: No overhead from stream wrapping or virtual calls

### Design Validation
- **RAII compliance**: Automatic resource management via destructors
- **Exception safety**: Locks released even on exceptions
- **Thread safety**: Proper mutex protection for all stream operations
- **Modern C++ patterns**: Move-only semantics, clear lifetime management

## 10. Future Considerations (Not In Scope)
- Server-side implementation
- Graphics API integration (Vulkan/OpenGL ES)
- Connection redundancy and failure recovery
- Configuration file loading vs hardcoded parameters
- Performance optimization and benchmarking
- Extension-specific custom message protocols