# To print current Date:
import datetime
current_date = datetime.datetime.today()
print("Current Date : ", current_date)

# Another way to print current Date:
import datetime as dt
x = dt.datetime.today()
print(x)

# To print customised Date:
new = datetime.date(2024, 6, 20)
print(new)
print("Year : ", new.year)
print("Month : ", new.month)
print("Day : ", new.day)
print("--------------------------------------")

#To print current Date and Time:
from datetime import datetime
presentime = datetime.now()
print("NOW THE TIME IS:", presentime)
print("Todays Date is:", presentime.strftime('%Y/%m/%d') )
print("Year is:", presentime.year)
print("MOnth is:", presentime.month)
print("Date is:", presentime.day)
print("--------------------------------------")

# To print customised Time(HH.MM.SS.Microseconds):
a = dt.time(10, 45, 5, 555505)
print(a)
print("Hour : ", a.hour)
print("minute : ", a.minute)
print("second : ", a.second)
print("microsecond : ", a.microsecond)
print("--------------------------------------")






# To print current Date & Time:
current_time = dt.datetime.now()
print("Current Time : ", current_time)
print("--------------------------------------")

# To print customized Date & Time(YYYY.MM.DD.HH.MM.SS):
new = dt.datetime(2024, 5, 31, 12, 2, 10)
print("Given D&T: ",new)
print(new.date())
print(new.time())
print("--------------------------------------")

#To calculate the Year(i.e nxt new year)
current = dt.datetime.now()
new_year = dt.datetime(2025, 1, 1)
difference = new_year - current
print("Next New year is:",difference)
print("--------------------------------------")
# To print current Date & Time:
current = dt.datetime.now()
print(current)



# Print using strformat:
s = current.strftime("%A %b %d %Y")
print(s)
print("--------------------------------------")
# To print current Date & Time:
current = dt.datetime.now()
print(current)
# Print using strformat:
s = current.strftime("%a %B %D %y")
print(s)
print("--------------------------------------")

# print("The calendar for the month June of Year 2024 is:")
import calendar
calndr = calendar.month(2024, 6)
print (calndr)

# print("The calendar for the  Year 2024 is:")
import calendar
print(calendar.calendar(2024))