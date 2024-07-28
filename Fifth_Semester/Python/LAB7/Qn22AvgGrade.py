def write_student_grades(filename, student_grades):
    with open(filename, 'w') as file:
        for student, grades in student_grades.items():
            grades_str = ", ".join(map(str, grades))
            file.write(f"{student}: {grades_str}\n")

def display_above_average_students(filename, threshold=50):
    with open(filename, 'r') as file:
        for line in file:
            student, grades_str = line.split(': ')
            grades = list(map(int, grades_str.split(', ')))
            average = sum(grades) / len(grades)
            if average > threshold:
                print(student)

student_grades = {
    'Student1': [55, 60, 65, 70, 75],
    'Student2': [45, 50, 55, 60, 65],
    'Student3': [30, 35, 40, 45, 50],
}

write_student_grades('grades.txt', student_grades)
display_above_average_students('grades.txt')