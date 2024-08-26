import tkinter as tk

def create_menus_demo():
    root = tk.Tk()
    root.title("MenusDemo")

    # Creating a menu bar
    menu_bar = tk.Menu(root)
    root.config(menu=menu_bar)

    # Adding menus
    file_menu = tk.Menu(menu_bar, tearoff=0)
    edit_menu = tk.Menu(menu_bar, tearoff=0)
    run_menu = tk.Menu(menu_bar, tearoff=0)
    source_menu = tk.Menu(menu_bar, tearoff=0)
    refactor_menu = tk.Menu(menu_bar, tearoff=0)
    navigate_menu = tk.Menu(menu_bar, tearoff=0)
    search_menu = tk.Menu(menu_bar, tearoff=0)
    project_menu = tk.Menu(menu_bar, tearoff=0)
    window_menu = tk.Menu(menu_bar, tearoff=0)
    help_menu = tk.Menu(menu_bar, tearoff=0)

    # Adding items to the "Project" menu
    project_menu.add_command(label="Open Project")
    project_menu.add_command(label="Close Project")
    project_menu.add_command(label="Build All")
    project_menu.add_command(label="Build Project")

    # Adding menus to the menu bar
    menu_bar.add_cascade(label="File", menu=file_menu)
    menu_bar.add_cascade(label="Edit", menu=edit_menu)
    menu_bar.add_cascade(label="Run", menu=run_menu)
    menu_bar.add_cascade(label="Source", menu=source_menu)
    menu_bar.add_cascade(label="Refactor", menu=refactor_menu)
    menu_bar.add_cascade(label="Navigate", menu=navigate_menu)
    menu_bar.add_cascade(label="Search", menu=search_menu)
    menu_bar.add_cascade(label="Project", menu=project_menu)
    menu_bar.add_cascade(label="Window", menu=window_menu)
    menu_bar.add_cascade(label="Help", menu=help_menu)

    root.mainloop()

create_menus_demo()
