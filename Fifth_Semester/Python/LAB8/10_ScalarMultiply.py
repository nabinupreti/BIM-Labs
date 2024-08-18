import numpy as np

arr_3d = np.random.randint(0, 10, size=(3, 3, 3))
arr_2d = arr_3d[1, :, :]
arr_mod = arr_2d * 3
mean_val = np.mean(arr_mod)

print("Modified Sliced 2D Subarray:\n", arr_mod)
print(f"Mean of Modified Sliced 2D Subarray: {mean_val:.2f}")
