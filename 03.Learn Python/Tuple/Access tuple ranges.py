#Accessing tuple items
mytuple=("apple","mango","banana","cherry")
print(mytuple[2])

mytuple=(1,2,3,4,5)
print(mytuple[1])


#-ve indexing
mytuple=("apple","banana","cherry","kiwi","orange")
print(mytuple[-2])

#range indexing
#eg:1
mytuple=("apple","banana","cherry","kiwi","orange","grapes")
print(mytuple[2:5])


#eg:3
mytuple=("apple","banana","cherry","kiwi","orange","grapes")
print(mytuple[3:])

#eg:3
mytuple=("apple","banana","cherry","kiwi","orange","grapes")
print(mytuple[-4:-1])


#check the item in list
fruits = ("apple", "banana", "cherry")
if "apple" in fruits:
  print("Yes, 'apple' is in the fruits tuple")
else:
    print("fruits not in the tuple")


#change tuple values
x=("apple","banana","kiwi")
y=list(x)
y.append("orange")
x=tuple(y)
print(x)


#remove
x= ("apple", "banana", "cherry")
y = list(x)
y.remove("apple")
x=tuple(y)
print(x)

#delete
x=("apple", "banana", "cherry")
del x
#print(x)#this will raise an error because the tuple no longer exists

#pack
fruits = ("apple", "mango", "papaya")
(green, *red) = fruits
print(green)
# print(yellow)
print(red)

#unpack
#Eg:1
fruits = ("apple", "mango", "papaya")
(*green, yellow) = fruits
print(green)
print(yellow)


#eg:2
fruits = ("apple", "mango", "papaya","pinapple","orange")
(green, *yellow, red) = fruits
print(green)
print(yellow)
print(red)

#eg:3
fruits = ("apple", "mango", "papaya","pinapple","orange")
(green, yellow, *red) = fruits
print(green)
print(yellow)
print(red)

#join two tuples
tuple1 = ("a", "b" , "c")
tuple2 = (1, 2, 3)
tuple3 = tuple1 + tuple2
print(tuple3)

#multiply tuples
x=("a","b","c")
y=x*4
print(y)
