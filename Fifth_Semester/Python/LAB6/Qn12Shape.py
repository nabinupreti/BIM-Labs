import math

class Shape:
    def area(self):
        return 0

class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side * self.side

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius * self.radius

# Create instances of Square and Circle classes
square = Square(4)
circle = Circle(3)

# Print the area
print(f"Square Area: {square.area()}")
print(f"Circle Area: {circle.area():.2f}")
