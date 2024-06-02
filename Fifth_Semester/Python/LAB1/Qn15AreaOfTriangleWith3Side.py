import math

# Reading the lengths of the three sides of the triangle separately
a = float(input("Enter the length of side a: "))
b = float(input("Enter the length of side b: "))
c = float(input("Enter the length of side c: "))

# Calculating the semi-perimeter
s = (a + b + c) / 2

# Calculating the area using Heron's formula
area = math.sqrt(s * (s - a) * (s - b) * (s - c))

# Printing the result
print(f"The area of the triangle is {area:.2f}")
