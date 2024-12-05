import tkinter as tk

def reverse_number():
    # Get the number entered by the user
    number = number_entry.get()
    
    # Reverse the number and display it in the reverse entry
    reversed_number = number[::-1]
    reverse_entry.delete(0, tk.END)  # Clear the reverse entry field
    reverse_entry.insert(0, reversed_number)  # Insert the reversed number

# Create the main application window
root = tk.Tk()
root.title("Number Reverser")
root.geometry("300x150")  # Set the window size

# First row: Label "Number" and entry field
number_label = tk.Label(root, text="Number")
number_label.grid(row=0, column=0, padx=10, pady=5, sticky=tk.E)  # Align to the right

number_entry = tk.Entry(root)
number_entry.grid(row=0, column=1, padx=10, pady=5)

# Second row: Label "Reverse" and entry field
reverse_label = tk.Label(root, text="Reverse")
reverse_label.grid(row=1, column=0, padx=10, pady=5, sticky=tk.E)  # Align to the right

reverse_entry = tk.Entry(root)
reverse_entry.grid(row=1, column=1, padx=10, pady=5)

# Third row: Full-size "Reverse" button
reverse_button = tk.Button(root, text="Reverse", command=reverse_number)
reverse_button.grid(row=2, column=0, columnspan=2, padx=10, pady=10, sticky=tk.EW)

# Start the main event loop
root.mainloop()
