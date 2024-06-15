#WAP to check two strings are anagrams or not
def isAnagrams(str1, str2):
    str1 = str1.replace(" ","").lower()
    str2 = str2.replace(" ","").lower()
    if len(str1) != len(str2):
        return False
    
    count1 = {}
    count2 = {}

    i = 0
    while i < len(str1):
        count1[str1[i]] = count1.get(str1[i], 0) + 1
        count2[str2[i]] = count2.get(str2[i], 0) + 1
        i += 1
    
    print(count1)
    
    if count1 == count2:
        return True


str1 =input("Enter string1: ")
str2 =input("Enter string2: ")

if isAnagrams(str1, str2):
    print("Given strings are anagrams")
else:
    ("given strings are not anagrams")