class Fraction:
    def __init__(self, numerator, denominator):
        self.numerator = numerator
        self.denominator = denominator
    
    def __eq__(self, other):
        return self.numerator * other.denominator == self.denominator * other.numerator
    
    def __ne__(self, other):
        return not self.__eq__(other)
    
    def __lt__(self, other):
        return self.numerator * other.denominator < self.denominator * other.numerator
    
    def __le__(self, other):
        return self.numerator * other.denominator <= self.denominator * other.numerator
    
    def __gt__(self, other):
        return self.numerator * other.denominator > self.denominator * other.numerator
    
    def __ge__(self, other):
        return self.numerator * other.denominator >= self.denominator * other.numerator
    
    def __str__(self):
        return f"{self.numerator}/{self.denominator}"

# Example usage
f1 = Fraction(1, 2)
f2 = Fraction(3, 4)
print(f1 == f2)  # Output: False
print(f1 != f2)  # Output: True
print(f1 < f2)   # Output: True
print(f1 <= f2)  # Output: True
print(f1 > f2)   # Output: False
print(f1 >= f2)  # Output: False
print(f1)        # Output: 1/2