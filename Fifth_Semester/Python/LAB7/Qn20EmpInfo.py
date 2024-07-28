def create_employee_file(filename, records):
    with open(filename, 'w') as file:
        for record in records:
            file.write(f"{record['name']}, {record['id']}, {record['office']}, {record['occupation']}\n")

def display_employees_from_office(filename, office_name):
    with open(filename, 'r') as file:
        for line in file:
            if office_name in line:
                print(line.split(',')[0])

employees = [
    {'name': 'John Doe', 'id': '001', 'office': 'Nccs College', 'occupation': 'Teacher'},
    {'name': 'Jane Smith', 'id': '002', 'office': 'Other Office', 'occupation': 'Admin'}
]

create_employee_file('employeeinfo.txt', employees)
display_employees_from_office('employeeinfo.txt', 'Nccs College')