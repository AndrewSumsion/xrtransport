# Input: INPUT_PATH, OUTPUT_PATH, LIBRARY_PATH
if(WIN32)
# Necessary because LoadLibraryEx, which the OpenXR loader uses, doesn't play nice with forward slashes
string(REPLACE "/" "\\\\" LIBRARY_PATH ${LIBRARY_PATH})
endif()

configure_file(
    ${INPUT_PATH}
    ${OUTPUT_PATH}
    @ONLY
)