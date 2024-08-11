# Write a program to implement Fermat’s theorem to find value of modular exponentiation i.e. a pow n mod m.

def modular_exponentiation(base, exponent, modulus):
    if modulus == 1:
        return 0

    result = 1
    base = base % modulus
    while exponent > 0:
        if (exponent % 2) == 1:  # If exponent is odd, multiply base with result
            result = (result * base) % modulus
        exponent = exponent >> 1  # exponent = exponent // 2
        base = (base * base) % modulus  # base = base^2 % modulus
    return result

# Example usage
if __name__ == "__main__":
    base = 5
    exponent = 3
    modulus = 13
    print(f"{base}^{exponent} mod {modulus} =", modular_exponentiation(base, exponent, modulus))
