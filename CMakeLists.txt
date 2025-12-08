cmake_minimum_required(VERSION 3.10)
project(xrtransport)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(XRTRANSPORT_BUILD_CLIENT "Build client" ON)
option(XRTRANSPORT_BUILD_SERVER "Build server" ON)

if (XRTRANSPORT_BUILD_SERVER)
    # Server needs OpenXR loader to be built
    add_subdirectory(external/OpenXR-SDK EXCLUDE_FROM_ALL)
endif()

# Set C++ standard for the entire project
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For spdlog
if(MSVC)
    add_compile_options(/utf-8)
    # Enable up to Windows 10 features
    add_compile_definitions(_WIN32_WINNT=0x0A00)
endif()

# Add include directories for the project
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/external/spdlog/include
)

# Build with PIC so that static libraries can be linked into shared libraries
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Build xrtransport
add_subdirectory(src)

# Build the test executables
add_subdirectory(test)