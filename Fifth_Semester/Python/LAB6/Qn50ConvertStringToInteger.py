def convert_to_int():
    try:
        user_input = input("Enter a number: ")
        result = int(user_input)
        print(f"Converted integer: {result}")
    except ValueError:
        print("ValueError: Invalid input. Please enter a valid integer.")
    except TypeError:
        print("TypeError: Unexpected type encountered.")

# Example usage
convert_to_int()