#!/bin/bash

# Script to regenerate serialization/deserialization code from OpenXR specification
# This script must be run whenever:
# - The OpenXR specification changes
# - Custom struct handling is modified
# - New extensions are added

# Generate all code from OpenXR specification
python3 -m code_generation \
    OpenXR-SDK/specification/registry/xr.xml \
    "$@"
