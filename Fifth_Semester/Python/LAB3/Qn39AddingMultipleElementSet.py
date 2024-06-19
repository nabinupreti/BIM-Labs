#Add multiple elements to a set at once
#Use the update() method to add multiple elements to a set at once.
#The update() method takes an iterable (like a list, tuple, or string) as an argument and adds all its elements to the set.

s = {1, 2, 3}
s.update([4, 5, 6])
print("After update:",s)