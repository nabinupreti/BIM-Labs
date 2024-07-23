class Product:
    def __init__(self, price):
        self.price = price

    def get_discount(self):
        pass

class Book(Product):
    def __init__(self, price, discount):
        super().__init__(price)
        self.discount = discount

    def get_discount(self):
        return self.price - self.discount

class Electronics(Product):
    def __init__(self, price, discount_percentage):
        super().__init__(price)
        self.discount_percentage = discount_percentage

    def get_discount(self):
        return self.price * (1 - self.discount_percentage)

# Create instances of Book and Electronics classes and calculate discounts
book = Book(50, 10)
electronics = Electronics(200, 0.15)

print(f"Book price after discount: ${book.get_discount():.2f}")
print(f"Electronics price after discount: ${electronics.get_discount():.2f}")