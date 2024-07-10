
class Book:
    def __init__(self, title, author, genre):
        self.title = title
        self.author = author
        self.genre = genre

    def getdata(self):
        return f"Title: {self.title}, Author: {self.author}, Genre: {self.genre}"

# Create an object of the Book class
book = Book("1984", "George Orwell", "Dystopian")
print(book.getdata())

