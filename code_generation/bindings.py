# TODO: support array function parameters that actually decay to pointers

class BindingLoop:
    def __init__(self, base, end, var):
        self.base = base
        self.end = end
        self.var = var


def _collect_modifiable_bindings(binding, param, loops, find_struct, results):
    struct = find_struct(param.type)

    # Special cases: xr structs/arrays of structs
    # No attempt is made to recurse from an xr struct. If the pointer is const, it is assumed that it
    # and its chain will not be modified.
    if param.pointer and param.len and struct and struct.header:
        if param.qualifier != "const":
            results.append({
                "type": "xr_array",
                "binding": binding,
                "loops": loops,
                "len": param.len
            })
        return
    if (param.type == "void" and param.pointer == "*" and param.name == "next") or (struct and struct.header):
        if param.qualifier != "const":
            results.append({
                "type": "xr",
                "binding": binding,
                "loops": loops,
            })
        return
    
    if param.pointer and param.len:
        if param.qualifier != "const":
            results.append({
                "type": "sized_ptr",
                "binding": binding,
                "loops": loops,
                "len": param.len
            })
            return
        var = f"i{len(loops)}"
        binding += f"[{var}]."
        loops += (BindingLoop(0, param.len, var),)
    elif param.pointer:
        if param.qualifier != "const":
            results.append({
                "type": "ptr",
                "binding": binding,
                "loops": loops
            })
            return
        binding += "->"
    elif param.array:
        # an array is not directly modifiable if the binding it's in is const
        # so we will always recurse when we encounter an array
        var = f"i{len(loops)}"
        binding += f"[{var}]."
        loops += (BindingLoop(0, param.array, var),)
    else:
        binding += "."

    if not struct:
        # no more members to recurse
        return

    # continue traversal
    for member in struct.members:
        new_binding = binding + member.name
        _collect_modifiable_bindings(new_binding, member, loops, find_struct, results)

def collect_modifiable_bindings(param, find_struct, binding_prefix=""):
    results = []
    first_binding = binding_prefix + param.name
    _collect_modifiable_bindings(first_binding, param, (), find_struct, results)
    return results

def apply_modifiable_bindings(spec):
    for function in spec.functions:
        for param in function.params:
            function.modifiable_bindings += collect_modifiable_bindings(param, spec.find_struct)