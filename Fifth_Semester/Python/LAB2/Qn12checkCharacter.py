char = input('Enter a character: ')
char = char.lower()
if char >= 'a' and char <= 'z':
    print(f"{char} is alphabet.")
elif char >= '0' and char <= '9':
    print(f"{char} is digit")
else:
    print(f"{char} is special character.")