#Print middle character of string
s = input("Enter a string: ")

mid = len(s) // 2
if len(s) % 2 == 0:
    print("Middle characters:", s[mid-1:mid+1])
else:
    print("Middle character:", s[mid])
