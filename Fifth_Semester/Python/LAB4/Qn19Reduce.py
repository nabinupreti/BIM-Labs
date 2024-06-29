#Use reduce to compute the product of a list of numbers [1, 2, 3, 4, 5].
from functools import reduce

numbers = [1, 2, 3, 4, 5]
product = reduce(lambda x, y: x * y, numbers)
print("Multiplication of list element is",product)