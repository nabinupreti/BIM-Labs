#Check a year is leap year or not

year = int(input("Enter year to check leap year or not: "))

if year % 4 == 0:
    if year % 100 == 0:
        if year % 400 == 0:
            print(f"{year} is LEAP YEAR")
        else:
            print(f"{year} is NOT LEAP YEAR")
    else:
        print(f"{year} is LEAP YEAR")
else:
    print(f"{year} is NOT LEAP YEAR")



            
            
