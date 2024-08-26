from tkinter import *

window = Tk()
window.title("Record Entry")
window.geometry("600x600")
Label(window, text = "First Name").grid(row=0)
Label(window, text = "Last Name").grid(row=1)

e1 = Entry(window)
e2 = Entry(window)

e1.grid(row=0, column=1)
e2.grid(row=1, column=1)

button = Button(window, text='Save', width=10, command=window.destroy)
button.grid(row=2, columnspan=2)

window.mainloop()