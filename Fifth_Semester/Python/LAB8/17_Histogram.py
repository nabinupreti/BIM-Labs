import matplotlib.pyplot as plt
import numpy as np
# Continuous data
data = np.random.randn(1000)

plt.figure(figsize=(10, 10))

# Subplot 1: Histogram
plt.subplot(2, 2, 1)
plt.hist(data, bins=30, color='c', edgecolor='black')
plt.xlabel('Data')
plt.ylabel('Frequency')
plt.title('Histogram of Data')

# Subplot 2: Box Plot
plt.subplot(2, 2, 2)
plt.boxplot(data, patch_artist=True)
plt.title('Box Plot of Data')

plt.show()
