cmake_minimum_required(VERSION 3.15)

# Create serialization tests executable
add_executable(serialization_tests fuzzer.cpp)

target_include_directories(serialization_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/include
)

# Link with Catch2 and xrtransport_serialization
target_link_libraries(serialization_tests PRIVATE
    Catch2::Catch2WithMain
    xrtransport_serialization
)

if(MSVC)
    target_compile_options(serialization_tests PRIVATE /Zc:preprocessor)
endif()