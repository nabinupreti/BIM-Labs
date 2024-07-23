class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email

    def display_info(self):
        print(f"User: {self.username}, Email: {self.email}")

class Buyer(User):
    def __init__(self, username, email, shipping_address):
        super().__init__(username, email)
        self.shipping_address = shipping_address

    def display_info(self):
        super().display_info()
        print(f"Shipping Address: {self.shipping_address}")

class Seller(User):
    def __init__(self, username, email, store_name):
        super().__init__(username, email)
        self.store_name = store_name

    def display_info(self):
        super().display_info()
        print(f"Store Name: {self.store_name}")

class Admin(Buyer, Seller):
    def __init__(self, username, email, shipping_address, store_name):
        Buyer.__init__(self, username, email, shipping_address)
        Seller.__init__(self, username, email, store_name)

    def display_info(self):
        print("Admin Information:")
        Buyer.display_info(self)
        Seller.display_info(self)

# Create instances of Buyer, Seller, and Admin
buyer = Buyer("john_doe", "john@example.com", "123 Main St")
seller = Seller("jane_doe", "jane@example.com", "Jane's Store")
admin = Admin("admin_user", "admin@example.com", "456 Admin St", "Admin's Store")

# Display information for each instance
print("Buyer Information:")
buyer.display_info()
print("\nSeller Information:")
seller.display_info()
print("\nAdmin Information:")
admin.display_info()