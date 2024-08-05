# Write a program to find all the primitive root of prime number P
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def is_primitive_root(g, p):
    if gcd(g, p) != 1:
        return False

    required_set = set(num for num in range(1, p) if gcd(num, p) == 1)
    actual_set = set(pow(g, powers, p) for powers in range(1, p))
    
    return required_set == actual_set

def find_primitive_roots(p):
    primitive_roots = []
    for g in range(1, p):
        if is_primitive_root(g, p):
            primitive_roots.append(g)
    return primitive_roots

# Example usage
if __name__ == "__main__":
    p = 23  # Example prime number
    print(f"Primitive roots of {p}: {find_primitive_roots(p)}")
