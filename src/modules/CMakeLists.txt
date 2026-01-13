cmake_minimum_required(VERSION 3.15)

add_subdirectory(handle_exchange_stub)

if(WIN32)
    add_subdirectory(handle_exchange_win32)
elseif(UNIX)
    add_subdirectory(handle_exchange_linux)
endif()

if(XRTRANSPORT_BUILD_MODULE_VULKAN2)
    add_subdirectory(vulkan2)
endif()