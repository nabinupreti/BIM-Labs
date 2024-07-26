import pickle

def serialize_to_file(filename, obj):
    with open(filename, 'wb') as file:
        pickle.dump(obj, file)

my_dict = {'key1': 'value1', 'key2': 'value2'}
serialize_to_file('output12.bin', my_dict)