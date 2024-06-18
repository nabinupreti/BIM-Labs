#To change individual items in list
def change_item(lst, index, value):
    lst[index] = value
    print("Modified list:", lst)

lst = [1, 24, 23, 11]
change_item(lst, 1, 9)
