class Vector:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
    
    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y, self.z - other.z)
    
    def __str__(self):
        return f"Vector({self.x}, {self.y}, {self.z})"

# Example usage
vector1 = Vector(5, 6, 7)
vector2 = Vector(2, 3, 4)
result = vector1 - vector2
print(result)  # Output: Vector(3, 3, 3)