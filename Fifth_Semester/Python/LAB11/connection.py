import mysql.connector

def create_connection():
    connection = mysql.connector.connect(
        host="localhost",
        user="root",  
        password="",  
        database="school_db"
    )
    return connection

# Establish connection
conn = create_connection()
if conn.is_connected():
    print("Connected to MySQL database")
else:
    print("Failed to connect")
conn.close()
