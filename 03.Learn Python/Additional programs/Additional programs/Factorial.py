'''#Eg:1 Factorial

def factorial(n):

    return 1 if (n==1 or n==0)else n * factorial(n - 1);
num = 5;
print("Factorial of",num,"is",factorial(num))


#Eg:2 odd or Even
#num = int(input("Enter a number: "))
num=10
if (num % 2) == 0:
   print("{0} is Even".format(num))
else:
   print("{0} is Odd".format(num))

#Eg:3 Multiplication Table
num=int(input("Enter the Number:"))
#num = 5
for i in range(1, 11):
   print(num, "x", i, "=", num*i)

#Eg:4 largest number among the three input numbers

# change the values of num1, num2 and num3
# for a different result
num1 = 10
num2 = 14.5
num3 = 12

#num1 = int(input("Enter first number: "))
#num2 = int(input("Enter second number: "))
#num3 = int(input("Enter third number: "))

if (num1 >= num2) and (num1 >= num3):
   largest = num1
elif (num2 >= num1) and (num2 >= num3):
   largest = num2
else:
   largest = num3
print("The largest number is", largest)

#Eg:5 No is Postive or Negative
#using if..elif...else
num = float(input("Enter a number: "))
if num > 0:
   print("Positive number")
elif num == 0:
   print("Zero")
else:
   print("Negative number")'''

#Eg:6 No is Postive or Negative
#using Nested if
'''num = float(input("Enter a number: "))
if num >= 0:
   if num == 0:
       print("Zero")
   else:
       print("Positive number")
else000   print("Negative number")'''


#grade
a=int(input("enter mark"))
if(a>=90 and a<=100):
   print("a grade")
elif(a>=60 and a<=89):
   print("b grade")
elif(a>=35 and a<=59):
  print("c grade")
elif(a<35):
   print("fail")