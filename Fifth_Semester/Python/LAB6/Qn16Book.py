class Book:
    def __init__(self, book_id, pages):
        self.book_id = book_id
        self.pages = pages

class FictionBooks(Book):
    def __init__(self, book_id, pages, name):
        super().__init__(book_id, pages)
        self.name = name

# Create instances of the FictionBooks class
fiction_book = FictionBooks(1, 300, "To Kill a Mockingbird")

# Print the attributes
print(f"Book ID: {fiction_book.book_id}, Pages: {fiction_book.pages}, Name: {fiction_book.name}")