cmake_minimum_required(VERSION 3.15)

if(WIN32)
    add_subdirectory(handle_exchange_win32)
elseif(UNIX)
    add_subdirectory(handle_exchange_linux)
endif()

option(XRTRANSPORT_BUILD_MODULE_VULKAN "Build Vulkan Module" ON)

if(XRTRANSPORT_BUILD_MODULE_VULKAN)
    add_subdirectory(vulkan)
endif()