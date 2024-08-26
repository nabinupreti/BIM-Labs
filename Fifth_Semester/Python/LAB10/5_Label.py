import tkinter as tk
from tkinter import CENTER

root = tk.Tk()
root.title("Label Demo")

# Labels
name_label = tk.Label(root, text="Name")
address_label = tk.Label(root, text="Address")

# Align the labels to the grid
name_label.grid(row=0, column=0)
address_label.grid(row=1, column=0)

# Text Fields
name_entry = tk.Entry(root)
address_entry = tk.Entry(root)

name_entry.grid(row=0, column=1)
address_entry.grid(row=1, column=1)

# Buttons
ok_button = tk.Button(root, text="Ok")
cancel_button = tk.Button(root, text="Cancel")

# Place the buttons using grid
ok_button.grid(row=2, column=0, pady=10)
cancel_button.grid(row=2, column=1, pady=10)

# Change text of the label
def setText():
    name_label.config(text="Full Name")

def setAlignment():
    name_label.config(anchor=CENTER)
    address_label.config(anchor=CENTER)
# Invoke the function to change text as an example
setText()
setAlignment()

root.mainloop()
