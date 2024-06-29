#Use filter and a lambda function to filter out even numbers from a list [1, 2, 3, 4, 5, 6, 7, 8, 9, 10].

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

oddLst = list(filter(lambda x: x % 2 != 0, lst))

print("Odd numbers are",oddLst)