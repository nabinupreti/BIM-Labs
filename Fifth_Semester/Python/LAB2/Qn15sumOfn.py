num = int(input("Enter a number: "))

print("finding sum of all natural number upto",num)
sum = 0
for i in range(1,num+1):
    sum += i

print("Using for loop: ",sum)

sum = 0
while(num > 0):
    sum += num
    num -= 1

print("Using while loop: ",sum)