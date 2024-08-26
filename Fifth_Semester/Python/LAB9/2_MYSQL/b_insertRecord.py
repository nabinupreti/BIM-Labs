import mysql.connector

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)

cursor = conn.cursor()

query = '''
insert into Employees (name, department, salary, hire_date)
values
("Nabin", "HR", 56789.333, "2024-07-21")
'''
cursor.execute(query)

employees = [
    ('Jane Smith', 'HR', 60000, '2021-09-23'),
    ('Emily Davis', 'Engineering', 82000, '2023-03-19'),
    ('Michael Brown', 'Finance', 65000, '2020-11-02'),
    ('Sarah Wilson', 'Marketing', 72000, '2022-06-30')
]

query = """
insert into Employees(name, department, salary, hire_date)
values
(%s,%s,%s,%s)
"""
cursor.executemany(query,employees)

conn.commit()