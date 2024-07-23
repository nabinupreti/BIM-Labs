class Modulo:
    def __init__(self, value):
        self.value = value
    
    def __mod__(self, other):
        return Modulo(self.value % other.value)
    
    def __str__(self):
        return f"Modulo({self.value})"

# Example usage
m1 = Modulo(10)
m2 = Modulo(3)
result = m1 % m2
print(result)  # Output: Modulo(1)