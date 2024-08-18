import numpy as np
arr = np.random.randint(0,100,size=9)
arr_sorted = np.sort(arr)
print(arr_sorted)
arr_reshape = arr_sorted.reshape((3,3))
print("Reshaped array:\n",arr_reshape)
