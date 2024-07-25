with open("details.txt","r") as src, open("destination.txt","w") as dest:
    dest.write(src.read())