import sqlite3

conn = sqlite3.connect('company.db')

c = conn.cursor()

sql = '''
update Employees
set salary = salary*1.1
where id = 1
'''

c.execute(sql)

c.execute('select * from Employees where id = 1')

print(c.fetchone())

conn.commit()