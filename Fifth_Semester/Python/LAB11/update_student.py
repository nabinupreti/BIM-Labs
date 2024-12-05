import connection
import tkinter as tk
import mysql.connector
from tkinter import messagebox

def update_student():
    selected_student = student_list.curselection()
    if not selected_student:
        messagebox.showerror("Selection Error", "Please select a student to update")
        return

    student_id = student_list.get(selected_student)[0]
    new_first_name = first_name_entry.get()
    new_last_name = last_name_entry.get()
    new_age = age_entry.get()
    new_class = class_combobox.get()

    try:
        conn = connection.create_connection()
        cursor = conn.cursor()

        query = """
        UPDATE students SET first_name=%s, last_name=%s, age=%s, class=%s
        WHERE id=%s
        """
        cursor.execute(query, (new_first_name, new_last_name, new_age, new_class, student_id))
        conn.commit()

        messagebox.showinfo("Success", "Student details updated successfully")
        student_list.delete(0, tk.END)
        list_students()

    except mysql.connector.Error as e:
        messagebox.showerror("Database Error", f"An error occurred: {e}")
    finally:
        cursor.close()
        conn.close()

# Updating GUI: Add fields for first name, last name, age, and class
first_name_entry = tk.Entry(root)
last_name_entry = tk.Entry(root)
age_entry = tk.Entry(root)
class_combobox = ttk.Combobox(root, values=["Class 1", "Class 2", "Class 3", "Class 4"])

# Pack fields and update button
first_name_entry.pack(padx=10, pady=5)
last_name_entry.pack(padx=10, pady=5)
age_entry.pack(padx=10, pady=5)
class_combobox.pack(padx=10, pady=5)

update_button = tk.Button(root, text="Update Student", command=update_student)
update_button.pack(pady=10)
