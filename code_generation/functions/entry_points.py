from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions
import os


def generate_function_entry_points(spec, templates_dir, out):
    functions_dir = os.path.join(templates_dir, "functions")
    template_lookup = TemplateLookup(directories=[templates_dir, functions_dir])
    template = template_lookup.get_template("entry_points.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running function entry points template.")
        print(exceptions.text_error_template().render())