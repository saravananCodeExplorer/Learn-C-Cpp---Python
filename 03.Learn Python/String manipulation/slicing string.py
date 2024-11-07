#slicing string
a = "sysway technologies"
print(a[3:8])

#slicing from the start

a="sysway technologies"
print(a[:6])


#slicing at the end

a="sysway technologies"
print (a[4:])

#Negative Indexing
b = "sysway technologies"
print(b[-5:-3])

#Modify String

#Upper case
a="sysway technologies"
print(a.upper())

#Lowercase
a="SYSWAY"
print(a.lower())

#remove whitespace

a="   sysway technologies"
print(a.strip())

#replace

a="sysway technologies"
print(a.replace("t","cad"))


#split

a = "sysway technologies"
print(a.split())

#String Concatenation
#eg:1

a="sysway"
b="technologies"
#c=a+b
print(a+b)

#eg:2
a="sysway"
b="technologies"
c=a+ " " +b
print(c)

#Esacape Characters
txt = "We are the so-called \"Vikings\" from the north."
print(txt)

#string format
#eg:1
age=36
txt="isysway technologies"
print(txt)

#eg:2
age = 36
txt = "My name is John, and I am {}"
print(txt.format(age))
# modal
age = 36
txt = f"My name is John, and I am {age}"
print(txt)

#eg:3
quantity = 3+3
itemno = 567
price = 49.95
myorder = "I want {} pieces of item {} for {} dollars."
print(myorder.format(quantity, itemno, price))

#eg:4
quantity = 3
itemno = 567
price = 49.95
myorder = "I want to pay {2} dollars for {0} pieces of item {1}."
print(myorder.format(quantity, itemno, price))

#a=5
for a in range(10):
 b=a*5
if b<=50:
  print("5x",b)
