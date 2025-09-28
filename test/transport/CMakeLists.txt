cmake_minimum_required(VERSION 3.15)

# Create test infrastructure library
add_library(transport_test_infrastructure
    shared_buffer.cpp
    test_duplex_stream.cpp
)

target_include_directories(transport_test_infrastructure PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/asio/asio/include
)

# Link with pthread for threading support
find_package(Threads REQUIRED)
target_link_libraries(transport_test_infrastructure PUBLIC
    Threads::Threads
)

if(MSVC)
    target_compile_options(transport_test_infrastructure PRIVATE /Zc:preprocessor)
endif()

# Create transport tests executable
add_executable(transport_tests transport_tests.cpp)

target_include_directories(transport_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/asio/asio/include
)

# Link with Catch2, transport infrastructure, and xrtransport_transport
target_link_libraries(transport_tests PRIVATE
    Catch2::Catch2WithMain
    transport_test_infrastructure
    xrtransport_transport
    Threads::Threads
)

if(MSVC)
    target_compile_options(transport_tests PRIVATE /Zc:preprocessor)
endif()