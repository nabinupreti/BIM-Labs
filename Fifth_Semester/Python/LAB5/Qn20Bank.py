class Bank:
    accounts = []

    def __init__(self, account_number, balance):
        self.account_number = account_number
        self.balance = balance
        Bank.accounts.append(self)

    @classmethod
    def open_account(cls, account):
        cls.accounts.append(account)

    @classmethod
    def close_account(cls, account):
        cls.accounts.remove(account)

    @classmethod
    def display_accounts(cls):
        print("Accounts:")
        for acc in cls.accounts:
            print(f"Account Number: {acc.account_number}, Balance: {acc.balance}")

# Create objects of the Bank class
acc1 = Bank(101, 500.0)
acc2 = Bank(102, 1000.0)
Bank.display_accounts()
Bank.close_account(acc1)
Bank.display_accounts()