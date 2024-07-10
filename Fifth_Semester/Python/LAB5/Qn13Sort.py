class Sort:
  def __init__(self,n):
    self.n = n
    self.array = []
    
  def getdata(self):
    print(f"Enter {self.n} elements")
    for i in range(self.n):
      self.array.append(int(input(f"Enter element {i+1}: ")))

  def sorting(self):
    self.array.sort()

  def dispdata(self):
    print(f"Sorted array: {self.array}")

sort_obj = Sort(5)
sort_obj.getdata()  
sort_obj.sorting()
sort_obj.dispdata()
