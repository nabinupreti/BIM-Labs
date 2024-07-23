class StringConcat:
    def __init__(self, str):
        self.str = str
    
    def __str__(self):
        return self.str
    
    def __add__(self, other):
        return StringConcat(self.str + other.str)

str1 = StringConcat("Nabin")
str2 = StringConcat("Upreti")
str3  = str1 + str2
print(str3)
