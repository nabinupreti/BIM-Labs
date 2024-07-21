class Time:
    def __init__(self, hour=0, minute=0):
        self.hour = hour
        self.minute = minute

    def add_time(self, t1, t2):
        self.minute = t1.minute + t2.minute
        self.hour = t1.hour + t2.hour + self.minute // 60
        self.minute %= 60

    def display_time(self):
        print(f"Time is {self.hour} hours and {self.minute} minutes")

# Create objects of the Time class
t1 = Time(2, 45)
t2 = Time(1, 30)
t3 = Time()
t3.add_time(t1, t2)
t3.display_time()
