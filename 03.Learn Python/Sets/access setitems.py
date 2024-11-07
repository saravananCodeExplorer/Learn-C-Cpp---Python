
#add items
thisset = {"apple", "banana", "cherry"}
thisset.add("orange")
print(thisset)


#set items add
thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}
thisset.update(tropical)
print(thisset)

#add any iterable
thisset = {"apple", "banana", "cherry"}
mylist = ["kiwi", "orange"]
# set
thisset.update(mylist)
# list
mylist.extend(thisset)
print(mylist)
print(thisset)

#remove item in a set
thisset = {"apple", "banana", "cherry"}
thisset.remove("banana")
print(thisset)

#discard
thisset = {"apple", "banana", "cherry"}
thisset.discard("banana")
print(thisset)

#pop method last items
thisset = {"apple", "banana", "cherry"}
thisset.pop()
print(thisset)


#clear
thisset = {"apple", "banana", "cherry"}
thisset.clear()
print(thisset)

#delete
thisset = {"apple", "banana", "cherry"}
del thisset





# intersection  common values
x={"apple","banana","cherry"}
y={"google","microsoft","apple"}
z=x.intersection(y)
print(z)

#symmetric_difference
x={"apple","banana","cherry"}
y={"google","microsoft","apple"}
z=x.symmetric_difference(y)
print(z)
