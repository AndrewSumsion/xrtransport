from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions
import os

def generate_struct_reflection(spec, templates_dir, out):
    reflection_dir = os.path.join(templates_dir, "reflection")
    template_lookup = TemplateLookup(directories=[templates_dir, reflection_dir])
    template = template_lookup.get_template("struct.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running struct reflection template.")
        print(exceptions.text_error_template().render())
