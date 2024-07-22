class Book:
    def __init__(self, title, author):
        self.title = title
        self.author = author

    @classmethod
    def from_string(cls, book_string):
        title, author = book_string.split(", ")
        return cls(title, author)

# Create an instance using the from_string class method
book = Book.from_string("The Great Gatsby, F. Scott Fitzgerald")

# Print the attributes
print(f"Title: {book.title}, Author: {book.author}")