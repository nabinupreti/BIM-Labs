#check odd even
x = int(input("Enter a number: "))

y = "even" if x % 2 == 0 else "odd"

print("The number is",y)

#positive or negative
y = 'positive' if x > 0 else 'negative'

print("The number is",y)

#greatest among 3
num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: "))
num3 = int(input("Enter num3: "))

y = num1 if (num1 > num2 and num1 > num3) else (num2 if num2 > num3  else num3)

print("Greatest among",num1,",",num2,"and",num3,"is", y)

#smallest among four
num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: "))
num3 = int(input("Enter num3: "))
num4 = int(input("Enter num4: "))

y = num1 if (num1 < num2 and num1 < num3 and num1 < num4) else (num2 if (num2 < num3 and num2 < num4) else num3 if (num3 < num4) else num4)
print(f"Smallest among {num1}, {num2}, {num3}, and {num4} is {y}")

