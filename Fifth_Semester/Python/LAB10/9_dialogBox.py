import tkinter as tk
from tkinter import messagebox

def greet_user():
    name = name_entry.get()  # Get the name entered by the user
    if name:
        messagebox.showinfo("Greeting", f"Hello, {name}!")
    else:
        messagebox.showwarning("Input Error", "Please enter your name.")

# Create the main application window
root = tk.Tk()
root.title("Name Prompt")

# Create and place a label to prompt for the user's name
prompt_label = tk.Label(root, text="Please enter your name:")
prompt_label.pack(pady=10)

# Create and place an entry field for the user to enter their name
name_entry = tk.Entry(root)
name_entry.pack(pady=5)

# Create and place an "OK" button that triggers the greeting function
ok_button = tk.Button(root, text="OK", command=greet_user)
ok_button.pack(pady=10)

# Start the main event loop
root.mainloop()
