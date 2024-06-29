#make_multiplier() that takes a number n and returns a function that multiplies its argument by n 

def make_multiplier(n):
    #function that multiplies its arguments by n
    def multiplier(x):
        return x*n
    return multiplier

times = make_multiplier(5)
res = times(3)
print("Multiplication result is",res)
        

    