# xrtransport

xrtransport is a project that aims to provide a transparent layer to interact with a remote [OpenXR](https://www.khronos.org/openxr/) runtime. It accomplishes this by providing a local runtime on the client that simply serializes all calls it receives, sends them to a dispatcher on the server, which deserializes the calls and executes them on the server's OpenXR runtime. Any returned data is also serialized on the host and sent back to the client, which then deserializes it and applies it, creating a completely transparent link to the server's OpenXR runtime. The idea is that a client should not be able to tell that it is using xrtransport and it should behave exactly as if it is running on the server.

Obviously, there are many parts of OpenXR that are impractical or impossible to do remotely in this way, e.g. graphics-related code. Compatibility with various graphics APIs should be implemented separately in [API layers](https://registry.khronos.org/OpenXR/specs/1.1/html/xrspec.html#fundamentals-api-layers), as the core xrtransport project focuses only on direct 1:1 communication.

The original goal and current focus is to enable applications built for the Meta Quest to run PC by running them in an Android emulator and using xrtransport to interface with the host's HMD hardware. However, this project is general enough to be useful for other things as well. Here is an example of what the setup would look like to run a Meta Quest application:

![xrtransport flow](https://github.com/AndrewSumsion/xrtransport/raw/master/doc/flowchart.png)

## Current Progress
- Working serializer/deserializer for OpenXR data

## To Do
- OpenXR Loader-compatible runtime for client
- Server program to interface with native OpenXR runtime
- API layers for Vulkan and OpenGL ES support
- API layers implementing other Meta extensions for compatibility

## Compiling
Right now, the majority of the code to be compiled is automatically generated. To run the generator, run this command:

```bash
python -m code_generation OpenXR-SDK/specification/registry/xr.xml include/xrtransport test
```

To run the fuzzer that tests the serialization/deserialization, compile and run the generated `fuzzer.cpp` file:

```bash
cd test
mkdir build && cd build
cmake ..
cmake --build .
./fuzzer
# Should print "Fuzzer passed"
```