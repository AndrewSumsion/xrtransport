cmake_minimum_required(VERSION 3.15)

# Create transport tests executable with all sources compiled directly
add_executable(transport_tests
    transport_tests.cpp
    shared_buffer.cpp
    test_duplex_stream.cpp
)

target_include_directories(transport_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/asio/asio/include
)

# Find and link threading support
find_package(Threads REQUIRED)

# Link with Catch2, xrtransport_transport, and threading
target_link_libraries(transport_tests PRIVATE
    Catch2::Catch2WithMain
    xrtransport_transport
    Threads::Threads
)

if(MSVC)
    target_compile_options(transport_tests PRIVATE /Zc:preprocessor)
endif()