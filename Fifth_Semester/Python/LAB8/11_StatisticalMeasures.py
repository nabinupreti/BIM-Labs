import numpy as np

arr = np.random.randint(1, 100, size=20)
print("Array:",arr)
print("Mean:",np.mean(arr))
print("Median:",np.median(arr))
print(f"Standard Deviation:{np.std(arr):.2f}")
print("Variance:",np.var(arr))
print("Sum:",np.sum(arr))
print("Max:",np.max(arr))
print("Min:",np.min(arr))
print("25th Percentile:",np.percentile(arr, 25))
print("75th Percentile:",np.percentile(arr, 75))

