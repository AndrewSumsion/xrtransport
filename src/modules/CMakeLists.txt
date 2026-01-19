cmake_minimum_required(VERSION 3.15)

if(WIN32)
    add_subdirectory(handle_exchange_win32)
elseif(UNIX)
    add_subdirectory(handle_exchange_linux)
endif()

option(XRTRANSPORT_BUILD_MODULE_VULKAN2 "Build Vulkan2 Module" ON)

if(XRTRANSPORT_BUILD_MODULE_VULKAN2)
    add_subdirectory(vulkan2)
endif()