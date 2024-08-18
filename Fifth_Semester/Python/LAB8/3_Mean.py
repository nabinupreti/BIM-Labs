import numpy as np

arr = np.arange(10)
print("Array:",arr)
arr_slice = arr[2:6]
print("Sliced array:",arr_slice)
mean = np.mean(arr_slice)
print("Mean of sliced array:",mean)