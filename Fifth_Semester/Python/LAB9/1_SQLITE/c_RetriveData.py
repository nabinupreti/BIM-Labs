import sqlite3

conn = sqlite3.connect("company.db")

cursor = conn.cursor()

cursor.execute('SELECT * FROM Employees')
all_records = cursor.fetchall()

# Display the results
for record in all_records:
    print(record)
