import tkinter as tk
from tkinter import messagebox, ttk
import mysql.connector
import connection

def register_student():
    first_name = first_name_entry.get()
    last_name = last_name_entry.get()
    age = age_entry.get()
    student_class = class_combobox.get()

    if not first_name or not last_name or not age or not student_class:
        messagebox.showerror("Input Error", "Please fill all the fields")
        return

    try:
        conn = connection.create_connection()
        cursor = conn.cursor()

        query = "INSERT INTO students (first_name, last_name, age, class) VALUES (%s, %s, %s, %s)"
        cursor.execute(query, (first_name, last_name, age, student_class))
        conn.commit()

        messagebox.showinfo("Success", "Student registered successfully")
        first_name_entry.delete(0, tk.END)
        last_name_entry.delete(0, tk.END)
        age_entry.delete(0, tk.END)
        class_combobox.set('')

    except mysql.connector.Error as e:
        messagebox.showerror("Database Error", f"An error occurred: {e}")
    finally:
        cursor.close()
        conn.close()


# Tkinter GUI for student registration
root = tk.Tk()
root.title("Student Registration")

tk.Label(root, text="First Name:").grid(row=0, column=0, padx=10, pady=10)
tk.Label(root, text="Last Name:").grid(row=1, column=0, padx=10, pady=10)
tk.Label(root, text="Age:").grid(row=2, column=0, padx=10, pady=10)
tk.Label(root, text="Class:").grid(row=3, column=0, padx=10, pady=10)

first_name_entry = tk.Entry(root)
last_name_entry = tk.Entry(root)
age_entry = tk.Entry(root)

first_name_entry.grid(row=0, column=1, padx=10, pady=10)
last_name_entry.grid(row=1, column=1, padx=10, pady=10)
age_entry.grid(row=2, column=1, padx=10, pady=10)

# Class Combobox
class_combobox = ttk.Combobox(root, values=["Class 1", "Class 2", "Class 3", "Class 4"])
class_combobox.grid(row=3, column=1, padx=10, pady=10)

register_button = tk.Button(root, text="Register", command=register_student)
register_button.grid(row=4, column=0, columnspan=2, pady=20)

root.mainloop()
