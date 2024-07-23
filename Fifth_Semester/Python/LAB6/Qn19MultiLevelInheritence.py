class Student:
    def __init__(self):
        self.roll_no = None

    def read_roll_no(self, roll_no):
        self.roll_no = roll_no

    def display_roll_no(self):
        print(f"Roll No: {self.roll_no}")

class Test(Student):
    def __init__(self):
        super().__init__()
        self.mark1 = None
        self.mark2 = None

    def read_marks(self, mark1, mark2):
        self.mark1 = mark1
        self.mark2 = mark2

    def display_marks(self):
        print(f"Mark 1: {self.mark1}, Mark 2: {self.mark2}")

class Result(Test):
    def __init__(self):
        super().__init__()
        self.total = None

    def calculate_total(self):
        self.total = self.mark1 + self.mark2

    def display_total(self):
        print(f"Total Marks: {self.total}")

# Create an instance of the Result class
result = Result()

# Read roll number, marks, and calculate total
result.read_roll_no(101)
result.read_marks(85, 90)
result.calculate_total()

# Display roll number, marks, and total
result.display_roll_no()
result.display_marks()
result.display_total()