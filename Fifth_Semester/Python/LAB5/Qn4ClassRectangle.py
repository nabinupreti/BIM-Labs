class Rectangle:
  def readdata(self):
    self.length=int(input("Enter Length: "))
    self.breadth=int(input("Enter Breadth: "))
  
  def area(self):
    return self.length*self.breadth
    
  def perimeter(self):
    return 2*(self.length+self.breadth)
  
  def display(self):
    print("Area of Rectangle: ",self.area())
    print("Perimeter of Rectangle: ",self.perimeter())
    
rectangle = Rectangle()
rectangle.readdata()
rectangle.display()