import tkinter as tk

def pack_layout_demo():
    root = tk.Tk()
    root.title("Pack Layout Demo")

    # Creating labels to demonstrate pack layout
    label1 = tk.Label(root, text="Label 1", bg="red", fg="white")
    label2 = tk.Label(root, text="Label 2", bg="green", fg="white")
    label3 = tk.Label(root, text="Label 3", bg="blue", fg="white")

    # Using pack layout manager
    label1.pack(side=tk.TOP, fill=tk.X, padx=10, pady=10)
    label2.pack(side=tk.LEFT, fill=tk.Y, padx=10, pady=10)
    label3.pack(side=tk.RIGHT, fill=tk.Y, padx=10, pady=10)

    root.mainloop()

pack_layout_demo()
