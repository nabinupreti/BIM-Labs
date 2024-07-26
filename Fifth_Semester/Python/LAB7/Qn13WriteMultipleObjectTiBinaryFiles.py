import pickle
def write_multiple_objects(filename, objects):
    with open(filename, 'wb') as file:
        for obj in objects:
            pickle.dump(obj, file)

dict1 = {'key1': 'value1'}
dict2 = {'key2': 'value2'}
write_multiple_objects('output13.bin', [dict1, dict2])