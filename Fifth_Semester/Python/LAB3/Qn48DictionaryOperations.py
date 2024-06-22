#Demonstrate various dictionary operations like accessing items, adding and removing items, iterating through keys and values
d = {"a": 1, "b": 2, "c":3}
print("Original dictionary: ", d)

#accessing items
print("Accessing item: ", d["a"])

#adding item
d["d"] = 4
print("After adding key 'd':", d)

#removing item
del d["a"]
print("After removing key 'a':", d)

# Iterating through keys and values
print("Iterating through dictionary:")
for key, value in d.items():
    print(f"Key: {key}, Value: {value}")