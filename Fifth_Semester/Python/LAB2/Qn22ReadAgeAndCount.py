# To read age of 10 people and count the no. of people of each group 25 to 50

age = (input("Enter age of 10 people separate with comma: "))

age = age.split(",")
sum = 0
for x in age:
    if int(x) >= 25 and int(x) <= 50:
        sum += 1
        
print("The no. of people of age 25 to 50 are: ",sum)