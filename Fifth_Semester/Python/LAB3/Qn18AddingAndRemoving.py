# To demonstrade adding and removing items from list using method like append(), insert(), remove(), pop(), del
def add_remove_items(lst):
    print("Original list: ",lst)
    lst.append(4)
    print("After appending 4:", lst)
    lst.insert(1, 10)
    print("after inserting 10 to index 1:", lst)
    lst.remove(2)
    print("After removing 2", lst)
    lst.pop()
    print("after pop():", lst)
    del lst[0]
    print("Aftre delete lst[0]:", lst)

lst = [1, 2, 3, 4]
add_remove_items(lst)
