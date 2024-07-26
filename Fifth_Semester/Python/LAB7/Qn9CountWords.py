with open("loop.txt","r") as file:
    text = file.read()
    words = text.split()
    print("No. of words in file is",len(words))