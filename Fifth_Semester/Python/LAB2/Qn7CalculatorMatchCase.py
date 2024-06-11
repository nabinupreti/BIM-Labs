#menu driven program for calculating arithmetic expression using match case 

num1=int(input("Enter the first number :"))
num2=int(input("Enter the second number :"))

print("1.Add \n2.Subtract \n3.Multiply \n4.Divide \n")

ch=int(input("Enter your choice "))

match ch:
    case 1:
        print(f"SUm of {num1} and {num2} is {num1+num2}")
    case 2:
        print(f"Subtraction of {num1} and {num2} is {num1-num2}")
    case 3:
        print(f"Multiplication  of {num1} and {num2} is {num1*num2}")
    case 4:
        print(f"Division of {num1} and {num2} is {num1//num2}")
    case _ :
        print("Invalid choice ")