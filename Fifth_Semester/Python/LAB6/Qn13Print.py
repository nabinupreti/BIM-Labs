class Printer:
  def print(self, data):
    if isinstance(data, list):
      for item in data:
        print(item)
    else:
      print(data)

# Create an instance of the Printer class and print data
printer = Printer()
printer.print("Hello, World!")
printer.print(["Line 1", "Line 2", "Line 3"])