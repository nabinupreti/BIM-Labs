class Battery:
    def __init__(self, capacity):
        self.capacity = capacity

class ElectricCar:
    def __init__(self, make, model, battery):
        self.make = make
        self.model = model
        self.battery = battery

# Create an instance of the Battery class
battery = Battery(75)  # Example capacity in kWh

# Create an instance of the ElectricCar class
electric_car = ElectricCar("Tesla", "Model S", battery)

# Print the attributes
print(f"Make: {electric_car.make}, Model: {electric_car.model}, Battery Capacity: {electric_car.battery.capacity} kWh")