from abc import ABC, abstractmethod
class Shape(ABC):
    
    @abstractmethod
    def volume(self):
        pass

class Sphere(Shape):
    def __init__(self,r):
        self.r = r
        
    def volume(self):
        return 4/3*3.14*self.r**3

class Cube(Shape):
    def __init__(self,a):
        self.a = a
    
    def volume(self):
        return self.a**3
    
class Cone(Shape):
    def __init__(self,r,h):
        self.r = r
        self.h = h
        
    def volume(self):
        return 1/3*3.14*self.r**2*self.h

sphere = Sphere(3)
cube = Cube(4)
cone = Cone(2,3)

print("Volume of Sphere:%.2f"%sphere.volume())
print("Volume of cube:%.2f"%cube.volume())
print("Volume of Cone:%.2f"%cone.volume())