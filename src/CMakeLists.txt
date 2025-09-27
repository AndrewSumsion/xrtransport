cmake_minimum_required(VERSION 3.10)

# Create static library for xrtransport serialization
add_library(xrtransport_serialization STATIC
    xrtransport/generated/serializer.cpp
    xrtransport/generated/deserializer.cpp
    xrtransport/generated/deserializer_in_place.cpp
    xrtransport/custom_serializer.cpp
    xrtransport/custom_deserializer.cpp
    xrtransport/custom_deserializer_in_place.cpp
)

# Set target properties
target_include_directories(xrtransport_serialization PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/OpenXR-SDK/include
)

# Set C++ standard
set_target_properties(xrtransport_serialization PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# Export the target for use by other parts of the project
target_compile_features(xrtransport_serialization PUBLIC cxx_std_17)