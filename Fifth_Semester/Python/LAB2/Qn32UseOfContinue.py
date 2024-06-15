print("Numbers from 1-10 skipping 5 and 7 are: ")

for i in range(1,11):
    if i == 5 or i == 7:
        continue
    print(i, end = ", ")