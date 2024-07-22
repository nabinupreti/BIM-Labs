class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
class Teacher:
    def __init__(self, subject):
        self.subject = subject

class Tutor(Person, Teacher):
    def __init__(self, name, age, subject):
        Person.__init__(self, name, age)
        Teacher.__init__(self, subject)

# Create an instance of the Tutor class
tutor = Tutor("Jane Doe", 30, "Mathematics")

# Print the attributes
print(f"Name: {tutor.name}, Age: {tutor.age}, Subject: {tutor.subject}")