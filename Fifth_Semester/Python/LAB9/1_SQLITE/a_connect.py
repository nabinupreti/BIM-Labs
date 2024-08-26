import sqlite3

# Connect to SQLite database (or create it if it doesn't exist)
conn = sqlite3.connect('company.db')

# Create a cursor object
cursor = conn.cursor()

# Create Employees table
cursor.execute('''
    CREATE TABLE IF NOT EXISTS Employees (
        id INTEGER PRIMARY KEY,
        name TEXT NOT NULL,
        department TEXT NOT NULL,
        salary REAL NOT NULL,
        hire_date DATE NOT NULL
    )
''')

# Commit changes and close the connection
conn.commit()
