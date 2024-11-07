import re
txt = "The rain in Spain"
x = re.search("in", txt)
print(x)

import re
txt = "The rain in Spain"
x = re.search("in", txt)
if x:
  print("YES! We have a match!")
else:
  print("No match")

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
x = re.split("\s ", txt)
print(x)

import re
txt = "The rain in Spain"
x = re.split("\s", txt, 3)
print(x)

import re
txt = "The rain in Spain"
x = re.sub("\s", "@" ,txt)
print(x)


#this will print an object
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
x=re.search("rr",txt)
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
txt="that will be 596 dollors"
x=re.findall("\d",txt)
print(x)


#start with ^
import re
txt="hello planet"
x=re.findall("^h",txt)
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


# missing letters
import re
txt="hello planet"
x=re.findall("he.*t",txt)
print(x)

# ()
import re
txt="the rain in spain falls mainly in the plain"
x=re.findall("falls|in|stays",txt)
print(x)
if x:
    print("yes")
else:
    print("no match")

    import re

    text = "if you need any help pleace contact me at saravan_ansekar434@gmail.com"
    result = re.compile("[a-zA-Z\_0-9]+@+[a-zA-Z]+\.[a-zA-Z]+")
    ans = result.findall(text)
    print(ans)