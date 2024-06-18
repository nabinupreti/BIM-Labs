#using list comprehension to create list based on existing lists
lst = [1, 2, 3, 4, 5]
print("Original list is : ",lst)

# square
lst = [x**2 for x in lst]

print("Square of list is : ",lst)