num = int(input("Enter a number: "))

print("finding factorial of",num)
fact = 1
for i in range(1,num+1):
    fact *= i

print("Using for loop: ",fact)

fact = 1
while(num > 0):
    fact *= num
    num -= 1

print("Using while loop: ",fact)