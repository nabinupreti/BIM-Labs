def find_word(filename,word):
    occurrences = [] 
    with open(filename,'r') as f:
        for line_number, line in enumerate(f,1):
            if word in line:
                occurrences.append((line_number,line.strip()))
    return occurrences

print(find_word('String.txt','hello'))