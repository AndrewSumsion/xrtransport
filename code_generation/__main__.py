import os
import sys
import argparse
import json
import random
from mako.lookup import TemplateLookup
from mako import exceptions
from . import (
    get_xml_root,
    parse_spec,
    generate_function_ids,
    update_function_ids,
    apply_function_ids,
    apply_modifiable_bindings,
    RandomStructGenerator
)

parser = argparse.ArgumentParser(description="Generate serialization, deserialization, and test code based on OpenXR spec")
parser.add_argument("openxr_spec_path", help="Path to the xr.xml file for the OpenXR spec")
parser.add_argument("--project_root", default=".", type=str, help="Path to the xrtransport project folder")
parser.add_argument("--fuzzer-seed", default=1337, type=int, help="Numerical seed to use for the fuzzer")
parser.add_argument("--regenerate-function-ids", action="store_true", help="Regenerate function ids from spec from scratch. Only use this for a full regenerate. Default behavior already accounts for changes in the spec.")
args = parser.parse_args()

xr_xml_path = args.openxr_spec_path
project_root = args.project_root
fuzzer_seed = args.fuzzer_seed
should_regenerate_function_ids = args.regenerate_function_ids

random.seed(fuzzer_seed)

xml_root = get_xml_root(xr_xml_path)
spec = parse_spec(xml_root)

# Update/regenerate function ids and save
function_ids_path = os.path.join(project_root, "function_ids.json")

if should_regenerate_function_ids:
    function_ids = generate_function_ids(spec)
else:
    if not os.path.exists(function_ids_path):
        print("Function ids json file does not exist yet. Try again with --regenerate-function-ids")
        sys.exit(1)
    with open(function_ids_path, "r") as function_ids_file:
        function_ids = json.load(function_ids_file)
    function_ids = update_function_ids(spec, function_ids)

with open(function_ids_path, "w") as function_ids_file:
    json.dump(function_ids, function_ids_file, indent=4)

apply_function_ids(spec, function_ids)

apply_modifiable_bindings(spec)

template_config = [
    ("client/runtime_header.mako", "src/client/runtime.h"),
    ("client/runtime_impl.mako", "src/client/runtime.cpp"),
    ("client/entry.mako", "src/client/entry.cpp"),
    ("server/function_handlers_header.mako", "src/server/function_handlers.h"),
    ("server/function_handlers_impl.mako", "src/server/function_handlers.cpp"),
    ("server/function_loader.mako", "include/xrtransport/server/function_loader.h"),
    ("structs/struct_size.mako", "src/common/serialization/struct_size.cpp"),
    ("structs/deserializer_header.mako", "include/xrtransport/serialization/deserializer.h"),
    ("structs/deserializer_impl.mako", "src/common/serialization/deserializer.cpp"),
    ("structs/serializer_header.mako", "include/xrtransport/serialization/serializer.h"),
    ("structs/serializer_impl.mako", "src/common/serialization/serializer.cpp"),
    ("test/serialization_tests.mako", "test/serialization/fuzzer.cpp", {"struct_generator": RandomStructGenerator(spec)})
]

def generate_template(project_root, spec, config_row):
    # parse config row
    src, dest = config_row[:2]
    if len(config_row) > 2:
        params = config_row[2]
    else:
        params = {}

    # setup paths
    src = os.path.join(project_root, "code_generation", "templates", src)
    dest = os.path.join(project_root, dest)
    src_dir = os.path.dirname(src)
    dest_dir = os.path.dirname(dest)
    templates_dir = os.path.join(project_root, "code_generation", "templates")

    # ensure destination directory exists
    os.makedirs(dest_dir, exist_ok=True)

    # include spec by default
    params["spec"] = spec

    template_lookup = TemplateLookup(directories=[templates_dir, src_dir])
    template = template_lookup.get_template(os.path.basename(src))

    try:
        rendered = template.render(**params)
    except:
        print(f"Warning! An exception occurred rendering template {src}")
        print(exceptions.text_error_template().render())
        return

    with open(dest, "wb") as out:
        out.write(rendered.encode())

for config_row in template_config:
    generate_template(project_root, spec, config_row)