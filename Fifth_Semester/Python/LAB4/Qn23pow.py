#recursively find base raised to power exp
def power(base,exp):
    if exp==0:
        return 1
    else:
        return base*power(base,exp-1)
print("2 raised to power 3 is",power(2,3))     