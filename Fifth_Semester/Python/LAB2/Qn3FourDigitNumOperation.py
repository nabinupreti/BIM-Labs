#display each digit separately
#Print the sum of digits
#Reverse the digits
#find the sum of square of each digit
def calculator(num):
    if num < 1000 or num > 9999:
        print("Invalid Input")
    else:
        orgnum = num
        rev = 0
        sum = 0
        sumsq = 0
        print("a. Displaying each digit separately: ")
        while num > 0:
            rem = num % 10
            num = num // 10
            #calculating reverse
            rev = rev * 10 + rem
            #displaying each digit separately
            print(rem,end=", ")
            #calculating sum of each digit
            sum += rem
            #calculating sum of square of each digit
            sumsq += rem**2
            
        print(f"\nb. Sum of each digit of {orgnum} is: {sum}")
        print(f"c. Reverse of {orgnum} is: {rev}")
        print(f"d. Sum of square each digit of {orgnum} is: {sumsq}")

            

num = int(input("Enter four digit number: "))
calculator(num)