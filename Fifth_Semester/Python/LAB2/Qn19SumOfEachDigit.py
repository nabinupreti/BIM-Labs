n = int(input("Enter a number: "))
num = n
sum = 0
while n > 0:
    rem = n % 10
    sum += rem
    n //= 10
    
print(f"Sum of each digit of {num} is {sum}")