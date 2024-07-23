from abc import ABC, abstractmethod
class Device(ABC):
    @abstractmethod
    def turn_on(self):
        pass

    @abstractmethod
    def turn_off(self):
        pass

    @abstractmethod
    def restart(self):
        pass

class Laptop(Device):
    def __init__(self, battery_life):
        self.battery_life = battery_life

    def turn_on(self):
        print("Laptop is turning on.")

    def turn_off(self):
        print("Laptop is turning off.")

    def restart(self):
        print("Laptop is restarting.")

    def show_battery_life(self):
        print(f"Laptop battery life: {self.battery_life} hours")

class Smartphone(Device):
    def __init__(self, screen_size):
        self.screen_size = screen_size

    def turn_on(self):
        print("Smartphone is turning on.")

    def turn_off(self):
        print("Smartphone is turning off.")

    def restart(self):
        print("Smartphone is restarting.")

    def show_screen_size(self):
        print(f"Smartphone screen size: {self.screen_size} inches")

class Tablet(Device):
    def __init__(self, storage_capacity):
        self.storage_capacity = storage_capacity

    def turn_on(self):
        print("Tablet is turning on.")

    def turn_off(self):
        print("Tablet is turning off.")

    def restart(self):
        print("Tablet is restarting.")

    def show_storage_capacity(self):
        print(f"Tablet storage capacity: {self.storage_capacity} GB")

# Create instances of Laptop, Smartphone, and Tablet
laptop = Laptop(10)
smartphone = Smartphone(6.5)
tablet = Tablet(128)

# Call methods for each
laptop.turn_on()
laptop.turn_off()
laptop.restart()
laptop.show_battery_life()