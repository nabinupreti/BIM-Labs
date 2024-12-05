import tkinter as tk

def add():
    num1 = float(entry1.get())
    num2 = float(entry2.get())
    res = num1+num2
    entry3.delete(0,tk.END)
    entry3.insert(tk.END, str(res))
    

def sub():
    num1 = float(entry1.get())
    num2 = float(entry2.get())
    res = num1-num2
    entry3.delete(0,tk.END)
    entry3.insert(tk.END, str(res))
    
    
    

root = tk.Tk()
root.title("Calculator")

label1 = tk.Label(root, text="Num1")
label2 = tk.Label(root, text="Num2")
label3 = tk.Label(root, text="Res")

label1.grid(row=0,column=0)
label2.grid(row=1,column=0)
label3.grid(row=2,column=0)


entry1 = tk.Entry(root)
entry2 = tk.Entry(root)
entry3 = tk.Entry(root)

entry1.grid(row=0,column=2)
entry2.grid(row=1,column=2)
entry3.grid(row=2,column=2)

btn1 = tk.Button(root,text="+",command=add)
btn2 = tk.Button(root,text="-",command=sub)

btn1.grid(row=5,column=1)
btn2.grid(row=5,column=3)


root.mainloop()
