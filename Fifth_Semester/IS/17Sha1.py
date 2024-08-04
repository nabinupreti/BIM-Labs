# Python 3 code to demonstrate 
# SHA hash algorithms. 

import hashlib 

# initializing string 
str = "Nabin"

# encoding GeeksforGeeks using encode() 
# then sending to SHA256() 
result = hashlib.sha256(str.encode()) 

# printing the equivalent hexadecimal value. 
print("The hexadecimal equivalent of SHA256 is : ") 
print(result.hexdigest()) 

print ("\r") 

# initializing string 
str = "Nabin"

# encoding GeeksforGeeks using encode() 
# then sending to SHA1() 
result = hashlib.sha1(str.encode()) 

# printing the equivalent hexadecimal value. 
print("The hexadecimal equivalent of SHA1 is : ") 
print(result.hexdigest()) 
