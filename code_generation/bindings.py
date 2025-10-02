class Binding:
    def __init__(self, type, binding_str, param, loops=(), len=None):
        self.type = type
        self.binding_str = binding_str
        self.param = param
        self.loops = loops
        self.len = len

class BindingLoop:
    def __init__(self, base, end, var):
        self.base = base
        self.end = end
        self.var = var

def _collect_modifiable_bindings(binding, binding_prefix, param, loops, find_struct, results, decay_array=False):
    """Collect all bindings that could be modified by a function call

    This function iterates through the tree of struct members starting at a single parameter. When it
    encounters a pointer that is not const, it saves a reference in `results` and prunes that branch.
    
    It also keeps track of loops that the bindings may require to cover all elements in an array. It
    stores the start and end of these loops plus the name of the variable of these loops in `loops`
    and this variable is used in the returned binding strings, e.g. 'var1[i0].var2'. The bindings
    should be wrapped in the appropriate loops when used.

    It assumes that all parameters are in a const context because it stops traversal when it reaches
    a non-const reference (pointer). This assumption is violated by the fact that arrays as function
    arguments are not value types but rather syntax sugar for pointers. The decay_array parameter is
    supplied to indicate that this iteration is in the context of a function parameter and that
    arrays should be treated as reference types.

    Args:
        binding (str): the binding of the current parameter. E.g. 'member1->member2.member3'
        param (XrParam): contains information about the current parameter, mostly useful for
            for determining if this parameter is modifiable, and how to recurse to the next bindings
        loops (tuple[BindingLoop, ...]): used as an immutable list to keep track of necessary loops
            during recursion
        find_struct (Callable[[str], XrStruct]): a bound reference to spec.find_struct
        results (list): Used to collect modifiable bindings
        binding_prefix (str): the same as `binding`, up to the actual member name, used to
            contextualize variables that determine pointer length
        decay_array (bool): Whether to treat an array as decayed to a pointer, useful in the context
            of a function parameter
    
    """
    struct = find_struct(param.type)

    # Special cases: xr structs/arrays of structs
    # No attempt is made to recurse from an xr struct. If the pointer is const, it is assumed that it
    # and its chain will not be modified.
    if param.pointer and param.len and struct and struct.header:
        if param.qualifier != "const":
            results.append(Binding(
                type = "xr_array",
                binding_str = binding,
                param = param,
                loops = loops,
                len = binding_prefix + param.len
            ))
        return
    if (param.type == "void" and param.pointer == "*" and param.name == "next") or (struct and struct.header):
        if param.qualifier != "const":
            results.append(Binding(
                type = "xr",
                binding_str = binding,
                param = param,
                loops = loops
            ))
        return
    
    if param.pointer and param.len:
        if param.qualifier != "const":
            results.append(Binding(
                type = "sized_ptr",
                binding_str = binding,
                param = param,
                loops = loops,
                len = binding_prefix + param.len
            ))
            return
        var = f"i{len(loops)}"
        binding_prefix = f"{binding}[{var}]."
        loops += (BindingLoop(0, param.len, var),)
    elif param.pointer:
        if param.qualifier != "const":
            results.append(Binding(
                type = "ptr",
                binding_str = binding,
                param = param,
                loops = loops
            ))
            return
        binding_prefix = f"{binding}->"
    elif param.array:
        # An array is not directly modifiable if the binding it's in is const so we will always
        # recurse when we encounter an array.
        # That is, unless this binding is a function parameter in which arrays decay to pointers.
        # decay_array is a flag to indicate this, and is always False after the first iteration.
        if decay_array and param.qualifier != "const":
            results.append(Binding(
                type = "array",
                binding_str = binding,
                param = param,
                loops = loops,
                len = param.array
            ))
            return
        var = f"i{len(loops)}"
        binding_prefix = f"{binding}[{var}]."
        loops += (BindingLoop(0, param.array, var),)
    else:
        binding_prefix = f"{binding}."

    if not struct:
        # no more members to recurse
        return

    # continue traversal
    for member in struct.members:
        new_binding = binding_prefix + member.name
        # we are recursing into a struct member, so arrays do not decay
        _collect_modifiable_bindings(new_binding, binding_prefix, member, loops, find_struct, results, decay_array=False)

def collect_modifiable_bindings(param, find_struct, binding_prefix="", decay_array=False):
    results = []
    first_binding = binding_prefix + param.name
    _collect_modifiable_bindings(first_binding, binding_prefix, param, (), find_struct, results, decay_array=decay_array)
    return results

def apply_modifiable_bindings(spec):
    for function in spec.functions:
        for param in function.params:
            function.modifiable_bindings += collect_modifiable_bindings(param, spec.find_struct, decay_array=True)