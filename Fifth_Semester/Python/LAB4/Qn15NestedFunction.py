#outer() contains a nested function inner(), outer function should return the result of calling inner function

def outer(square):
    def inner(num):
        return num ** 2
    
    return inner(square)



print("Square of 5 is",outer(5))