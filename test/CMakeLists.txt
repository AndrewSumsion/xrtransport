cmake_minimum_required(VERSION 3.15)
project(xrtransport_tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Catch2
add_subdirectory(${CMAKE_SOURCE_DIR}/Catch2 ${CMAKE_BINARY_DIR}/Catch2)

# Create single test executable
add_executable(unit_tests fuzzer.cpp)

target_include_directories(unit_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/include
)

# Link with Catch2 and xrtransport_serialization
target_link_libraries(unit_tests PRIVATE
    Catch2::Catch2WithMain
    xrtransport_serialization
)

if(MSVC)
    target_compile_options(unit_tests PRIVATE /Zc:preprocessor)
endif()

# Enable CTest integration
include(CTest)
