import os
import subprocess
import platform

from SetupPython import PythonConfiguration as PythonRequirements

# Make sure everything we need for the setup is installed
PythonRequirements.Validate()

from SetupPremake import PremakeConfiguration as PremakeRequirements

os.chdir('./../') # Change from devtools/scripts directory to root
premakeInstalled = PremakeRequirements.Validate()

if (premakeInstalled):
  if platform.system() == 'Windows':
    print("Premake is installed. Running premake5.exe...")
    subprocess.call([os.path.abspath("./Scripts/GenerateProjectFiles.bat"), "nopause"])

  print("\nSetup completed successfully.")
    