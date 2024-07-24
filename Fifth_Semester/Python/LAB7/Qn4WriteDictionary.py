my_dict = {'Name':'Nabin', 'Age':20}
with open("details.txt","w") as file:
    for key, value in my_dict.items():
        file.write(f"{key}: {value} \n")