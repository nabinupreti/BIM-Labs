import connection
import mysql.connector
import tkinter as tk
from tkinter import messagebox

def list_students():
    try:
        conn = connection.create_connection()
        cursor = conn.cursor()

        query = "SELECT * FROM students"
        cursor.execute(query)
        rows = cursor.fetchall()

        for row in rows:
            student_list.insert(tk.END, row)

    except mysql.connector.Error as e:
        messagebox.showerror("Database Error", f"An error occurred: {e}")
    finally:
        cursor.close()
        conn.close()

# Tkinter GUI to list all students
root = tk.Tk()
root.title("Student List")

student_list = tk.Listbox(root, width=50)
student_list.pack(padx=10, pady=10)

list_button = tk.Button(root, text="List Students", command=list_students)
list_button.pack(pady=10)

root.mainloop()
