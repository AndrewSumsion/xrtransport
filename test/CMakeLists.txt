cmake_minimum_required(VERSION 3.15)
project(xrtransport_tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(fuzzer fuzzer.cpp)

target_include_directories(fuzzer PRIVATE ../OpenXR-SDK/include ../include)
if(MSVC)
    target_compile_options(fuzzer PRIVATE /Zc:preprocessor)
endif()
