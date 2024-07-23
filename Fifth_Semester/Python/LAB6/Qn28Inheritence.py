class A:
    def method_a(self):
        print("Method A from class A")

class B(A):
    def method_a(self):
        print("Method A from class B")
        super().method_a()

class C(A):
    def method_a(self):
        print("Method A from class C")
        super().method_a()

class D(B, C):
    def method_a(self):
        print("Method A from class D")
        super().method_a()

# Create an instance of class D and call method_a
d = D()
d.method_a()

# Print the method resolution order
print(D.__mro__)