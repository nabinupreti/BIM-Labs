import tkinter as tk
window = tk.Tk()
label = tk.Label(window, text = "Enter your Name")
label.pack()
entry = tk.Entry(window)
entry.pack()
chButton = tk.Checkbutton(window, text="agree terms of service?")
chButton.pack()
radio = tk.Radiobutton(window, text="Male")
radio.pack()
button = tk.Button(window, text="Submit", command=lambda: print(entry.get()))
button.pack()
window.geometry("600x600")
window.mainloop()
