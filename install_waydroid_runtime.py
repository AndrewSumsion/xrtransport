import argparse
import shutil
import os
from textwrap import dedent

def parse_args():
    parser = argparse.ArgumentParser(description="Installs xrtransport client into Waydroid")
    parser.add_argument("--archs", nargs="+", type=str, help="Android ABI names to install the runtime for, e.g. x86_64, arm64-v8a", default=["x86_64"])
    parser.add_argument("--config", type=str, choices=["release", "debug"], help="Configuration of runtime, release or debug", default="debug")

    return parser.parse_args()

def install_runtime(path_prefix, arch, config):
    install_path = f"build/waydroid/{arch['android_name']}/{config}/install/client"

    # make sure client has been built and installed
    if not os.path.isdir(install_path):
        print(f"waydroid-{arch['android_name']}-{config} not yet built and installed")
        print("From root of project:")
        print(f"\tcmake -S . --preset waydroid-{arch['android_name']}-{config}")
        print(f"\tcmake --build --preset waydroid-{arch['android_name']}-{config}-build --target install")

    openxr_path = os.path.join(path_prefix, "vendor/etc/openxr/1")
    runtime_path = os.path.join(path_prefix, "vendor/etc/xrtransport")
    
    # make sure the directories exist
    os.makedirs(openxr_path, exist_ok=True)
    os.makedirs(runtime_path, exist_ok=True)

    # copy runtime
    shutil.copytree(install_path, runtime_path, dirs_exist_ok=True)

    # create manifest
    runtime_manifest = dedent("""\
        {
            "file_format_version": "1.0.0",
            "runtime": {
                "name": "xrtransport_client",
                "library_path": "./libxrtransport_client.so"
            }
        }
    """)

    with open(os.path.join(runtime_path, "runtime_manifest.json"), "w") as runtime_manifest_file:
        runtime_manifest_file.write(runtime_manifest)
    
    # set active runtime with symlink
    os.symlink("/vendor/etc/xrtransport/runtime_manifest.json", os.path.join(openxr_path, f"active_runtime.{arch['openxr_name']}.json"))

def main():
    args = parse_args()

    # add files to rw overlay
    path_prefix = "/var/lib/waydroid/overlay_rw"
    
    arch_definitions = {
        "x86_64": {
            "android_name": "x86_64",
            "openxr_name": "x86_64"
        },
        "x86": {
            "android_name": "x86",
            "openxr_name": "i686"
        },
        "arm64-v8a": {
            "android_name": "arm64-v8a",
            "openxr_name": "aarch64"
        },
        "armeabi-v7a": {
            "android_name": "armeabi-v7a",
            "openxr_name": "armv7a-vfp"
        }
    }

    for arch_name in args.archs:
        if not arch_name in arch_definitions:
            print(f"Invalid arch {arch_name}, skipping...")
            continue
        arch = arch_definitions[arch_name]
        print(f"Installing runtime for {arch['android_name']}...")
        install_runtime(path_prefix, arch, args.config)
        print("Done.")

if __name__ == "__main__":
    main()
