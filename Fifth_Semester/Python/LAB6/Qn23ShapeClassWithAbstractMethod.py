from abc import ABC, abstractmethod
import math
class Shape(ABC):
    @abstractmethod
    def perimeter(self):
        pass

    def set_dimension(self, dimension):
        if dimension <= 0:
            raise ValueError("Dimension must be positive")
        return dimension

class Square(Shape):
    def __init__(self, side):
        self.side = self.set_dimension(side)

    def perimeter(self):
        return 4 * self.side

class Circle(Shape):
    def __init__(self, radius):
        self.radius = self.set_dimension(radius)

    def perimeter(self):
        return 2 * math.pi * self.radius

# Create instances of Square and Circle classes and calculate perimeters
square = Square(4)
circle = Circle(3)

print(f"Square Perimeter: {square.perimeter()}")
print(f"Circle Perimeter: {circle.perimeter():.2f}")