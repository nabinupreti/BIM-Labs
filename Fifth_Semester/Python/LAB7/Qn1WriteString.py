str_list = ["Hello", "World","This is test"]
with open("String.txt","w") as file:
    for item in str_list:
        file.write(item + "\n")


