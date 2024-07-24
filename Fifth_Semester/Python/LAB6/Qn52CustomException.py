class CustomError(Exception):
    pass

def check_number():
    try:
        num = int(input("Enter a number: "))
        if num < 0:
            raise CustomError("CustomError: Negative number entered.")
        print(f"Entered number: {num}")
    except CustomError as e:
        print(e)
    except ValueError:
        print("ValueError: Invalid input. Please enter a valid integer.")

# Example usage
check_number()