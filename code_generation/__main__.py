import os
import argparse
from . import (
    get_xml_root,
    parse_spec,
    generate_serializer,
    generate_deserializer,
    generate_struct_reflection,
    generate_struct_fuzzer,
    TEMPLATES_DIR
)

parser = argparse.ArgumentParser(description="Generate serialization, deserialization, and test code based on OpenXR spec")
parser.add_argument("openxr_spec_path", help="Path to the xr.xml file for the OpenXR spec")
parser.add_argument("src_out", help="Path to the folder to place generated source code in")
parser.add_argument("test_out", help="Path to the folder to place generated test code in")
parser.add_argument("--fuzzer-seed", default=1337, type=int, help="Numerical seed to use for the fuzzer")
args = parser.parse_args()

xr_xml_path = args.openxr_spec_path
src_path = args.src_out
test_path = args.test_out
fuzzer_seed = args.fuzzer_seed

xml_root = get_xml_root(xr_xml_path)
spec = parse_spec(xml_root)

serializer_path = os.path.join(src_path, "serializer.h")
deserializer_path = os.path.join(src_path, "deserializer.h")
reflection_struct_path = os.path.join(src_path, "reflection_struct.h")
fuzzer_path = os.path.join(test_path, "fuzzer.cpp")

with open(serializer_path, "wb") as out:
    generate_serializer(spec, TEMPLATES_DIR, out)
with open(deserializer_path, "wb") as out:
    generate_deserializer(spec, TEMPLATES_DIR, out)
with open(reflection_struct_path, "wb") as out:
    generate_struct_reflection(spec, TEMPLATES_DIR, out)
with open(fuzzer_path, "wb") as out:
    generate_struct_fuzzer(spec, TEMPLATES_DIR, out, fuzzer_seed)