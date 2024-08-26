import mysql.connector 

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)


cursor = conn.cursor()

sql = '''
select department, avg(salary) from Employees
group by department

'''

cursor.execute(sql)

rows = cursor.fetchall()
for row in rows:
    print(row)