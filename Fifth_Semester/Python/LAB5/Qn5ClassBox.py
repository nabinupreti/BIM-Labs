class Box:
    def Readvalues(self, width, height, depth):
        self.width = width
        self.height = height
        self.depth = depth

    def area(self):
        return 2 * (self.width * self.height + self.height * self.depth + self.depth * self.width)

    def volume(self):
        return self.width * self.height * self.depth

# Create an object of the Box class
box = Box()
box.Readvalues(2, 3, 4)
print(f"Area: {box.area()}, Volume: {box.volume()}")