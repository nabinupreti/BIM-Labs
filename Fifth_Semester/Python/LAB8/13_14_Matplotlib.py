import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)
y = np.sin(x)

plt.figure()
plt.plot(x, y, linestyle='--', marker='o', color='black', label='sin(x)')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Line Plot of sin(x)')
plt.grid(True, linestyle=':', color='red')
plt.legend()
plt.show()
