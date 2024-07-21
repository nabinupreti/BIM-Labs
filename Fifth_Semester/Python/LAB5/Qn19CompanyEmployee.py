class Company:
  employees = []

  def __init__(self, name):
    self.name = name
    Company.employees.append(self)

  @classmethod
  def add_employee(cls, employee):
    cls.employees.append(employee)

  @classmethod
  def remove_employee(cls, employee):
    cls.employees.remove(employee)

  @classmethod
  def display_employees(cls):
    print("Employees:")
    for emp in cls.employees:
      print(emp.name)

# Create objects of the Company class
emp1 = Company("Alice")
emp2 = Company("Bob")
Company.display_employees()
Company.remove_employee(emp2)
Company.display_employees()