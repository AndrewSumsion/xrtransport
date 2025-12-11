# xrtransport

xrtransport is a project that aims to provide a transparent layer to interact with a remote [OpenXR](https://www.khronos.org/openxr/) runtime. It accomplishes this by providing a local runtime on the client that simply serializes all calls it receives, sends them to a dispatcher on the server, which deserializes the calls and executes them on the server's OpenXR runtime. Any returned data is also serialized on the host and sent back to the client, which then deserializes it and applies it, creating a completely transparent link to the server's OpenXR runtime. The idea is that a client should not be able to tell that it is using xrtransport and it should behave exactly as if it is running on the server.

Obviously, there are many parts of OpenXR that are impractical or impossible to do remotely in this way, e.g. graphics-related code. Compatibility with various graphics APIs should be implemented separately in [API layers](https://registry.khronos.org/OpenXR/specs/1.1/html/xrspec.html#fundamentals-api-layers) paired with server modules (see below), as the core xrtransport project focuses only on direct 1:1 communication.

The original goal and current focus is to enable applications built for the Meta Quest to run PC by running them in an Android emulator and using xrtransport to interface with the host's HMD hardware. However, this project is general enough to be useful for other things as well. Here is an example of what the setup would look like to run a Meta Quest application:

![xrtransport flow](https://github.com/AndrewSumsion/xrtransport/raw/master/doc/flowchart.png)

## API Layers + Server Modules
OpenXR already provides a clean mechanism for adding extra functionality on top of an OpenXR runtime in the form of API layers (in the case of xrtransport, the OpenXR runtime in question is the xrtransport client). However, in order for API layers to implement useful things on xrtransport, they need a way to talk to and interact with the system running the xrtransport server and interfacing with the real OpenXR runtime. The xrtransport server offers provides an API for server modules in order to accomplish this. API layers can send custom messages along xrtransport's stream, and server modules can register handlers to handle them and respond to them. Vice versa is also possible but probably less useful. For example, an API layer could intercept a call to create a Vulkan swapchain, send a message to the server module to create the swapchain on the real XR runtime, then the server module responds with importable handle(s) that the API layer uses to create its own swapchain on shared GPU memory.

API layers on the client are discovered and used by the OpenXR loader by a standard mechanism: [OpenXR™ Loader - Design and Operation](https://registry.khronos.org/OpenXR/specs/1.0/loader.html)  
Access to xrtransport's stream can be retrieved via a call to `xrtransportGetTransport`, accessible via `xrGetInstanceProcAddr` (no extension needed). See include/xrtransport/client/api_layer_support.h

Server modules are loaded as dynamic libraries from the "modules" folder next to the xrtransport server executable. They must implement the API defined in include/xrtransport/server/module_interface.h

API layers and server modules that want to interact with xrtransport's stream need to link with the xrtransport_transport dynamic library, which has a C API (include/xrtransport/transport/transport_c_api.h), and a header-only C++ wrapper (include/xrtransport/transport/transport.h)

## Current Progress
- Working serializer/deserializer for OpenXR data
- OpenXR Loader-compatible runtime for client
- Server program to interface with native OpenXR runtime

## To Do
- Comprehensive testing of existing functionality and expansion of extension support
- API layers for Vulkan and OpenGL ES support
- API layers implementing other Meta extensions for compatibility

## Compiling
Much of xrtransport's code is automatically generated based off the OpenXR spec. To run the generator, run `./regenerate.sh` on Linux or `.\regenerate.bat` on Windows. You must have Python3 and the Mako package installed.

Once you have regenerated (if needed), you can compile the project with CMake:
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

This will build the server executable and the client OpenXR runtime:
- server: build/src/server/xrtransport_server_main
- client: build/src/client/libxrtransport_client.so
  - manifest at build/src/client/xrtransport_client_manifest-&lt;config&gt;.json

Several tests will also be built, including:
- A fuzzer for the serialization system (build/test/serialization/serialization_tests)
- Unit tests for the Transport system (build/test/transport/transport_tests)
- End-to-end testing of the Transport system over TCP (build/test/transport/transport_server and build/test/transport/transport_integration_tests)
- Note: on Windows you will need to copy build/src/transport/&lt;config&gt;/xrtransport_transport.dll next to the test executables