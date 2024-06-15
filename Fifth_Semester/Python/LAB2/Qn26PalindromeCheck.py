#check string is palindrome or not
txt = (input("Enter the string: "))
rev = txt[::-1]
if rev == txt:
    print(f"The given string is Palindrome")
else:
    print(f"The given string is Not Palindrome")
