class Box:
    def __init__(self, width, height, depth):
        self.width = width
        self.height = height
        self.depth = depth

    def area(self):
        return 2 * (self.width * self.height + self.height * self.depth + self.depth * self.width)

    def volume(self):
        return self.width * self.height * self.depth

# Create an object of the Box class
box = Box(2.7, 3.5, 4.7)
print(f"Area: {box.area():.2f}, Volume: {box.volume():.2f}")