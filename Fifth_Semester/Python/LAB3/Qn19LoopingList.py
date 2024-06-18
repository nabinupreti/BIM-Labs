# Looping through list
lst = [1, 2, 3, 4, 5]
print("Using For loop:")
for item in lst:
    print(item, end = ", ")
    
print("\nUsing While loop:")
i = 0
while i < len(lst):
    print(lst[i], end = ", ")
    i += 1
