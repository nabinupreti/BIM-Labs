# importing the required libraries
import hashlib
# making a message
inputstring = "This is a message sent by a computer user."
# encoding the message using the library function
output = hashlib.md5(inputstring.encode())
# printing the hash function
print("Hash of the input string:")
print(output.hexdigest())
