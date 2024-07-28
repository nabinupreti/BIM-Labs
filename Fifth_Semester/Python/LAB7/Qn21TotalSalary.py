def calculate_total_salary(input_file, output_file):
    total_salary = 0
    with open(input_file, 'r') as file:
        for line in file:
            _, salary = line.strip().split(', ')
            total_salary += float(salary)
    with open(output_file, 'w') as file:
        file.write(f"Total Salary: {total_salary}\n")

employees = [
    {'name': 'John Doe', 'salary': 5000},
    {'name': 'Jane Smith', 'salary': 4000}
]

with open('employees.txt', 'w') as file:
    for emp in employees:
        file.write(f"{emp['name']}, {emp['salary']}\n")

calculate_total_salary('employees.txt', 'total_salary.txt')