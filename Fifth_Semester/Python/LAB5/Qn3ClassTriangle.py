class Triangle:
    def getdata(self, base, height):
        self.base = base
        self.height = height

    def calcarea(self):
        return 0.5 * self.base * self.height

    def display(self):
        print(f"Base: {self.base}, Height: {self.height}, Area: {self.calcarea()}")

# Create an object of the Triangle class
triangle = Triangle()
triangle.getdata(5, 7)
triangle.display()