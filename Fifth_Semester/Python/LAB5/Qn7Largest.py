class NumberCompare:
  def input(self):
    self.a = int(input("Enter the first number: "))
    self.b = int(input("Enter the second number: "))
    self.c = int(input("Enter third number: "))
  def largest(self):
    if self.a > self.b and self.a > self.c:
      return self.a
    elif self.b > self.a and self.b > self.c:
      return self.b
    else:
      return self.c
    
  def display(self):
    print("The largest number is: ", self.largest())

compare = NumberCompare()
compare.input()
compare.display()
