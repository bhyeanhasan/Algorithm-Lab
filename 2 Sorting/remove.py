import os
import glob
for file in glob.glob("*.o"):
    os.remove(file)
for file in glob.glob("*.exe"):
    os.remove(file)
