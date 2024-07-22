class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, age, grades):
        super().__init__(name, age)
        self.grades = grades

# Create an instance of the Student class
student = Student("John Doe", 20, "A")

# Print the attributes
print(f"Name: {student.name}, Age: {student.age}, Grades: {student.grades}")