import numpy as np

a = np.array([1, 2, 3])
b = np.array([[10], [20], [30]])
add = a + b
mult = a * 5

print("Broadcasted Addition:\n", add)
print("Scalar Multiplication:", mult)
