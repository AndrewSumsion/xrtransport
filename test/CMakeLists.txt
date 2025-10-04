cmake_minimum_required(VERSION 3.15)
project(xrtransport_tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Catch2
add_subdirectory(${CMAKE_SOURCE_DIR}/external/Catch2 ${CMAKE_BINARY_DIR}/Catch2)

# Enable CTest integration
include(CTest)

# Add test subdirectories
add_subdirectory(serialization)
add_subdirectory(transport)
