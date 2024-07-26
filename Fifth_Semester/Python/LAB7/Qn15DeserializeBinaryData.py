import pickle
def deserialize_from_file(filename):
    with open(filename, 'rb') as file:
        return pickle.load(file)

print(deserialize_from_file('output12.bin'))
