shape = input("Enter dimension of shape(separated with , eg : 10,20): ")

tup = shape.split(',')
ch = 'circle' if len(tup) == 1 else 'rectangle'

match ch:
    case 'circle':
        print(f"You have entered circle and its radius is {tup[0]}")
        
    case 'rectangle':
        print(f"You have entered rectangle and its length is {tup[0]} and width is {tup[1]}")
    case _:
        print("Invalid input!!")