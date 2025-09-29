cmake_minimum_required(VERSION 3.10)
project(xrtransport)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(XRTRANSPORT_BUILD_CLIENT "Build client" ON)
option(XRTRANSPORT_BUILD_SERVER "Build server" ON)

# Set C++ standard for the entire project
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories for the project
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
)

# Build the serialization static library
add_subdirectory(src)

# Build the test executables
add_subdirectory(test)