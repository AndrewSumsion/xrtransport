cmake_minimum_required(VERSION 3.10)

project(xrtransport_client)

# Client-side OpenXR transport implementation
message(STATUS "Building xrtransport client components")

# Client library
add_library(xrtransport_client STATIC
    runtime.cpp
    dispatch.cpp
)

# Dependencies
target_link_libraries(xrtransport_client
    xrtransport_transport
    xrtransport_serialization
)

# Include directories
target_include_directories(xrtransport_client PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/asio/asio/include
)

# C++ standard
set_target_properties(xrtransport_client PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

target_compile_features(xrtransport_client PUBLIC cxx_std_17)
