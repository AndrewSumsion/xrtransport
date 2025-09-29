@echo off

REM Script to regenerate serialization/deserialization code from OpenXR specification
REM This script must be run whenever:
REM - The OpenXR specification changes
REM - Custom struct handling is modified
REM - New extensions are added

REM Generate all code from OpenXR specification
python -m code_generation ^
    OpenXR-SDK/specification/registry/xr.xml ^
    function_ids.json ^
    include/xrtransport ^
    src/xrtransport ^
    test ^
    %*