my_dict = {"a":1, "b":2, "c": 3}

def access_dict(key):
    try:
        value = my_dict[key]
        print("Value",value)
    except KeyError as e:
        print("Key not found",e)
    except TypeError:
        print("Key must be a string")
        
access_dict("x")
access_dict("a")