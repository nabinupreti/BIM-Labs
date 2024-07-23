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

class SavingsAccount(Account):
    def __init__(self, customer_name, account_number, balance=0.0):
        super().__init__(customer_name, account_number, "Saving", balance)

class JointSavingsAccount(SavingsAccount):
    def __init__(self, customer_name1, customer_name2, account_number, balance=0.0):
        super().__init__(customer_name1, account_number, balance)
        self.customer_name2 = customer_name2
        self.authorizations = {customer_name1: False, customer_name2: False}

    def authorize_withdraw(self, customer_name):
        if customer_name in self.authorizations:
            self.authorizations[customer_name] = True
        else:
            print("Authorization failed. Customer not found.")

    def withdraw(self, amount):
        if all(self.authorizations.values()):
            super().withdraw(amount)
            self.authorizations = {k: False for k in self.authorizations}  # Reset authorizations
        else:
            print("Withdrawal requires authorization from both account holders.")

# Create an instance of JointSavingsAccount
joint_account = JointSavingsAccount("John Doe", "Jane Doe", "123456789", 1000)

# Deposit, authorize withdrawal, and display balance
joint_account.deposit(500)
joint_account.display_balance()

joint_account.authorize_withdraw("John Doe")
joint_account.authorize_withdraw("Jane Doe")
joint_account.withdraw(200)
joint_account.display_balance()

# Attempt withdrawal without proper authorization
joint_account.withdraw(200)