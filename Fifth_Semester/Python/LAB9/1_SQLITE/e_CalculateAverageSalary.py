import sqlite3

conn = sqlite3.connect('company.db')

cursor = conn.cursor()

sql = '''
select department, avg(salary) from Employees
group by department

'''

cursor.execute(sql)

rows = cursor.fetchall()
for row in rows:
    print(row)