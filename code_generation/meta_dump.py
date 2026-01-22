# SPDX-License-Identifier: LGPL-3.0-or-later

import sys
from spec_parser import get_xml_root, parse_spec, XrStruct, XrFunction, XrParam
import json

def main():
    if len(sys.argv) < 2:
        print("1 arguments required: xr.xml path")
        return
    xr_xml_path = sys.argv[1]
    xml_root = get_xml_root(xr_xml_path)
    spec = parse_spec(xml_root)
    with open("functions.json", "w") as functions_out:
        functions_out.write(json.dumps(spec.functions, default=custom_json_serializer, indent=4))
    with open("function_aliases.json", "w") as function_aliases_out:
        function_aliases_out.write(json.dumps(spec.function_aliases, indent=4))
    with open("structs.json", "w") as structs_out:
        structs_out.write(json.dumps(spec.structs, default=custom_json_serializer, indent=4))
    with open("supported_types.json", "w") as supported_types_out:
        supported_types_out.write(json.dumps(spec.supported_types, indent=4))

def custom_json_serializer(obj):
    if not isinstance(obj, XrStruct) and not isinstance(obj, XrFunction) and not isinstance(obj, XrParam):
        raise TypeError(f"Type {type(obj)} not serializable")
    
    result = {}

    for var in vars(obj):
        val = getattr(obj, var)
        if val:
            result[var] = val
    
    return result
        

if __name__ == "__main__":
    main()