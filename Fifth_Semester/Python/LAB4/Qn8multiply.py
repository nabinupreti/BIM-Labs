# multiply() that takes 3 args and return their product, use tuple to call function with unpacked arguments
def multiply(a, b, c):
    return a * b * c
args = (1, 2, 3)
print("Product is",multiply(*args))

