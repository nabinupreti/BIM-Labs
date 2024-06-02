days = int(input("Enter no. of days: "))

days_in_year = 365
days_in_month = 30

years = days // days_in_year
rem_days = days % days_in_year

months = rem_days // days_in_month
rem_days = rem_days % days_in_month

print(f"{days} Days = {years} Year(s), {months} Month(s) and {rem_days} Day(s)")
