class Car:
    def __init__(self, make="Toyota", model="Corolla"):
        self.make = make
        self.model = model

# Create instances of the Car class with and without parameters
car1 = Car()
car2 = Car("Honda", "Civic")

# Print the attributes
print(f"Car1 - Make: {car1.make}, Model: {car1.model}")
print(f"Car2 - Make: {car2.make}, Model: {car2.model}")