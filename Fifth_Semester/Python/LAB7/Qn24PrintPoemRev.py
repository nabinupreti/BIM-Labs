def print_poem_reverse(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()
    for line in reversed(lines):
        print(line, end='')

with open('poem.txt', 'w') as file:
    file.write("This is the first line.\nThis is the second line.\nThis is the third line.\n")

print_poem_reverse('poem.txt')