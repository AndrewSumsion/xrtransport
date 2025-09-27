cmake_minimum_required(VERSION 3.15)
project(xrtransport_tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(fuzzer fuzzer.cpp)
add_executable(fuzzer_in_place fuzzer_in_place.cpp)

target_include_directories(fuzzer PRIVATE
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/include
)

target_include_directories(fuzzer_in_place PRIVATE
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/include
)

# Link with the xrtransport_serialization static library
target_link_libraries(fuzzer PRIVATE xrtransport_serialization)
target_link_libraries(fuzzer_in_place PRIVATE xrtransport_serialization)

if(MSVC)
    target_compile_options(fuzzer PRIVATE /Zc:preprocessor)
    target_compile_options(fuzzer_in_place PRIVATE /Zc:preprocessor)
endif()
