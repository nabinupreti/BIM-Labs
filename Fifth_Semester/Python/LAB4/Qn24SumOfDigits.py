#recursive function to find sum of digits
def sum_digits(n):
    if n == 0:
        return 0
    else:
        return (n % 10) + sum_digits(n // 10)
#main function
n = int(input("Enter a number: "))
print("Sum of digits is: ", sum_digits(n))