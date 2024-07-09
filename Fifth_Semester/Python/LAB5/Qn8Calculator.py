class Calculator:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def addition(self):
        return self.a + self.b

    def subtraction(self):
        return self.a - self.b

    def multiplication(self):
        return self.a * self.b

    def division(self):
        return self.a / self.b

# Create an object of the Calculator class
calc = Calculator(10, 5)
print(f"Addition: {calc.addition()}\nSubtraction: {calc.subtraction()} \nMultiplication: {calc.multiplication()} \nDivision: {calc.division()}")