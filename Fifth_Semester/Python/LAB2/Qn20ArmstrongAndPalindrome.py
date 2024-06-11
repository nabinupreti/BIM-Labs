n = int(input("Enter the number: "))
num = n
rev = 0
sum = 0
while n > 0:
    rem = n % 10
    rev = rev*10+rem
    sum += rem ** 3
    n //= 10
 
if rev == num:
    print(f"The given number {num} is Palindrome")
else:
    print(f"The given number {num} is Not Palindrome")
    
if sum == num:
    print(f"The given number {num} is Armstrong")
else:
    print(f"The given number {num} is Not Armstrong")
    
