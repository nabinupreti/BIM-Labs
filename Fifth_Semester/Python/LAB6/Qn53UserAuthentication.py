class AuthenticationError(Exception):
    pass

def authenticate(username, password):
    correct_username = "user"
    correct_password = "pass"

    if username != correct_username or password != correct_password:
        raise AuthenticationError("AuthenticationError: Incorrect username or password.")

    print("Authenticated successfully.")

def login():
    try:
        username = input("Enter username: ")
        password = input("Enter password: ")
        authenticate(username, password)
    except AuthenticationError as e:
        print(e)

# Example usage
login()