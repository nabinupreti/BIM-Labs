## show_info() takes any number of keyword arguments and prints them
def show_info(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

show_info(name='Nabin', subject= 'Python')