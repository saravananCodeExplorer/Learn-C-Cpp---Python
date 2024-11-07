import re
txt = "The rain in Spain"
x = re.search("in", txt)
if x:
  print("YES! We have a match!")
else:
  print("No match")


import re
txt = "The rain in Spain"
x = re.search("ai", txt)
print(x) #this will print an object


import re
txt = "The rain in Spain"
x = re.findall("in", txt)
print(x)

import re
txt = "The rain in Spain"
x = re.findall("rain", txt)
print(x)

import re
txt = "The rain in Spain"
x = re.split("\s", txt)
print(x)

import re
txt = "The rain in Spain"
x = re.split("\s", txt, 2)
print(x)

import re
txt = "The rain in Spain"
x = re.sub("\s", "sys " ,txt)
print(x)



import re
txt="the rain in spain"
x=re.findall("rain",txt)
print(x)
if(x):
  print("yes")
else:
  print("no match")

import re
txt="the rain in spain"
x=re.search("port",txt)
print(x)


import re
txt="the rain in spain"
x=re.sub("\s","9",txt)
print(x)


#meta characters []
import re
txt="the rain in spain"
x=re.findall("[a-c]",txt)
print(x)

#find all digit characters \d
import re
txt="that will be 59 dollors"
x=re.findall("\d",txt)
print(x)

#.
import re
txt="hello planet"
x=re.findall("he.l",txt)
print(x)

#^
import re
txt="hello planet"
x=re.findall("^hello",txt)
if x:
    print("yes")
else:
    print("no match")


# ends with $
import re
txt = "hello planet"
x = re.findall("planet$", txt)
if x:
   print("yes")
else:
 print("no match")


# *
import re
txt="hello planet"
x=re.findall("he.*p",txt)
print(x)

# ()
import re
txt="the rain in spain falls mainly in the plain"
x=re.findall("falls|stays|in",txt)
print(x)
if x:
    print("yes")
else:
    print("no match")

















    n = int(input("enter value"))
    temp = n
    rev = 0
    while (n > 0):
        a = n % 10
        rev = rev * 10 + a
        n = n / 10
        if (temp == rev):
            print("palindrome")
        else:
            print("not a palindrome")