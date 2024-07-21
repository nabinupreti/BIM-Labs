<<<<<<< HEAD
#class named book with attributes title, author, and genre.Constructor to initialize these attributes and create an object 
class Book:
    title, author, genre = "","",""
=======
class Book:
>>>>>>> e01c1294cbab4aab787b228945177fcaf495d5ee
    def __init__(self, title, author, genre):
        self.title = title
        self.author = author
        self.genre = genre

<<<<<<< HEAD
obj = Book("It Starts with Us", "Collen Hoover", "Love")

print("Book is",obj.title)
=======
    def getdata(self):
        return f"Title: {self.title}, Author: {self.author}, Genre: {self.genre}"

# Create an object of the Book class
book = Book("1984", "George Orwell", "Dystopian")
print(book.getdata())
>>>>>>> e01c1294cbab4aab787b228945177fcaf495d5ee
