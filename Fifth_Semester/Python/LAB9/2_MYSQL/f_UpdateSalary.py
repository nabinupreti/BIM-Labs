import mysql.connector 

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)


c = conn.cursor()

sql = '''
update Employees
set salary = salary*1.1
where id = 5
'''

c.execute(sql)

c.execute('select * from Employees where id = 5')

print(c.fetchone())

conn.commit()