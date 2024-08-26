import sqlite3

conn = sqlite3.connect('company.db')

cursor = conn.cursor()

cursor.execute('''
    SELECT COUNT(*), MAX(salary)
    FROM Employees
''')
total_employees, max_salary = cursor.fetchone()
print(f'Total Employees: {total_employees}, Maximum Salary: {max_salary}')
