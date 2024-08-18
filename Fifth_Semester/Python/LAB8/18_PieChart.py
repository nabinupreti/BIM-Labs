import matplotlib.pyplot as plt

# Categorical data
labels = ['Apple', 'Banana', 'Cherry', 'Dragon Fruit']
sizes = [15, 30, 45, 10]
colors = ['gold', 'yellowgreen', 'lightcoral', 'lightskyblue']
explode = (0, 0.1, 0, 0)  # explode 2nd slice (i.e. 'Banana')

plt.figure(figsize=(6, 6))
plt.pie(sizes, explode=explode, labels=labels, colors=colors, autopct='%1.1f%%', shadow=True, startangle=140)
plt.title('Fruit Distribution')
plt.show()
