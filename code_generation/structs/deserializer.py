from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions
import os

def generate_deserializer(spec, templates_dir, out):
    structs_dir = os.path.join(templates_dir, "structs")
    template_lookup = TemplateLookup(directories=[templates_dir, structs_dir])
    template = template_lookup.get_template("deserializer.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running deserializer template.")
        print(exceptions.text_error_template().render())