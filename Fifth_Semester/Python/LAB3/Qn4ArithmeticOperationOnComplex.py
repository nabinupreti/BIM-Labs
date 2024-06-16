#Program to compute arithmetic operation on complex numbers
def complex_operations(a, b):
    print("Addition:", a + b)
    print("Subtraction:", a - b)
    print("Multiplication:", a * b)
    print("Division:", a / b)
    print("Conjugate of a:", a.conjugate())#change the sign of imaginary part

a = complex(2, 3)
b = complex(1, 1)
complex_operations(a, b) #calling the function
