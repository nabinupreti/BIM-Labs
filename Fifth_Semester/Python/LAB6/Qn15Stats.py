class Stats:
  @staticmethod
  def calculate(numbers, operation):
    if operation == "sum":
      return sum(numbers)
    elif operation == "average":
      return sum(numbers) / len(numbers)
    else:
      raise ValueError("Invalid operation")

# Use the Stats class to calculate sum and average
numbers = [1, 2, 3, 4, 5]
print(f"Sum: {Stats.calculate(numbers, 'sum')}")
print(f"Average: {Stats.calculate(numbers, 'average')}")