def divide():
    try:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))
        res = num1 / num2
        print("Result: ", res)
    except ValueError:
        print("Invalid input. Please enter a number.")
    
    except ZeroDivisionError:
        print("Cannot divide by zero. Please enter a number other than zero.")
    
divide()