# Transport module CMakeLists.txt

# Create static library for xrtransport transport
add_library(xrtransport_transport STATIC
    transport.cpp
)

# Set target properties for transport
target_include_directories(xrtransport_transport PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/asio/asio/include
)

# Set C++ standard for transport
set_target_properties(xrtransport_transport PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# Export the transport target
target_compile_features(xrtransport_transport PUBLIC cxx_std_17)