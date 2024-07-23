class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __add__(self, other):
        return Point(self.x + other.x, self.y + other.y)
    
    def __str__(self):
        return f"({self.x}, {self.y})"
    
point1 = Point(1,2)
point2 = Point(3,4)
point3 = point1 + point2
print(point3)