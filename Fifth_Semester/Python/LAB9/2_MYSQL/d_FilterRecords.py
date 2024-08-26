import mysql.connector 

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)

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