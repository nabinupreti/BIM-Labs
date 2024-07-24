def read_file(filename, line_num):
    with open(filename, "r") as file:
        for line, content in enumerate(file, 1):
            if line == line_num:
                print(content.strip())
            
read_file("details.txt",2)