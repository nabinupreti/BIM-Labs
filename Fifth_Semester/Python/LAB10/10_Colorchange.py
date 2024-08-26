import tkinter as tk

def change_color(color):
    root.configure(bg=color)

def close_program():
    root.destroy()

# Create the main application window with 500x500 geometry
root = tk.Tk()
root.title("Color Changer")
root.geometry("500x500")

# Create a frame to hold the buttons in one line
button_frame = tk.Frame(root)
button_frame.pack(side=tk.TOP, pady=50)  # Add some vertical padding

# Create buttons for each color
blue_button = tk.Button(button_frame, text="Blue", command=lambda: change_color("blue"))
red_button = tk.Button(button_frame, text="Red", command=lambda: change_color("red"))
green_button = tk.Button(button_frame, text="Green", command=lambda: change_color("green"))
close_button = tk.Button(button_frame, text="Close", command=close_program)

# Place the buttons in the frame (all in one line)
blue_button.pack(side=tk.LEFT, padx=10)
red_button.pack(side=tk.LEFT, padx=10)
green_button.pack(side=tk.LEFT, padx=10)
close_button.pack(side=tk.LEFT, padx=10)

# Start the main event loop
root.mainloop()
