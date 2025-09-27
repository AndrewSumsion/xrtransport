# Comprehensive Client-Side OpenXR Implementation Plan

## Project Context
xrtransport is a transparent remote OpenXR runtime system that enables OpenXR applications to run remotely through client-server architecture with automatic serialization/deserialization. Current focus is on implementing the client-side components.

## Current State Analysis
- **✅ Header/Implementation Split**: Successfully completed - serialization code now properly separated into headers and implementations with static library linking
- **✅ In-Place Deserialization**: Successfully integrated as `bool in_place` parameter in existing `deserialize()` functions, eliminating need for separate function set
- **Existing serialization**: Auto-generated `serialize(const T*, std::ostream&)` and `deserialize(T*, std::istream&, bool in_place = false)` functions for all OpenXR structs
- **Protocol**: Binary protocol with function calls as `[uint32_t function_index][serialized_args...]`
- **Code generation**: Modular architecture with `structs/`, `reflection/`, `test/` modules using Mako templates
- **File structure**: Proper header/implementation separation with generated files in `include/xrtransport/generated/` and `src/xrtransport/generated/`
- **Build system**: Static library `libxrtransport_serialization.a` with CMake integration
- **Missing**: Client runtime, enhanced protocol, function call generation

## 1. Enhanced Protocol with Custom Messages

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
    std::recursive_mutex stream_mutex;
    std::map<uint16_t, std::function<void(MessageLockIn)>> handlers;

public:
    MessageLockOut start_message(uint16_t header);
    void register_handler(uint16_t header, std::function<void(MessageLockIn)> handler);
    MessageLockIn await_message(uint16_t header);
    void start_worker_thread();
    void stop_worker_thread();
};
```

#### RAII Stream Lock Classes
**Design Decision**: Simple structs with public const members for direct stream access. Stream references are const (immutable binding), lock is const to prevent reassignment. Constructors take moved unique_lock for flexible lock management.

```cpp
struct MessageLockOut {
    const std::unique_lock<std::recursive_mutex> lock;
    std::ostream& stream;

    MessageLockOut(std::unique_lock<std::recursive_mutex>&& lock, std::ostream& stream);
    ~MessageLockOut(); // Flush stream, release lock
    MessageLockOut(const MessageLockOut&) = delete;
    MessageLockOut& operator=(const MessageLockOut&) = delete;
    MessageLockOut(MessageLockOut&&) = default;
    MessageLockOut& operator=(MessageLockOut&&) = default;
};

struct MessageLockIn {
    const std::unique_lock<std::recursive_mutex> lock;
    std::istream& stream;

    MessageLockIn(std::unique_lock<std::recursive_mutex>&& lock, std::istream& stream);
    ~MessageLockIn(); // Release lock
    MessageLockIn(const MessageLockIn&) = delete;
    MessageLockIn& operator=(const MessageLockIn&) = delete;
    MessageLockIn(MessageLockIn&&) = default;
    MessageLockIn& operator=(MessageLockIn&&) = default;
};
```

### Thread Safety Architecture
- **Recursive mutex**: Allows same thread to acquire lock multiple times (e.g., send message → await response → send another message)
- **await_message()**: Acquires stream lock, reads headers until finding requested type, dispatches others to handlers
- **Worker thread**: Handles messages when await_message() is not active; await_message() takes over this functionality when called
- **Handler functions**: Receive MessageLockIn objects instead of raw stream references
- **Lock management**: MessageLock constructors accept moved unique_lock for flexible lock acquisition patterns

## 2. OpenXR Function Call Generation

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
        msg_out.stream << FUNCTION_INDEX_XR_FUNCTION_NAME;
        serialize(&param1, msg_out.stream);
        serialize(param2, msg_out.stream);
        serialize(param3, msg_out.stream);
    } // MessageLockOut destructor releases lock

    // Receive response
    XrResult result;
    {
        auto msg_in = transport.await_message(FUNCTION_RETURN);
        msg_in.stream >> result;

        // Deserialize modified arguments in-place
        deserialize(param2, msg_in.stream, true);
        deserialize(param3, msg_in.stream, true);
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

## 3. Client Runtime Infrastructure

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

## 4. Code Generation Integration

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
1. **Header/Implementation split**: Generate both .h and .cpp files for serializers/deserializers (with in-place support integrated)
2. **Client function implementations**: New output to `<client_src_out>/generated/`
3. **Function indices**: Enum of function indices for client-server matching

#### Integration Points
- **Module imports**: Add functions module to `code_generation/__init__.py`
- **Spec parsing**: Reuse existing function metadata extraction
- **Template system**: Extend existing Mako infrastructure

### Updated File Generation
```python
# Header/implementation outputs (in-place deserialization integrated via bool flag)
generate_serializer_header(spec, templates_dir, os.path.join(include_out, "serializer.h"))
generate_serializer_impl(spec, templates_dir, os.path.join(src_out, "serializer.cpp"))
generate_deserializer_header(spec, templates_dir, os.path.join(include_out, "deserializer.h"))
generate_deserializer_impl(spec, templates_dir, os.path.join(src_out, "deserializer.cpp"))

# Existing outputs (updated for header/impl split)
generate_struct_reflection(spec, templates_dir, os.path.join(include_out, "reflection_struct.h"))
generate_struct_fuzzer(spec, templates_dir, os.path.join(test_out, "fuzzer.cpp"), seed)

# New client outputs
if client_src_out:
    generate_client_functions_impl(spec, templates_dir, os.path.join(client_src_out, "generated/function_implementations.cpp"))
    generate_function_indices(spec, templates_dir, os.path.join(client_src_out, "generated/function_indices.h"))
```

## 5. Implementation Phases

### Phase 1: Enhanced Protocol & Transport
1. Implement MessageLockOut/MessageLockIn RAII classes with stream reference access
2. Implement Transport class with worker thread
3. Update protocol to use 2-byte message headers with FUNCTION_CALL/FUNCTION_RETURN distinction
4. Test basic custom message functionality

### Phase 2: Function Generation Infrastructure
1. Create functions module in code generation
2. Implement client runtime template with proper scoped block usage
3. Generate function indices and implementations (implementation only, no headers)
4. Test with subset of core OpenXR functions

### Phase 3: Client Runtime Assembly
1. Implement loader negotiation manually
2. Create connection management with hardcoded parameters
3. Integrate generated functions with Transport using scoped MessageLock blocks
4. Build as .so compatible with OpenXR loader

## 6. Key Design Decisions Made

### Stream Access Pattern
- **Direct member access**: MessageLockOut/MessageLockIn provide direct access to stream via const reference members
- **RAII scoping**: Proper scoped blocks ensure MessageLock objects are destroyed to release locks
- **Move-only semantics**: Lock classes are move-only to prevent accidental lock duplication
- **Flexible lock management**: Constructors accept moved unique_lock for custom lock acquisition patterns
- **Direct streaming**: Serialize calls write directly to Transport's stream without intermediate buffering

### Thread Safety Design
- **Recursive mutex**: Enables nested message operations within same thread (send → await → send)
- **await_message() takes control**: When called, takes over message reading from worker thread until target message found
- **Handler integration**: Non-target messages automatically dispatched to registered handlers during await_message()
- **No lock contention**: Worker thread and await_message() coordinate through lock acquisition rather than complex synchronization

### Protocol Message Types
- **FUNCTION_CALL vs FUNCTION_RETURN**: Separate message types for calls and responses
- **Scoped messaging**: Each function call uses separate scoped blocks for sending and receiving
- **Handler-based dispatch**: Unexpected messages automatically routed to appropriate handlers

### Header/Implementation Organization
- **Compilation efficiency**: Split reduces compilation times and enables proper linking
- **Function visibility**: Remove static keywords, enable cross-module usage
- **Build integration**: Proper CMake integration for new source files

### Function Implementation Generation
- **No header generation**: Use openxr.h definitions directly
- **Implementation-only**: Generate only .cpp files for function implementations
- **Direct implementation**: Implement OpenXR functions directly rather than creating wrappers

## 7. Standards Library Analysis

### RAII Stream Access Assessment
The struct-based approach with const member access for MessageLockOut/MessageLockIn:
- **Simplicity**: Direct member access eliminates getter functions and complexity
- **Compatibility**: Works directly with existing serialize/deserialize functions
- **Safety**: RAII scoping ensures locks are properly released, const members prevent accidental reassignment
- **Performance**: No overhead from function calls, stream wrapping, or virtual calls
- **Flexibility**: Moved unique_lock constructor enables custom lock management patterns

### Recursive Mutex Benefits
- **Nested operations**: Same thread can send message, await response, send another message without deadlock
- **Handler isolation**: await_message() can safely dispatch to handlers that may need to send messages
- **Simplified design**: Eliminates complex worker thread coordination mechanisms

### Design Validation
- **RAII compliance**: Automatic resource management via destructors
- **Exception safety**: Locks released even on exceptions
- **Thread safety**: Recursive mutex protection for all stream operations with flexible acquisition patterns
- **Modern C++ patterns**: Move-only semantics, const correctness, clear lifetime management

## 8. Future Considerations (Not In Scope)
- Server-side implementation
- Graphics API integration (Vulkan/OpenGL ES)
- Connection redundancy and failure recovery
- Configuration file loading vs hardcoded parameters
- Performance optimization and benchmarking
- Extension-specific custom message protocols