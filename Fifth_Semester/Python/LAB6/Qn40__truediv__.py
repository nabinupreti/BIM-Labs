class Fraction:
    def __init__(self, numerator, denominator):
        self.numerator = numerator
        self.denominator = denominator
    
    def __truediv__(self, other):
        numerator = self.numerator * other.denominator
        denominator = self.denominator * other.numerator
        return Fraction(numerator, denominator)
    
    def __repr__(self):
        return f"Fraction({self.numerator}, {self.denominator})"

# Example usage
f1 = Fraction(1, 2)
f2 = Fraction(3, 4)
result = f1 / f2
print(result)  # Output: Fraction(4, 6)