class Calculator:
  @staticmethod
  def add(a, b):
    return a + b
  
  @staticmethod
  def subtract(a, b):
    return a - b
  
  @staticmethod
  def multiply(a, b):
    return a * b
  
  @staticmethod
  def divide(a, b):
    return a / b
  
print(f"Addition: {Calculator.add(10, 5)}")
print(f"Subtraction: {Calculator.subtract(10,5)}")
print(f"Product: {Calculator.multiply(10,5)}")
print(f"Division: {Calculator.divide(10,5)}")