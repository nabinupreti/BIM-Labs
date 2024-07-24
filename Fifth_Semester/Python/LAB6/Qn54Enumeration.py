from enum import Enum
class Color(Enum):
    RED = 1
    GREEN = 2
    BLUE = 3
    YELLOW = 4

def check_color():
    user_input = input("Enter a color:").upper()
    color = Color[user_input]

    if color in (Color.RED, Color.GREEN, Color.BLUE):
        print("You entered a primary color")
    elif color in (Color.YELLOW):
        print("You entered a secondary color")
    else:
        print("You entered a wrong color")

check_color()