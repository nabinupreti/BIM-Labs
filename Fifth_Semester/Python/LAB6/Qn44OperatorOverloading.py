class MyComplexNumber:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag
    
    def __add__(self, other):
        return MyComplexNumber(self.real + other.real, self.imag + other.imag)
    
    def __sub__(self, other):
        return MyComplexNumber(self.real - other.real, self.imag - other.imag)
    
    def __mul__(self, other):
        real = self.real * other.real - self.imag * other.imag
        imag = self.real * other.imag + self.imag * other.real
        return MyComplexNumber(real, imag)
    
    def __truediv__(self, other):
        denominator = other.real ** 2 + other.imag ** 2
        real = (self.real * other.real + self.imag * other.imag) / denominator
        imag = (self.imag * other.real - self.real * other.imag) / denominator
        return MyComplexNumber(real, imag)
    
    def __str__(self):
        return f"{self.real} + {self.imag}i"

# Example usage
c1 = MyComplexNumber(1, 2)
c2 = MyComplexNumber(3, 4)
add_result = c1 + c2
sub_result = c1 - c2
mul_result = c1 * c2
div_result = c1 / c2
print(add_result)  # Output: 4 + 6i
print(sub_result)  # Output: -2 + -2i
print(mul_result)  # Output: -5 + 10i
print(div_result)  # Output: 0.44 + 0.08i