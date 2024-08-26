import mysql.connector
conn = mysql.connector.connect(
    host="localhost",
    user='root',
    password='',
    database='company'
)
cursor = conn.cursor()

cursor.execute('SELECT * FROM Employees')
all_records = cursor.fetchall()

# Display the results
for record in all_records:
    print(record)
