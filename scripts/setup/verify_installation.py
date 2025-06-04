import shutil
import sys
import subprocess

def check_tool(name):
    return shutil.which(name) is not None

def check_python_packages(packages):
    for pkg in packages:
        try:
            __import__(pkg)
            print(f"✅ Python package '{pkg}' is installed.")
        except ImportError:
            print(f"❌ Python package '{pkg}' is NOT installed.")

print("🔍 Verifying tool installation...\n")

# Tools
tools = ["arduino-cli", "flutter", "python3"]
for tool in tools:
    if check_tool(tool):
        print(f"✅ {tool} is installed.")
    else:
        print(f"❌ {tool} is NOT installed.")

# Python packages
required_packages = [
    "numpy", "matplotlib", "pandas", "scipy", "pyserial", "biosppy", "flask"
]
print("\n🔍 Verifying Python packages...\n")
check_python_packages(required_packages)

# Optional: check Flutter doctor output
print("\n🔧 Running flutter doctor...\n")
if check_tool("flutter"):
    subprocess.call(["flutter", "doctor"])
