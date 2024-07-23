class Printable:
    def print_info(self):
        print("Printing information from Printable")

class DataHolder:
    def get_data(self):
        print("Getting data from DataHolder")

class Report(Printable, DataHolder):
    def __init__(self, info, data):
        self.info = info
        self.data = data

    def print_info(self):
        print(f"Report info: {self.info}")

    def get_data(self):
        print(f"Report data: {self.data}")

# Create an instance of Report
report = Report("Annual Report", "2023 Data")

# Call methods
report.print_info()
report.get_data()