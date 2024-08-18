import numpy as np

arr = np.linspace(10, 50, 5)
med = np.median(arr)
std = np.std(arr)

print("Linearly Spaced Array:", arr)
print("Median:", med)
print(f"Standard Deviation: {std:.2f}")
