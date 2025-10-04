#include "xrtransport/serialization/struct_size.h"

#include "xrtransport/reflection/reflection_struct.h"
#include "xrtransport/fatal_error.h"

#include <unordered_map>
#include <cstddef>

namespace xrtransport {

#define HANDLE_STRUCT_XR(struct_name, XR, structure_type, ...) {structure_type, sizeof(struct_name)},
#define HANDLE_STRUCT_XR_CUSTOM(struct_name, XR_CUSTOM, structure_type, ...) {structure_type, sizeof(struct_name)},
#define HANDLE_STRUCT_PLAIN(struct_name, PLAIN, ...) // no-op
#define HANDLE_STRUCT_CUSTOM(struct_name, CUSTOM, ...) // no-op
#define HANDLE_STRUCT_XR_HEADER(struct_name, XR_HEADER, ...) // no-op
#define HANDLE_STRUCT(struct_name, struct_type, ...) HANDLE_STRUCT_##struct_type(struct_name, struct_type, ##__VA_ARGS__)

std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {
    XRT_STRUCT_LIST_ALL(HANDLE_STRUCT)
};

std::size_t size_lookup(XrStructureType struct_type) {
    if (size_lookup_table.find(struct_type) == size_lookup_table.end()) {
        fatal_error("Unknown XrStructureType in size_lookup: " + std::to_string(struct_type));
    }
    return size_lookup_table.at(struct_type);
}

} // namespace xrtransport