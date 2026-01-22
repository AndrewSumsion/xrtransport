# xrtransport

xrtransport is a project that aims to provide a transparent layer for applications to interact with a remote [OpenXR](https://www.khronos.org/openxr/) runtime. It accomplishes this by providing a local runtime on the client that simply serializes all calls it receives, sends them to a dispatcher on the server, which deserializes the calls and executes them on the server's OpenXR runtime. Any returned data is also serialized on the host and sent back to the client, which then deserializes it and applies it, creating a completely transparent link to the server's OpenXR runtime. The idea is that a client should not be able to tell that it is using xrtransport and it should behave exactly as if it is running on the server.

Obviously, there are many parts of OpenXR that are impractical or impossible to do remotely in this way, e.g. graphics-related code. Compatibility with various graphics APIs is implemented separately in modules (see below), as the core xrtransport project focuses only on direct 1:1 communication. There is currently support for Vulkan, with OpenGL ES support planned.

The original goal and current focus is to enable applications built for the Meta Quest to run on PCVR by running them in an Android emulator and using xrtransport to interface with the host's HMD hardware. Particularly, the current focus is to use Waydroid on Linux, though support for an Android emulator on Windows is planned.

Here is a diagram of how an OpenXR app can use xrtransport to talk to an OpenXR runtime:

![xrtransport flow](https://github.com/AndrewSumsion/xrtransport/raw/master/doc/flowchart.png)

## Module System
xrtransport offers a mechanism for extension called modules. There are two kinds of modules: client modules and server modules. Client modules can implement OpenXR extensions (like graphics support) and interact with corresponding server modules via custom RPC calls. Client modules are heavily inspired by OpenXR API Layers but are more integrated into xrtransport. Server modules can register handlers to respond to client modules and interact with the OpenXR runtime. An example of this mechanism in action is Vulkan support. A client module intercepts graphics-related calls like creating a swapchain or acquiring a swapchain image and coordinates with a corresponding server module that provides staging images for the application to render into which are copied onto the real runtime's swapchain images.

Client modules are loaded as dynamic libraries from the same folder as the xrtransport client library. They must implement the API defined in `include/xrtransport/server/module_interface.h`

Server modules are loaded as dynamic libraries from the same folder as the xrtransport server executable. They must implement the API defined in `include/xrtransport/server/module_interface.h`

Modules that want to interact with xrtransport's stream need to link with the xrtransport_transport dynamic library, which has a C API (include/xrtransport/transport/transport_c_api.h), and a header-only C++ wrapper (include/xrtransport/transport/transport.h)

## Current Progress
- Working serializer/deserializer for OpenXR data
- OpenXR Loader-compatible runtime for client
- Server program to interface with native OpenXR runtime
- Module for Vulkan support
- Initial support for Waydroid client

## To Do
- Module for OpenGL ES support
- Support for Windows on AOSP Android Emulator
- Module(s) implementing various Meta/Android-specific OpenXR extensions
- Comprehensive testing of existing functionality and expansion of extension support

## Compiling
Much of xrtransport's code is automatically generated based off the OpenXR spec. If you have modified any templates, you must regenerate it. To run the generator, run `./regenerate.sh` on Linux or `.\regenerate.bat` on Windows. You must have Python3 and the Mako package installed.

Once you have regenerated (if needed), you can compile the project with CMake:
```bash
cmake --preset default-debug
cmake --build --preset default-debug --target install
```

This will build the server executable and the client OpenXR runtime:
- server: `build/default/debug/install/server/xrtransport_server_main`
- client: `build/default/debug/install/client/libxrtransport_client.so`
  - manifest at `build/default/debug/install/client/xrtransport_client_manifest.json`

Several tests will also be built, including:
- A fuzzer for the serialization system:
  - `build/default/debug/test/serialization/serialization_tests`
- Unit tests for the Transport system
  - `build/default/debug/test/transport/transport_tests`
- End-to-end testing of the Transport system over TCP
  - `build/default/debug/test/transport/transport_server` and
  - `build/default/debug/test/transport/transport_integration_tests`
- Note: on Windows you will need to copy `build/default/debug/src/transport/<config>/xrtransport_transport.dll` next to the test executables
