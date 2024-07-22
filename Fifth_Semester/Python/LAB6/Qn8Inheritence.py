class Vehicle:
    def __init__(self, make, model):
        self.make = make
        self.model = model

class Car(Vehicle):
  def __init__(self, make, model, year):
    super().__init__(make, model)
    self.year = year

# Create an instance of the Car class
car = Car("Toyota", "Corolla", 2020)

# Print the attributes
print(f"Make: {car.make}, Model: {car.model}, Year: {car.year}")