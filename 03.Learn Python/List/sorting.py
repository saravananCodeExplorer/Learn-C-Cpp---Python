#sorting
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort()
print(thislist)

#numerical sort
thislist = [100, 50, 65, 82, 23]
thislist.sort()
print(thislist)

#sort reverse
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort(reverse = True)
print(thislist)











































































































#Customize sort function
def myfunc(n):
  return abs(n - 80)
thislist = [100, 50, 65, 82, 23]
thislist.sort(key = myfunc)#using key=function(keyword argument)
print(thislist)

#case-sensitive sorting
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.sort(key = str.lower)
print(thislist)

#reverse order
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.reverse()
print(thislist)
