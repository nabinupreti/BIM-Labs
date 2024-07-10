class Student:
  current_semester = "Fall 2024"

  def __init__(self, name):
    self.name = name

  def display(self):
    print(f"Student: {self.name}, Current Semester: ", self.current_semester)
  
student1 = Student("Nabin")
student1.display()
student2 = Student("Sujan")
student2.display()