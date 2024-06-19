#to remove duplicate element in list

lst = [1, 3, 3, 22, 442]

#converting into remove duplicate
removeDuplicate = set(lst)

lst = list(removeDuplicate)

print("After removing duplicate: ",lst)