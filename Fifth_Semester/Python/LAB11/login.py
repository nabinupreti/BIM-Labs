import tkinter as tk
from tkinter import messagebox
import mysql.connector
import connection

def login():
    username = username_entry.get()
    password = password_entry.get()

    conn = connection.create_connection()
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM users WHERE username=%s AND password=%s", (username, password))
    result = cursor.fetchone()
    if result:
        messagebox.showinfo("Login", "Login successful!")
        # Continue to the main application
    else:
        messagebox.showerror("Login", "Invalid username or password")
    conn.close()

root = tk.Tk()
root.title("User Login")

tk.Label(root, text="Username:").grid(row=0, column=0, padx=10, pady=10)
username_entry = tk.Entry(root)
username_entry.grid(row=0, column=1, padx=10, pady=10)

tk.Label(root, text="Password:").grid(row=1, column=0, padx=10, pady=10)
password_entry = tk.Entry(root, show="*")
password_entry.grid(row=1, column=1, padx=10, pady=10)

tk.Button(root, text="Login", command=login).grid(row=2, column=0, columnspan=2, pady=10)

root.mainloop()
