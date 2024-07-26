def create_university_file(filename, records):
    with open(filename, 'w') as file:
        for record in records:
            file.write(f"{record['name']}, {record['location']},{record['faculties']}\n")

def display_university_file(filename):
    with open(filename, 'r') as file:
        print(file.read())

colleges = [
    {'name':'NCCS', 'location':'Paknajol','faculties':5},
    {'name':'Peoples', 'location':'Paknajol','faculties':7}
]

create_university_file("university.txt", colleges)
display_university_file("university.txt")
