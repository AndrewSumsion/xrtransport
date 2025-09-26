import os
from .spec_parser import get_xml_root, parse_spec
from .structs import generate_serializer, generate_deserializer
from .reflection import generate_struct_reflection
from .test import generate_struct_fuzzer

PACKAGE_DIR = os.path.relpath(os.path.dirname(os.path.realpath(__file__)), os.getcwd())
TEMPLATES_DIR = os.path.join(PACKAGE_DIR, "templates")