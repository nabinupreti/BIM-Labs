class Sphere:
    def getdata(self):
        self.radius = float(input("Enter radius of the sphere: "))

    def area(self):
        return 4 * 3.14 * self.radius ** 2

    def volume(self):
        return (4 / 3) * 3.14 * self.radius ** 3

    def display(self):
        print(f"Radius: {self.radius}, Area: {self.area()}, Volume: {self.volume()}")

# Create an object of the Sphere class
sphere = Sphere()
sphere.getdata()
sphere.display()