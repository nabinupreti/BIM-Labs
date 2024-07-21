from enum import Enum

class Color(Enum):
    pass

class PrimaryColor(Color):
    RED = 1
    GREEN = 2
    BLUE = 3

class SecondaryColor(Color):
    YELLOW = 4
    PURPLE = 5
    ORANGE = 6

print("Primary Colors:")
for color in PrimaryColor:
    print(color.name)

print("Secondary Colors:")
for color in SecondaryColor:
    print(color.name)