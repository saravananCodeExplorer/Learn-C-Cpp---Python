
#append items
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)

#insert items
thislist = ["apple", "banana", "cherry"]
thislist.insert(1, "orange")
print(thislist)

#extend
thislist = ["apple", "banana", "cherry"]
tropical = ["mango", "pineapple", "papaya"]
thislist.extend(tropical)
print(thislist)

#using tuple
thislist = ["apple", "banana", "cherry"]
thistuple = ("kiwi", "orange")
thislist.extend(thistuple)
print(thislist)

#join
list1 = ["a", "b", "c"]
list2 = [1, 2, 3]
list3 = list1 + list2
print(list3)

#copylist
thislist = ["apple", "banana", "cherry"]
mylist = thislist.copy()
print(mylist)





