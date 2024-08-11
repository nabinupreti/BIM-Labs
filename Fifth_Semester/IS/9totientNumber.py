#  Write a program to find Totient number of given integer n.

# Function to return
# gcd of a and b
def gcd(a, b):

    if (a == 0):
        return b
    return gcd(b % a, a)

# A simple method to evaluate
# Euler Totient Function
def phi(n):

    result = 1
    for i in range(2, n):
        if (gcd(i, n) == 1):
            result+=1
    return result

# Driver Code
n = int(input("Enter a integer to find Totient number:"))
print(f"Totient number of {n} = ", phi(n))