# To find the no. of and sum of all integers 100<num<200 that are exactly divisible by 7 but not by 5

sum = 0
num = 0
for i in range(100,200):
    if i % 7 == 0 and i % 5 != 0:
        sum += i
        num += 1

print("Integers 100<num<200 divisible by 7 but not by 5: ")
print("Number: ",num)
print("Sum: ",sum)