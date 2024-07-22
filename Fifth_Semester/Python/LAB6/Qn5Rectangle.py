class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

# Create an instance of the Rectangle class
rectangle = Rectangle(5, 10)

# Print the area
print(f"Area: {rectangle.area()}")