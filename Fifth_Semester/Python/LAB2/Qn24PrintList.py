# To take a list of integers and print each element in the list using for loop
numbers = input("Enter list of numbers separated by spaces: ")
numbers = list(map(int, numbers.split()))
print (list(numbers))
print("Displaying list of numbers using loop:  ")
for num in numbers:
    print(num)