import mysql.connector 

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)

cursor = conn.cursor()

cursor.execute('''
    SELECT COUNT(*), MAX(salary)
    FROM Employees
''')
total_employees, max_salary = cursor.fetchone()
print(f'Total Employees: {total_employees}, Maximum Salary: {max_salary}')
