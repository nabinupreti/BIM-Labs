#Demonstrate different ways of looping through a tuple (using for loop, while loop)
# Task 32
t = (1, 2, 3, 4, 5)

# Using for loop
print("Using for loop:")
for item in t:
    print(item)

# Using while loop
print("Using while loop:")
i = 0
while i < len(t):
    print(t[i])
    i += 1
