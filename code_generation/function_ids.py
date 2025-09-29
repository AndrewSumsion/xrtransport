def generate_function_ids(spec):
    results = []
    # null extension starts at 0
    extension_counter = 0

    # sort by extension name
    extensions = sorted(spec.extensions.items(), key=lambda x: x[0] if x[0] else "")
    for ext_name, extension in extensions:
        ext_entry = {"name": ext_name, "id": extension_counter, "functions": []}
        extension_counter += 1
        functions = sorted(extension.functions, key=lambda x: x.name)

        function_counter = 1
        for function in functions:
            function_entry = {"name": function.name, "id": function_counter}
            function_counter += 1
            ext_entry["functions"].append(function_entry)
        
        results.append(ext_entry)
    return results

def update_function_ids(spec, function_ids):
    existing_extensions = dict((ext["name"], ext) for ext in function_ids)
    max_extension_id = max(ext["id"] for ext in function_ids)
    extension_counter = max_extension_id + 1

    extensions = sorted(spec.extensions.items(), key=lambda x: x[0] if x[0] else "")
    for ext_name, extension in extensions:
        if ext_name in existing_extensions:
            ext_entry = existing_extensions[ext_name]
            functions = ext_entry["functions"]
            existing_functions = set(func["name"] for func in functions)
            max_function_id = max(func["id"] for func in functions) if functions else 0
            function_counter = max_function_id + 1
            for function in extension.functions:
                if function.name in existing_functions:
                    continue
                function_entry = {"name": function.name, "id": function_counter}
                function_counter += 1
                ext_entry["functions"].append(function_entry)
        else:
            ext_entry = {"name": ext_name, "id": extension_counter, "functions": []}
            extension_counter += 1
            functions = sorted(extension.functions, key=lambda x: x.name)

            function_counter = 1
            for function in functions:
                function_entry = {"name": function.name, "id": function_counter}
                function_counter += 1
                ext_entry["functions"].append(function_entry)
            
            function_ids.append(ext_entry)
    return function_ids

def apply_function_ids(spec, function_ids):
    for ext_entry in function_ids:
        # assumes a single extension will not have more than 1000 functions
        ext_part = ext_entry["id"] * 1000
        for function_entry in ext_entry["functions"]:
            func_name = function_entry["name"]
            func_part = function_entry["id"]
            spec.find_function(func_name).id = ext_part + func_part