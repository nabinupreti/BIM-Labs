#calculate grade on the basis of their score
# 90-100 : A
# 80-89 : B
# 70-79 : C 
# 60-69 : D 
# Below 60 : F 

marks = int(input("Enter marks obtained: "))

if marks >= 90:
    grade = "A"
elif marks >= 80:
    grade = "B"
elif marks >= 70:
    grade = "C"
elif marks >= 60:
    grade = "D"
else:
    grade = "F"

print("You obtained a grade: ",grade)