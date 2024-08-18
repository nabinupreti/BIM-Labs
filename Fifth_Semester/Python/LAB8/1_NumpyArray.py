import numpy as np

arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
print("Array:",arr)
arr_f32 = arr.astype(np.float32)
print("Float 32 Array:",arr_f32)
arr_2d = arr_f32.reshape((2,5))
print("2D Array:\n",arr_2d)