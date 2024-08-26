import sqlite3
conn = sqlite3.connect("company.db")
cursor = conn.cursor()

delete_id = 4
sql = "delete from Employees where id = ?"

cursor.execute(sql,(delete_id,))

cursor.execute("select * from Employees")
res = cursor.fetchall()

for row in res:
    print(row)
    
conn.commit()