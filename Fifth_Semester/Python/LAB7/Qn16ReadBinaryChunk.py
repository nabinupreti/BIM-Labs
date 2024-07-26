chunk_size = 4
with open("binary.bin","rb") as file:   
    while chunk := file.read(chunk_size):
        print(chunk)

