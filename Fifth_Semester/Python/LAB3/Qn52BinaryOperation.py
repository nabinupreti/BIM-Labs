# Demonstrate binary operations on binary data using the bytes and bytearray data types
b1 = bytes([1,2])
b2 = bytes([4,5])

# Binary operations (bytes are immutable)
combined_bytes = b1+b2
print("combined_bytes:",combined_bytes)

ba1 = bytearray([1,2])
ba2 = bytearray([4,5])

# Binary operations (bytearray is mutable)
combined_bytearray = ba1+ba2
print("combined_bytearray:",combined_bytearray)

#modify bytearray
ba1[0] = 10
print("modified bytearray:",ba1)


