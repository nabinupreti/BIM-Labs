def perform_operation():
    try:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        operation = input("Enter an operation (+, -, *, /): ")

        if operation == '+':
            result = num1 + num2
        elif operation == '-':
            result = num1 - num2
        elif operation == '*':
            result = num1 * num2
        elif operation == '/':
            result = num1 / num2
        else:
            print("Invalid operation.")
            return

        print(f"Result: {result}")

    except (ZeroDivisionError, ValueError, TypeError) as e:
        print(f"Error: {e}")

# Example usage
perform_operation()