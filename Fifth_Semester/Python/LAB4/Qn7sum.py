#function that takes any number of positional arguments and return their sum
def sum_all(*args):
    return sum(args)

print("Sum is",sum_all(1,2,3,4,5))