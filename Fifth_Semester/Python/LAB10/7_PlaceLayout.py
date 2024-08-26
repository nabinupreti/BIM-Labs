import tkinter as tk

def place_layout_demo():
    root = tk.Tk()
    root.title("Place Layout Demo")

    # Creating labels to demonstrate place layout
    label1 = tk.Label(root, text="Label 1", bg="red", fg="white")
    label2 = tk.Label(root, text="Label 2", bg="green", fg="white")
    label3 = tk.Label(root, text="Label 3", bg="blue", fg="white")

    # Using place layout manager
    label1.place(x=50, y=50, width=100, height=30)
    label2.place(x=150, y=100, width=100, height=30)
    label3.place(x=250, y=150, width=100, height=30)

    root.geometry("500x200")
    root.mainloop()

place_layout_demo()
