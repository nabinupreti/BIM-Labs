class IntAmount:
    def getdata(self):
        self.principle = float(input("Enter principle: "))
        self.rate = float(input("Enter rate: "))
        self.time = int(input("Enter time period: "))

    def interest(self):
        return (self.principle * self.rate * self.time) / 100

    def amount(self):
        return self.principle + self.interest()

    def display(self):
        print(f"Principle: {self.principle}, Rate: {self.rate}, Time: {self.time}, Interest: {self.interest():.2f}, Amount: {self.amount():.2f}")

# Create an object of the IntAmount class
int_amount = IntAmount()
int_amount.getdata()
int_amount.display()