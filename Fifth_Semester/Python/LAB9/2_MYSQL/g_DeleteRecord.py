import mysql.connector 

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)

cursor = conn.cursor()

delete_id = 6
sql = "delete from Employees where id = %s"

cursor.execute(sql,(delete_id,))

cursor.execute("select * from Employees")
res = cursor.fetchall()

for row in res:
    print(row)
    
conn.commit()