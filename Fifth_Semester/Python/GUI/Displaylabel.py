import tkinter as tk

window = tk.Tk()
window.title("Display Text")
window.geometry("600x600")
label = tk.Label(window, text = "This is Basic of Label")

label.pack()

window.mainloop()