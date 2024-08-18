import numpy as np

arr_3d = np.random.randint(0,10,size=(3,3,3))
print("3D array:",arr_3d)

arr_2d = arr_3d[0, :, :]
print("Sliced 2D array:",arr_2d)
dim = arr_2d.ndim
print("Dimensions:",dim)