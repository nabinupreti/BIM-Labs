#given the list of tuple, sort the list on the basis of second element of tuple using lambda function


def list_sort(lst):
   return sorted(lst, key=lambda x: x[1])
    

lst = [(1, 3, 3), (100, 1, 2), (9, 98, 23)]
print(list_sort(lst))