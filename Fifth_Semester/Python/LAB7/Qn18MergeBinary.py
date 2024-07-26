with open("a.bin","rb") as a, open("b.bin","rb") as b, open("c.bin","wb") as c:
    c.write(a.read())
    c.write(b.read())