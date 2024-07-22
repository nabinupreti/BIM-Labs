class Rectangle:
    def __init__(self, width, height):
        if width < 0 and height < 0:
            raise ValueError("Width and height must be positive")
        self.width = width
        self.height = height
    
    def area(self):
        return self.width * self.height

try:
    r1 = Rectangle(10,2)
    print(f"Area: {r1.area}")
except ValueError as e:
    print(e)