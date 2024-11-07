#the try block will generate an exception,
# because x is not defined:
try:
  print(x)
except:
  print("An exception occurred")
#Since the try         block raises an error, the except block will be executed.
#Without the try block, the program will crash and raise an error:

#Print one message if the try block raises a NameError and
#another for other errors:




x=10
y="mano"
try:
    print(x+y)
except NameError:
  print("Variable x is not defined")
except TypeError:
  print("Something else went wrong")



#keyword to define a block of code to be executed if no errors were raised
#the try block does not generate any error
try:
  print("Hello")
except:
  print("Something went wrong")
else:
  print("Nothing went wrong")




try:
  print(x)
except IndexError:
  print("Something went wrong")
except NameError:
  print("The 'try except' is finished")


#The finally block, if specified, will be executed regardless if the
#try block raises an error or not.
try:
  print(x)
except:
  print("Something went wrong")
finally:
  print("The 'try except' is finished")


#factorial
import math
no=int(input("enter any value "))
res=math.factorial(no)
print(res)



import math
no=int(input("enter any value "))
try:
  res=math.factorial(no)
  print(res)
except:
    print("fail")
