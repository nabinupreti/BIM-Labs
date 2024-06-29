#sum_to_n() find the sum of 1 to n using recursion
def sum_to_n(n):
    if n == 1:
        return 1
    else:
        return n + sum_to_n(n-1)
    
num = int(input("Enter a number: "))
print(f"Sum of all integer from 1 to {num} is", sum_to_n(num))
