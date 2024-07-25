with open("loop.txt","r") as file:
    content = file.read()
    lst = content.split()
    print("Number of word in file",len(lst))