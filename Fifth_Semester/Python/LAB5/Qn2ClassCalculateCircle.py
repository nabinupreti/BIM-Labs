class Circle:
    def getdata(self, radius):
        self.radius = radius

    def calcarea(self):
        return 3.14 * self.radius * self.radius

    def display(self):
        print(f"Radius: {self.radius}, Area: {self.calcarea()}")

# Create an object of the Circle class
circle = Circle()
circle.getdata(5)
circle.display()