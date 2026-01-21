# Running xrtransport with Waydroid

xrtransport supports building the client runtime for Android, and this can be used to supply an OpenXR runtime to apps running in Waydroid. The gist of how it works is that it communicates over a Unix socket bind-mounted into /data/local/tmp/xrtransport in Waydroid's filesystem, and shares GPU memory by sending FDs via SCM_RIGHTS over another Unix socket in the same directory dedicated to handle exchange. This is possible because Waydroid is a container instead of a virtual machine, and shares the same kernel as the host system including the graphics driver.

## Compiling the client runtime libraries

CMake presets are specified to build the client's libraries for Android (e.g. `waydroid-x86_64-debug`). You must have installed the same NDK version specified in the preset, e.g. `29.0.14206865`, or you can change it and attempt to build with a different NDK. In order to use these libraries to build an APK, you must execute the CMake install process which puts them in the right place. Example:

```bash
cmake --preset waydroid-x86_64-debug
cmake --build --preset waydroid-x86_64-debug-build --target install
```

## Building the client runtime APK

Now that these libraries are in place, you must build the APK to install in Waydroid. Open `src/client/build.gradle` in Android Studio and build the APK. Note that this only bundles the already-compiled libraries, and if you want to recompile the client runtime you must do the prior step first. Once you have built the APK, you can install it into Waydroid, but it is not useable yet until you complete the next step.

## Install the OpenXR Runtime Broker

The runtime currently depends on the Khronos-provided [OpenXR Runtime Broker](https://play.google.com/store/apps/details?id=org.khronos.openxr.runtime_broker) to be discovered by OpenXR applications. Install it, open it, and select "xrtransport Client" as the active OpenXR runtime.

I plan to eventually create an option to build an APK that provides its own ContentProvider if you don't want to install the runtime broker and only care about having one runtime installed.

## Client Configuration

The client depends on Android system properties to figure out how to talk to the server.

```bash
waydroid prop set xrtransport.transport_type unix
waydroid prop set xrtransport.unix_path /data/local/tmp/xrtransport/transport.sock
```

You must ensure that whatever folder you tell the server to use for the transport socket is bind-mounted into Waydroid's filesystem. For example, if you are starting the server with `xrtransport_server_main unix /tmp/xrtransport/transport.sock`, you must bind mount `/tmp/xrtransport` into `/data/local/tmp` in Waydroid's filesystem:

```bash
sudo mount --bind /tmp/xrtransport ~/.local/share/waydroid/data/local/tmp/xrtransport
```

## Server Configuration

In order to exchange FDs to share graphics resources, the handle exchange module on the client needs to know how to connect. It does not automatically look in the same folder as the transport Unix socket. Instead, it uses a path supplied to it by the handle exchange module on the server. These are configured with environment variables when launching the server. For example:

```bash
export XRTP_SERVER_FD_EXCHANGE_PATH="/tmp/xrtransport/fd_exchange.sock"
export XRTP_CLIENT_FD_EXCHANGE_PATH="/data/local/tmp/xrtransport/fd_exchange.sock"
./xrtransport_server_main unix /tmp/xrtransport/transport.sock
```

## Install and run an app

Now everything is in place to run an OpenXR app. Simply install it and launch it while the server is running on the host, and it will be able to interact with the host OpenXR runtime.

## Limitations

Note that there are several limitations currently:
- ABI mismatch is likely unless you are running on an ARM64 machine. If you are running on x86_64 and the app is compiled for ARM64, you will need to install a translation layer like libhoudini or libndk, and you will need to compile xrtransport libraries for arm64-v8a before building the xrtransport client APK.
- Only Vulkan is supported right now, but OpenGL ES support is planned.
