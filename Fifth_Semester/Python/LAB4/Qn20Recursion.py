def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num-1)

num = int(input("Enter a number: "))
print("Factorial of", num, "is", factorial(num))