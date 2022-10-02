import os
import shutil

path = r"/home/yoie/Documents/de_cuong/"
for i in range(1,80):
    current_path = path + f"baitap{i}"
    os.makedirs(current_path)
    os.chdir(current_path)
    with open(f"baitap{i}.inp", "w"): pass
    with open(f"baitap{i}.out", "w"): pass
    with open(f"baitap{i}.cpp", "w"):  pass
    shutil.copy(r"/home/yoie/Documents/solution/template.cpp", f"baitap{i}.cpp")

    


