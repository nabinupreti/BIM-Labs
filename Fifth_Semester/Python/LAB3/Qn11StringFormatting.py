#format strings
def format_strings(name, age):
    print("Using percentage: My name is %s and I am %d years old." %(name, age))
    print("Using .format(): My name is {} and I am {} years old.".format(name, age))
    print(f"Using f-string: My name is {name} and I am {age} years old.")

format_strings("Nabin", 20)
