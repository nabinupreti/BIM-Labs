def read_file_reverse(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()
        for line in reversed(lines):
            print(line, end='')

read_file_reverse('String.txt')