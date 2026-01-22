#!/bin/bash
# SPDX-License-Identifier: LGPL-3.0-or-later

# Script to regenerate serialization/deserialization code from OpenXR specification
# This script must be run whenever:
# - The OpenXR specification changes
# - Custom struct handling is modified
# - New extensions are added

# Generate all code from OpenXR specification
python3 -m code_generation \
    external/OpenXR-SDK/specification/registry/xr.xml \
    "$@"
