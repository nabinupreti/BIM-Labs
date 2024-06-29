#use map to create a list of squares from a list of numbers
#[1,2,3,4,5]

numbers = [1,2,3,4,5]

sqNum = list(map(lambda x : x**2, numbers))

print("Square of given list is",sqNum)