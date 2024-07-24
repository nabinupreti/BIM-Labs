def read_file(filename):
    with open(filename, "r") as file:
        for line in file:
            print(line)
            
read_file("details.txt")