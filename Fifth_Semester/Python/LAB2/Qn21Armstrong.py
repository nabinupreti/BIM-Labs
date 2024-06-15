#print armstrong number fromm 1 - 300

def isArmstrong(num):
    digits = str(num)
    power = len(digits)
    res = sum(int(digit) ** power for digit in digits )
    return num == res

print("Armstromg numbers from 1 to 300 are: ")
for i in range(1,301):
    if isArmstrong(i):
        print(i, end = ", ")