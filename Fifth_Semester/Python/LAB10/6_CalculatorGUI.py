import tkinter as tk

def add():
    num1 = float(entry1.get())
    num2 = float(entry2.get())
    result = num1 + num2
    result_entry.delete(0,tk.END)
    result_entry.insert(tk.END,str(result))
def subtract():
    num1 = float(entry1.get())
    num2 = float(entry2.get())
    result = num1 - num2
    result_entry.delete(0, tk.END)
    result_entry.insert(tk.END, str(result))

root = tk.Tk()
root.title("Calculator")

# Labels
label1 = tk.Label(root, text="First Number")
label2 = tk.Label(root, text="Second Number")
result_label = tk.Label(root, text="Result")

label1.grid(row=0)
label2.grid(row=1)
result_label.grid(row=2)

# Text Fields
entry1 = tk.Entry(root)
entry2 = tk.Entry(root)
result_entry = tk.Entry(root)

entry1.grid(padx=10,row=0,column=1)
entry2.grid(padx=10,row=1,column=1)
result_entry.grid(padx=10,row=2,column=1)

plus = tk.Button(text="+",command=add)
minus = tk.Button(text="-",command=subtract)

plus.grid(row=3,column=0)
minus.grid(row=3,column=1)
root.mainloop()


