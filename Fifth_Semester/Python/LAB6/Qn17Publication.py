class Publication:
    def __init__(self, title, price):
        self.title = title
        self.price = price

    def getdata(self):
        self.title = input("Enter title: ")
        self.price = float(input("Enter price: "))

    def putdata(self):
        print(f"Title: {self.title}, Price: {self.price}")

class Book(Publication):
    def __init__(self, title="", price=0.0, pages=0):
        super().__init__(title, price)
        self.pages = pages

    def getdata(self):
        super().getdata()
        self.pages = int(input("Enter number of pages: "))

    def putdata(self):
        super().putdata()
        print(f"Pages: {self.pages}")

class CDROM(Publication):
    def __init__(self, title="", price=0.0, playtime=0):
        super().__init__(title, price)
        self.playtime = playtime

    def getdata(self):
        super().getdata()
        self.playtime = float(input("Enter playtime in minutes: "))

    def putdata(self):
        super().putdata()
        print(f"Playtime: {self.playtime} minutes")

# Create instances of Book and CDROM classes and demonstrate operations
book = Book()
cdrom = CDROM()

print("Enter book details:")
book.getdata()
print("Book details:")
book.putdata()

print("\nEnter CD-ROM details:")
cdrom.getdata()
print("CD-ROM details:")
cdrom.putdata()