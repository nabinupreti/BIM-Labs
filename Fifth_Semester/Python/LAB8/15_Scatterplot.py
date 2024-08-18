import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(0, 10, 100)
y = np.sin(x)
z = np.cos(x)
print(x)
print(y)
print(z)

plt.figure(figsize=(10, 5))

# Subplot 1: Line plot
plt.subplot(1, 2, 1)
plt.plot(x, y, linestyle='--', marker='o', color='b', label='sin(x)')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Line Plot of sin(x)')
plt.grid(True, linestyle=':', color='gray')
plt.legend()

# Subplot 2: Scatter plot
plt.subplot(1, 2, 2)
plt.scatter(x, z, color='r', marker='x', label='cos(x)')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Scatter Plot of cos(x)')
plt.grid(True, linestyle='-', color='green')
plt.legend()

plt.show()
