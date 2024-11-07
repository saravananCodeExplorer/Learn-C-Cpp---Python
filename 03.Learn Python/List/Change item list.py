#remove
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)

#pop
thislist = ["apple", "banana", "cherry"]
thislist.pop(0)
print(thislist)

#remove last items
thislist = ["apple", "banana", "cherry"]
thislist.pop()
print(thislist)


#delete
thislist = ["apple", "banana", "cherry"]
del thislist


#clear
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist)


#count
thislist = ["apple", "banana", "cherry"]
x=thislist.count("cherry")
print("fufufufu",x)


#index
thislist = ["apple", "banana", "cherry"]
x=thislist.index("cherry")
print(x)


#reverse
thislist = ["apple", "banana", "cherry"]
thislist.reverse()
print(thislist)


#sort
thislist = ["apple", "dragon fruit", "cherry"]
thislist.sort()
print(thislist)

#sort
thislist = [6,4,5,3,1,2]
thislist.sort(reverse=True)
print(thislist)

