# divide_and_remainder() that takes two number and return quotient and remainder
def divide_and_remainder(dividend, divisor):
    quotient = dividend // divisor
    remainder = dividend % divisor
    

# test the function
dividend = 17
divisor = 3
quotient, remainder = divide_and_remainder(dividend, divisor)
print(f"Dividend: {dividend}, Divisor: {divisor}")
print(f"Quotient: {quotient}, Remainder: {remainder}")  # Output