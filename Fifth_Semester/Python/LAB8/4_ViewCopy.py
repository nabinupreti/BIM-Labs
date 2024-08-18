import numpy as np

arr = np.array([10, 20, 30, 40, 50])
arr_view = arr.view()
arr_copy = arr.copy()

arr_view[0] = 100  # Modifying the view
arr_copy[1] = 200  # Modifying the copy

print("Original Array:", arr)
print("View after modification:", arr_view)
print("Copy after modification:", arr_copy)
