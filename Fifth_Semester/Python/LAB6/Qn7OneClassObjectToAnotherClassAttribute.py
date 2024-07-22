class Address:
    def __init__(self, street, city):
        self.street = street
        self.city = city

class Person:
    def __init__(self, name, address):
        self.name = name
        self.address = address

# Create an instance of the Address and Person classes
address = Address("123 Main St", "Springfield")
person = Person("John Doe", address)

# Print the attributes
print(f"Name: {person.name}, Street: {person.address.street}, City: {person.address.city}")