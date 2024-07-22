class MathOperations:
  @staticmethod
  def multiply(a, b, c=None):
    if c is not None:
      return a * b * c
    else:
      return a * b

# Use the MathOperations class to multiply numbers
print(f"Multiply two numbers: {MathOperations.multiply(2, 3)}")
print(f"Multiply three numbers: {MathOperations.multiply(2, 3, 4)}")