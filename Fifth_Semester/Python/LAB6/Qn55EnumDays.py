from enum import Enum

# Define an Enum for Days of the Week
class Days(Enum):
    MONDAY = 1
    TUESDAY = 2
    WEDNESDAY = 3
    THURSDAY = 4
    FRIDAY = 5
    SATURDAY = 6
    SUNDAY = 7

# Function to determine if a given day is a weekday or weekend
def determine_day_type(day):
    if day in (Days.SATURDAY, Days.SUNDAY):
        return "weekend"
    else:
        return "weekday"


user_input = input("Enter a day of the week: ").strip().upper()
day = Days[user_input]
day_type = determine_day_type(day)
print(f"{day.name} is a {day_type}.")

