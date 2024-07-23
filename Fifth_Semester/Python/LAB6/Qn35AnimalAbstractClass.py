from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass
    
    @abstractmethod
    def sleep(self):
        pass
    
    @abstractmethod
    def make_sound(self):
        pass

class Dog(Animal):
    def eat(self):
        print("Dog is eating")
    
    def sleep(self):
        print("Dog is sleeping")
    
    def make_sound(self):
        print("Woof")
    
class Cat(Animal):
    def eat(self):
        print("Cat is eating")
        
    def sleep(self):
        print("Cat is sleeping")
    
    def make_sound(self):
        print("Meow")
    
dog = Dog()
cat = Cat()
dog.eat()
dog.sleep()
dog.make_sound()
cat.eat()
cat.sleep()
cat.make_sound()
