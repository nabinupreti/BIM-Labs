from abc import ABC, abstractmethod
class Lecturer(ABC):
    def __init__(self, id, name):
        self.id = id
        self.name = name

    @abstractmethod
    def getdata(self):
        pass

    @abstractmethod
    def putdata(self):
        pass

class Part_Time(Lecturer):
    def __init__(self, id="", name="", payPerHour=0):
        super().__init__(id, name)
        self.payPerHour = payPerHour

    def getdata(self):
        self.id = input("Enter ID: ")
        self.name = input("Enter name: ")
        self.payPerHour = float(input("Enter pay per hour: "))

    def putdata(self):
        print(f"ID: {self.id}, Name: {self.name}")
        print(f"Pay per Hour: {self.payPerHour}")

class Full_Time(Lecturer):
    def __init__(self, id="", name="", payPerMonth=0):
        super().__init__(id, name)
        self.payPerMonth = payPerMonth

    def getdata(self):
        self.id = input("Enter ID: ")
        self.name = input("Enter name: ")
        self.payPerMonth = float(input("Enter pay per month: "))

    def putdata(self):
        print(f"ID: {self.id}, Name: {self.name}")
        print(f"Pay per Month: {self.payPerMonth}")

# Create instances of Part_Time and Full_Time classes and demonstrate operations
part_time_lecturer = Part_Time()
full_time_lecturer = Full_Time()

print("Enter part-time lecturer details:")
part_time_lecturer.getdata()
print("Part-time Lecturer details:")
part_time_lecturer.putdata()

print("\nEnter full-time lecturer details:")
full_time_lecturer.getdata()
print("Full-time Lecturer details:")
full_time_lecturer.putdata()