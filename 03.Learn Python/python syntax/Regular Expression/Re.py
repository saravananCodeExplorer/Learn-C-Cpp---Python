#search word
'''import re
txt = "The rain in Spain"
x = re.search("He", txt)
if x:
  print("YES! We have a match!")
else:
  print("No match")

#findall
import re
txt = "The rain in Spain"
x = re.findall("b", txt)
print(x)

#return empty list
import re
txt = "The rain in Spain"
x = re.findall("Portugal", txt)
print(x)

#search()
import re
txt = "The rain in Spain"
x = re.search("\s", txt)
print("The first white-space character is located in position:", x.start())

#split()
import re
txt = "The rain in Spain"
x = re.split("\s", txt)
print(x)

#split the first occurance using split()
import re
txt = "The rain in Spain"
x = re.split("\s", txt, 2)
print(x)

#replace whitespace with 9 using sub()
import re
txt = "The rain in Spain"
x = re.sub("\s", "*", txt)
print(x)

#Match Object
import re
txt = "The rain in Spain"
x = re.search("ai", txt)
print(x) #this will print an object'''


#string()
import re
txt = "The rain in Spain"
x = re.search(r"\bS\w+", txt)
print(x.string)

#Group()The regular expression looks for any
#words that starts with an upper case "S":
import re
txt = "the rain in Spain"
x = re.search(r"\bS\w+", txt)
print(x.group())


























