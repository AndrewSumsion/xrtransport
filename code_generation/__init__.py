import os
from .spec_parser import get_xml_root, parse_spec
from .structs import generate_serializer_header, generate_serializer_impl, generate_deserializer_header, generate_deserializer_impl
from .functions import generate_function_entry_points
from .reflection import generate_struct_reflection
from .test import generate_struct_fuzzer
from .function_ids import generate_function_ids, update_function_ids, apply_function_ids
from .bindings import collect_modifiable_bindings, apply_modifiable_bindings, BindingLoop

PACKAGE_DIR = os.path.relpath(os.path.dirname(os.path.realpath(__file__)), os.getcwd())
TEMPLATES_DIR = os.path.join(PACKAGE_DIR, "templates")