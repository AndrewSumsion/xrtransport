import os
import argparse
from . import (
    get_xml_root,
    parse_spec,
    generate_serializer_header,
    generate_serializer_impl,
    generate_deserializer_header,
    generate_deserializer_impl,
    generate_struct_reflection,
    generate_struct_fuzzer,
    TEMPLATES_DIR
)

parser = argparse.ArgumentParser(description="Generate serialization, deserialization, and test code based on OpenXR spec")
parser.add_argument("openxr_spec_path", help="Path to the xr.xml file for the OpenXR spec")
parser.add_argument("include_out", help="Path to the folder to place generated header files in")
parser.add_argument("src_out", help="Path to the folder to place generated C++ implementation files in")
parser.add_argument("test_out", help="Path to the folder to place generated test code in")
parser.add_argument("--fuzzer-seed", default=1337, type=int, help="Numerical seed to use for the fuzzer")
args = parser.parse_args()

xr_xml_path = args.openxr_spec_path
include_path = args.include_out
src_path = args.src_out
test_path = args.test_out
fuzzer_seed = args.fuzzer_seed

xml_root = get_xml_root(xr_xml_path)
spec = parse_spec(xml_root)

# Create output directories if they don't exist
os.makedirs(os.path.join(include_path, "serialization"), exist_ok=True)
os.makedirs(os.path.join(include_path, "reflection"), exist_ok=True)
os.makedirs(os.path.join(src_path, "serialization"), exist_ok=True)
os.makedirs(os.path.join(test_path, "serialization"), exist_ok=True)

serializer_header_path = os.path.join(include_path, "serialization", "serializer.h")
serializer_impl_path = os.path.join(src_path, "serialization", "serializer.cpp")
deserializer_header_path = os.path.join(include_path, "serialization", "deserializer.h")
deserializer_impl_path = os.path.join(src_path, "serialization", "deserializer.cpp")
reflection_struct_path = os.path.join(include_path, "reflection", "reflection_struct.h")
serialization_tests_path = os.path.join(test_path, "serialization", "fuzzer.cpp")

with open(serializer_header_path, "wb") as out:
    generate_serializer_header(spec, TEMPLATES_DIR, out)
with open(serializer_impl_path, "wb") as out:
    generate_serializer_impl(spec, TEMPLATES_DIR, out)
with open(deserializer_header_path, "wb") as out:
    generate_deserializer_header(spec, TEMPLATES_DIR, out)
with open(deserializer_impl_path, "wb") as out:
    generate_deserializer_impl(spec, TEMPLATES_DIR, out)
with open(reflection_struct_path, "wb") as out:
    generate_struct_reflection(spec, TEMPLATES_DIR, out)
with open(serialization_tests_path, "wb") as out:
    generate_struct_fuzzer(spec, TEMPLATES_DIR, out, fuzzer_seed)