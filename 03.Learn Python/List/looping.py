#for loop
thislist = ["apple", "banana", "cherry"]
for x in thislist:
  print(x)

#range through a loop
thislist = ["apple", "banana", "cherry"]
for i in range(len(thislist)):
  print(thislist[i])

#while Loop
thislist = ["apple", "banana", "cherry"]
i = 0
while i < len(thislist):
  print(thislist[i])
  i = i + 1

#looping list comprehension  //do
thislist = ["apple", "banana", "cherry"]
[print(x) for x in thislist]

#List comprehension
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []
for x in fruits:
  if "a" in x:
    newlist.append(x)
print(newlist)

#eg:2
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = [x for x in fruits if "a" in x]
print(newlist)

#Syntax: newlist = [expression for item in iterable if condition == True]
#The return value is a new list, leaving the old list unchanged.

#condition:The condition is like a filter that only accepts the items that valuate to True.
#newlist = [x for x in fruits if x != "apple"]

#iterable: The iterable can be any iterable object, like a list, tuple, set etc.
#using range() function newlist = [x for x in range(10)]

#eg:1
newlist = [x for x in range(10) if x < 5]
print(newlist)

#newlist uppercase
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = [x.upper() for x in fruits]
print(newlist)

#eg:2
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = ['hello' for x in fruits]
print(newlist)
