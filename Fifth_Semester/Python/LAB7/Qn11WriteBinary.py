data = b'This is binary data.'
with open('binary.bin','wb') as file:
    file.write(data)
    