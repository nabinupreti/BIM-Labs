import sqlite3

conn = sqlite3.connect('company.db')

cursor = conn.cursor()

sql = """
select * from Employees
where salary > 50000
order by hire_date desc
"""

cursor.execute(sql)
res = cursor.fetchall()

for row in res:
    print(row)