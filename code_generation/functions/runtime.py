from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions
import os

def generate_runtime_header(spec, templates_dir, out):
    functions_dir = os.path.join(templates_dir, "functions")
    template_lookup = TemplateLookup(directories=[templates_dir, functions_dir])
    template = template_lookup.get_template("runtime_header.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running runtime header template.")
        print(exceptions.text_error_template().render())

def generate_runtime_impl(spec, templates_dir, out):
    functions_dir = os.path.join(templates_dir, "functions")
    template_lookup = TemplateLookup(directories=[templates_dir, functions_dir])
    template = template_lookup.get_template("runtime_impl.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running runtime implementation template.")
        print(exceptions.text_error_template().render())