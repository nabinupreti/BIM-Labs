import connection

mycursor = connection.mydb.cursor()
mycursor.execute('SHOW TABLES')

for x in mycursor:
  print(x)