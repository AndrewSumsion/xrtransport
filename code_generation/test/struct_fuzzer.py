import random
import string
import os
from collections import deque
from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions

ASSERT_COMMAND = "assert"

class StructPlan:
    def __init__(self, type_name, children=None):
        self.type_name = type_name
        self.children = children if children != None else {}
    
    def init(self, out, binding, name, indent=""):
        for member_name, child in self.children.items():
            child.init(out, f"{binding}.{member_name}", f"{name}_{member_name}", indent)
    
    def compare(self, out, binding, indent=""):
        for member_name, child in self.children.items():
            if member_name == "next" and isinstance(child, PointerPlan):
                # cast binding when comparing void* next
                # we may want a more specific check as this might catch e.g. int* next
                child_binding = f"(({child.type_name}*){binding}.next)"
            else:
                child_binding = f"{binding}.{member_name}"
            child.compare(out, child_binding, indent)

class PointerPlan:
    def __init__(self, type_name, children=None):
        self.type_name = type_name
        self.children = children if children != None else []
    
    def init(self, out, binding, name, indent=""):
        # stack array declaration
        out.append(f"{indent}{self.type_name} {name}[{len(self.children)}]{{}};")
        # init all members of array
        for index, child in enumerate(self.children):
            child.init(out, f"{name}[{index}]", f"{name}_{index}", indent)
        # set pointer to stack array
        out.append(f"{indent}{binding} = {name};")
        pass

    def compare(self, out, binding, indent=""):
        for index, child in enumerate(self.children):
            child.compare(out, f"{binding}[{index}]", indent)

# Arrays use the same value for every slot because length is
# known at compile time, not generate time.
class ArrayPlan:
    def __init__(self, type_name, array_length, child=None):
        self.type_name = type_name
        self.array_length = array_length
        self.child = child
    
    def init(self, out, binding, name, indent=""):
        out.append(f"{indent}for (int i = 0; i < {self.array_length}; i++) {{")
        self.child.init(out, f"{binding}[i]", name, indent + "    ")
        out.append(f"{indent}}}")
    
    def compare(self, out, binding, indent=""):
        out.append(f"{indent}for (int i = 0; i < {self.array_length}; i++) {{")
        self.child.compare(out, f"{binding}[i]", indent + "    ")
        out.append(f"{indent}}}")

class ValuePlan:
    def __init__(self, type_name, value=None):
        self.type_name = type_name
        self.value = value
    
    def init(self, out, binding, name, indent=""):
        out.append(f"{indent}{binding} = {self.value};")
    
    def compare(self, out, binding, indent=""):
        out.append(f"{indent}{ASSERT_COMMAND}({binding} == {self.value});")

# This stuff is very unwieldy to do in a Mako template, so it's defined here
class RandomStructGenerator:
    def __init__(self, spec):
        self.spec = spec
        self.test_structs = [s for s in spec.test_structs if not s.custom and not s.header]
        self.test_xr_structs = [s for s in self.test_structs if s.xr_type]
        self.nullptr_chance = 0.6

    def plan_member(self, type_name):
        struct = self.spec.find_struct(type_name)
        if struct:
            return self.plan_struct(struct)
        else:
            return self.plan_value(type_name)

    def plan_struct(self, struct):
        struct_plan = StructPlan(struct.name)
        if struct.xr_type:
            struct_plan.children["type"] = ValuePlan("XrStructureType", struct.xr_type)
            if random.random() < self.nullptr_chance:
                struct_plan.children["next"] = ValuePlan("void*", "nullptr")
            else:
                next_xr_struct = self.choose_xr_struct()
                next_plan = self.plan_struct(next_xr_struct) # recurse to get StructPlan
                next_pointer_plan = PointerPlan(next_xr_struct.name, [next_plan]) # wrap in PointerPlan to allocate on stack
                struct_plan.children["next"] = next_pointer_plan
            rest_members = struct.members[2:]
        else:
            rest_members = struct.members
        
        for member in rest_members:
            if member.pointer:
                if random.random() < self.nullptr_chance:
                    struct_plan.children[member.name] = ValuePlan(member.full_type(), "nullptr")
                    continue
                
                pointer_plan = PointerPlan(member.type)
                if member.len:
                    array_length = random.randint(1, 20)
                    if member.len != "null-terminated":
                        # find the existing value plan for the member that specifies this member's length
                        # note that this will fail if the length-specifying member comes after, but I don't
                        # think this problem exists in the current spec
                        length_member_plan = struct_plan.children[member.len]
                        assert isinstance(length_member_plan, ValuePlan)
                        length_member_plan.value = str(array_length)
                else:
                    array_length = 1
                    
                for _ in range(array_length):
                    pointer_plan.children.append(self.plan_member(member.type))
                    
                if member.len == "null-terminated":
                    pointer_plan.children.append(ValuePlan(member.full_type(), member.type + "{}"))
                
                struct_plan.children[member.name] = pointer_plan
            elif member.array:
                array_plan = ArrayPlan(member.type, member.array)
                array_plan.child = self.plan_member(member.type)
                struct_plan.children[member.name] = array_plan
            else:
                struct_plan.children[member.name] = self.plan_member(member.type)
        
        return struct_plan
    
    def plan_value(self, type_name):
        return ValuePlan(type_name, self.gen_random_value(type_name))
                        
    def gen_random_value(self, type_name):
        if type_name == "char":
            return "'" + random.choice(string.ascii_letters + string.digits) + "'"
        # put in other special cases here
        # elif type_name == "...":
        else:
            return f"({type_name}) {hex(random.randint(0, 2**64 - 1))}"
    
    def choose_struct(self):
        return random.choice(self.test_structs)
    
    def choose_xr_struct(self):
        return random.choice(self.test_xr_structs)

    def generate_plan(self, struct=None):
        if struct == None:
            struct = self.choose_struct()
        return self.plan_struct(struct)
    
    def init_struct(self, struct_plan, struct_name, indent=""):
        out = []
        out.append(f"{indent}{struct_plan.type_name} {struct_name}{{}};")
        struct_plan.init(out, struct_name, struct_name, indent)
        return "\n".join(out)
    
    def compare_struct(self, struct_plan, struct_name, indent=""):
        out = []
        struct_plan.compare(out, struct_name, indent)
        return "\n".join(out)

def generate_struct_fuzzer(spec, templates_dir, out, fuzzer_seed):
    # Make fuzzer output deterministic (not thread safe)
    random.seed(fuzzer_seed)

    template_lookup = TemplateLookup(directories=[f"{templates_dir}/test"])
    template = template_lookup.get_template("struct_fuzzer.mako")
    struct_generator = RandomStructGenerator(spec)
    try:
        out.write(template.render(spec=spec, struct_generator=struct_generator).encode())
    except:
        print("Warning! An exception occurred running serializer template.")
        print(exceptions.text_error_template().render())
