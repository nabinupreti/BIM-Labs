#WAP to check whether a number is prime or not
num = int(input("Enter a  number: "))
i = 2
flag = 0
while i < num:
    if num % i == 0:
        flag += 1
        break
    i += 1
else:
    print(f"{num} is prime")
    
if(flag):
    print(f"{num} is not prime")