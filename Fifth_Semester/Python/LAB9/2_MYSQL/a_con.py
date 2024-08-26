import mysql.connector 

conn = mysql.connector.connect(
    host = 'localhost',
    user = 'root',
    password = '',
    database = 'company'
)

cursor = conn.cursor()
cursor.execute('''create table Employees(
    id integer auto_increment primary key,
    name varchar(30) not null,
    department varchar(30) not null,
    salary float not null,
    hire_date date not null
)''')

# Commit changes and close the connection
conn.commit()