#apply_function() takes a function and a value and return the result of applying the function to the value

def apply_function(func, value):
    return func(value)

def square(x):
    return x * x

result = apply_function(square, 5)
print("Result of apply_function:",result)