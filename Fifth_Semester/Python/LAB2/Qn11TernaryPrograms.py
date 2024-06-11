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