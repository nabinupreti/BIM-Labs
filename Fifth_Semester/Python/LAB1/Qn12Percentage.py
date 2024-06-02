name = input("Enter your name: ")

marks = []
for i in range(1, 6):
    mark = float(input(f"Enter marks obtained in subject {i}: "))
    marks.append(mark)
    
total = sum(marks)

percentage = (total / 500) * 100

print(f"{name} obtained {percentage:.2f} percentage")