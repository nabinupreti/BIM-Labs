class Account:
    def __init__(self, customer_name, account_number, account_type, balance=0.0):
        self.customer_name = customer_name
        self.account_number = account_number
        self.account_type = account_type
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited: {amount}")

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient balance")
        else:
            self.balance -= amount
            print(f"Withdrawn: {amount}")

    def display_balance(self):
        print(f"Balance: {self.balance}")

class SavingAccount(Account):
    def __init__(self, customer_name, account_number, balance=0.0):
        super().__init__(customer_name, account_number, "Saving", balance)

# Create an instance of the SavingAccount class
savings = SavingAccount("John Doe", "123456789")

# Accept deposit, withdraw, and display balance
savings.deposit(1000)
savings.display_balance()
savings.withdraw(500)
savings.display_balance()
savings.withdraw(600)  # This should trigger an insufficient balance message