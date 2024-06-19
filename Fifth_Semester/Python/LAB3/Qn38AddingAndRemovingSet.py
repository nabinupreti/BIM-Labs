# Demonstrate adding and removing items from a set using methods like add(), remove(), discard(), pop()

s = {1, 2, 3}
print("Original set:", s)

# Adding items
s.add(4)
print("After adding 4:", s)

# Removing items
s.remove(2)
print("After removing 2:", s)

# Discarding items (does not raise error if item is not present)
s.discard(5)
print("After discarding 5 (not in set):", s)

# Popping items (removes a random item)
popped_item = s.pop()
print("Popped item:", popped_item)
print("Set after pop:", s)

