class Student:
  id = marks = 0
  #default constructor to fix the id and marks fix value
  def __init__(self):
    self.id = 1
    self.marks = 100
  #Parametrized constructor to initialize the objects
  def __init__(self, id, marks):
    self.id = id
    self.marks = marks

  #constructor which will hold object as its parameter
  def __init__(self, obj):
    self.id = obj.id
    self.marks = obj.marks
