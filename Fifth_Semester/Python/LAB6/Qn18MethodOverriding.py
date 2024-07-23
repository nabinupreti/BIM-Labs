class Square:
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side ** 2
    
    def perimeter(self):
        return 4 * self.side

class Rectangle(Square):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

    def perimeter(self):
        return 2 * (self.width + self.height)

# Create instances of Square and Rectangle classes
square = Square(4)
rectangle = Rectangle(4, 6)

# Print the area and perimeter
print(f"Square Area: {square.area()}, Square Perimeter: {square.perimeter()}")
print(f"Rectangle Area: {rectangle.area()}, Rectangle Perimeter: {rectangle.perimeter()}")