#Print list untill -ve number encountered

numbers = [1,2,33,43,-4,33,222]

for i in numbers:
    if i < 0:
        print("-ve encountered")
        break
    print(i, end = ", ")
    