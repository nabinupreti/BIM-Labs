from abc import ABC, abstractmethod
class Employee(ABC):
    def __init__(self, name, department):
        self.name = name
        self.department = department

    @abstractmethod
    def calculate_bonus(self):
        pass

class Manager(Employee):
    def __init__(self, name, department, bonus_percentage):
        super().__init__(name, department)
        self.bonus_percentage = bonus_percentage

    def calculate_bonus(self):
        return f"Manager {self.name} bonus: {self.bonus_percentage * 100:.2f}% of salary"

class Engineer(Employee):
    def __init__(self, name, department, bonus_amount):
        super().__init__(name, department)
        self.bonus_amount = bonus_amount

    def calculate_bonus(self):
        return f"Engineer {self.name} bonus: ${self.bonus_amount:.2f}"

class Salesperson(Employee):
    def __init__(self, name, department, sales_percentage):
        super().__init__(name, department)
        self.sales_percentage = sales_percentage

    def calculate_bonus(self):
        return f"Salesperson {self.name} bonus: {self.sales_percentage * 100:.2f}% of sales"

def pay_bonuses(employees):
    for employee in employees:
        print(employee.calculate_bonus())

# Create instances of Manager, Engineer, and Salesperson
manager = Manager("Alice", "Management", 0.10)
engineer = Engineer("Bob", "Engineering", 5000)
salesperson = Salesperson("Charlie", "Sales", 0.05)

# List of employees
employees = [manager, engineer, salesperson]

# Pay bonuses
pay_bonuses(employees)