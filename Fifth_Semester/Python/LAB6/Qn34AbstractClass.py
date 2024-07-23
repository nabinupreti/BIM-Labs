from abc import ABC, abstractmethod

class Flyable(ABC):
    @abstractmethod
    def fly(self):
        pass

class Swimmable(ABC):
    @abstractmethod
    def swim(self):
        pass

class Duck(Flyable, Swimmable):
    def fly(self):
        print("I'm flying")
    
    def swim(self):
        print("I'm swimming")
    
class Penguin(Swimmable):
    def swim(self):
        print("I'm swimming")
        
duck = Duck()
duck.fly()
duck.swim()
penguin = Penguin()
penguin.swim()
