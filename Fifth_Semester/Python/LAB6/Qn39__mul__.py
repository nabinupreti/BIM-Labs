class ComplexNumber:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag
    
    def __mul__(self, other):
        real = self.real * other.real - self.imag * other.imag
        imag = self.real * other.imag + self.imag * other.real
        return ComplexNumber(real, imag)
    
    def __repr__(self):
        return f"ComplexNumber({self.real}, {self.imag})"

# Example usage
c1 = ComplexNumber(1, 2)
c2 = ComplexNumber(3, 4)
result = c1 * c2
print(result)  # Output: ComplexNumber(-5, 10)