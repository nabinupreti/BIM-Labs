#class named book with attributes title, author, and genre.Constructor to initialize these attributes and create an object 
class Book:
    title, author, genre = "","",""
    def __init__(self, title, author, genre):
        self.title = title
        self.author = author
        self.genre = genre

obj = Book("It Starts with Us", "Collen Hoover", "Love")

print("Book is",obj.title)