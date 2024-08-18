import matplotlib.pyplot as plt
import numpy as np
# Different scatter plot data
a = np.random.rand(100)
b = np.random.rand(100)

# Categorical data for bar graph
categories = ['A', 'B', 'C']
values = [5, 7, 9]

plt.figure(figsize=(10, 10))

# Subplot 1: Scatter plot of random data
plt.subplot(2, 2, 1)
plt.scatter(a, b, color='m', marker='o', label='Random Data')
plt.xlabel('A-axis')
plt.ylabel('B-axis')
plt.title('Scatter Plot of Random Data')
plt.grid(True)
plt.legend()

# Subplot 2: Bar graph
plt.subplot(2, 2, 2)
plt.bar(categories, values, color=['blue', 'orange', 'green'])
plt.xlabel('Category')
plt.ylabel('Values')
plt.title('Bar Graph of Categories')
plt.grid(True)

plt.show()
