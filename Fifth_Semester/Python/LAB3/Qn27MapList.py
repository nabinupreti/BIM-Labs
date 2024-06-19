#to map each elements of list to its corresponding index
lst = ['a', 'b', 'c']
mapped = { i : lst[i] for i in range(len(lst))}
print("Mapped list:", mapped)

