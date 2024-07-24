def access_list():
    try:
        user_input = input("Enter a list of numbers separated by spaces: ")
        user_list = [int(x) for x in user_input.split()]
        index = int(input("Enter an index to access: "))
        print(f"Value at index {index}: {user_list[index]}")
    except IndexError:
        print("IndexError: Index out of range.")
    except ValueError:
        print("ValueError: Invalid input. Please enter integers only.")

# Example usage
access_list()