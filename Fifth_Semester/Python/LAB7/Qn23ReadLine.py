def read_lines_5_to_10(filename):
    with open(filename, 'r') as file:
        for current_line, line in enumerate(file, 1):
            if 5 <= current_line <= 10:
                print(line, end='')

# Assume 'data.txt' has at least 10 lines
with open('data.txt', 'w') as file:
    for i in range(1, 21):
        file.write(f"Line {i}\n")

read_lines_5_to_10('data.txt')