#Copying list
import copy
lst = [1, 2, 3, 4]
shallow_copy = lst.copy()
deep_copy = copy.deepcopy(lst)
print("Shallow copy:", shallow_copy)
print("Deep copy:", deep_copy)
