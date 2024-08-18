import numpy as np

arr_2d = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])

print("Iterated elements:")
for el in np.nditer(arr_2d):
    print(el,end=" ")

idx = np.where(arr_2d == 7)
print("\nIndex of value 7:", idx)
