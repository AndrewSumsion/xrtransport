# Transport module CMakeLists.txt

# Create static library for xrtransport transport
add_library(xrtransport_transport SHARED
    transport_impl.cpp
    transport_c_api.cpp
)

# Set target properties for transport
target_include_directories(xrtransport_transport PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/external/asio/asio/include
)

target_compile_definitions(xrtransport_transport PRIVATE XRTRANSPORT_EXPORT_API)