#Check duplicates or not in list
def hasDuplicate(list1):
    index1 = 0
    while index1 < len(list1):
        index2 = index1 + 1
        while index2 < len(list1):
            if list1[index1] == list1[index2]:
                return True
                break
            index2 += 1
        index1 += 1
    return False
        
        
list1 = ["apple", "banana", "orange", "kiwi", "apple"]
if hasDuplicate(list1):
    print("Duplicate Found")


        