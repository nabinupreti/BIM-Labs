def seek_and_display_position(filename, commands):
    with open(filename, 'r') as file:
        for command in commands:
            action, value = command
            if action == 'forward':
                file.seek(file.tell() + value)
            elif action == 'backward':
                file.seek(file.tell() - value)
            print(f"Position: {file.tell()}")

commands = [('forward', 10), ('backward', 5), ('forward', 20)]

# Assume 'data.txt' has enough content for seeking operations
with open('data.txt', 'w') as file:
    file.write("This is some sample text to demonstrate seeking in a file.")

seek_and_display_position('data.txt', commands)