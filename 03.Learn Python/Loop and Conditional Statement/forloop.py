#forloop
#tuple
fruits = ("apple", "banana", "cherry")
for x in fruits:
  print(x)


#looping through a string
strng ="python"
for x  in strng:
  print(x)

#break
fruits=["apple","banana","cherry","orange","lemon"]
for x in fruits:
   if x == "orange":
    break
   print(x)
    
#continue
fruits=("apple","banana","orange","Mango")
for x in fruits:
    if x == "orange":
        continue
    print(x)


#range()//default start from 0
for x in range(6):
  print(x)

#range()//default start from 0
for x in range(1,6):
  print(x)


#starting range given
for x in   range(2, 25, 3):
  print(x)

#else in for loop
for x in range(6):
  print(x)
else:
  print("******Finally finished*****!")

#else eg:2
for x in range(6):
  if x == 3:
      break
  print(x)
else:
  print("******Finally finished******!")


#continue
for x in range(6):
  if x == 3:
      continue
  print(x)
else:
  print("******Finally finished******!")

#Nested Loop
color = ["red", "big", "tasty"]
fruits = ["apple", "banana", "cherry"]
for x in color:
  if x=="tasty":
      break
  for y in fruits:
      print(x,y)


fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    break
print(x)



#nested for
for x in range(6):
    for y in range(6):
        print("*",end=" ")
    print()

a=int(input("enter a value"))
b=int(input("enter b value"))
c=a
a=b
b=c
print("a value is", a)
print("b value is",b)

a=int(input("enter a value"))
b=int(input("enter b value"))
a= a+b
b= a-b
a= a-b
print("a value is",a)
print("b value is", b)

a=10
if(a==10):
    print("a is equal")
if(a!=10):
    print("a is not equal")

fruits=('apple','banana')
for x in fruits:
    print(x)

fruits=("apple")
for x in fruits:
    print(x)

#range
for x in range(11):
    print(x)

#break
fruits=("apple","banana","orange")
for x in fruits:
    if x=="orange":
        break
    print(x)

#continue
fruits=("apple", "banana","orange","kiwi")
for x in fruits:
    if x=="orange":
        continue
    print(x)

n = int(input("enter value"))
for i in range(n):
    for j in range(n - i):
        print(n - i, end=" ")

    print()