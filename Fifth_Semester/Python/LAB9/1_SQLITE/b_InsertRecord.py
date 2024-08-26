import sqlite3

# Connect to SQLite database (or create it if it doesn't exist)
conn = sqlite3.connect('company.db')

# Create a cursor object
cursor = conn.cursor()

# Single row insert
cursor.execute('''
    INSERT INTO Employees (name, department, salary, hire_date)
    VALUES ('John Doe', 'Engineering', 75000, '2022-01-15')
''')

# Multiple rows insert
employees = [
    ('Jane Smith', 'HR', 60000, '2021-09-23'),
    ('Emily Davis', 'Engineering', 82000, '2023-03-19'),
    ('Michael Brown', 'Finance', 65000, '2020-11-02'),
    ('Sarah Wilson', 'Marketing', 72000, '2022-06-30')
]

cursor.executemany('''
    INSERT INTO Employees (name, department, salary, hire_date)
    VALUES (?, ?, ?, ?)
''', employees)

# Commit changes
conn.commit()
