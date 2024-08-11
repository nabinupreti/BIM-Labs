import connection

mycursor = mydb.cursor()
mycursor.execute('SHOW TABLES')

for x in mycursor:
  print(x)