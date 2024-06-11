n = int(input("Enter the number of elements: "))
total = 0
for i in range(n):
    num = float(input(f"Enter number {i+1}: "))
    total += num

avg = total / n

print(f"The sum of the {n} numbers is: {total}")
print(f"The average of the {n} numbers is: {avg}")