#zip function
a = ("John", "Charles", "Mike","arun")
b = ("John", "Christy", "Monica", "Vicky")
x = zip(a,b)
print(x)
#use the tuple() function to display a readable version of the result:
print(set(x))


#map Function
def myfunc(a, b):
  return a + b
x = map(myfunc,('apple', 'banana', 'cherry'), ('orange', 'lemon', 'pineapple'))
print(list(x))


#map length
def myfunc(n):
  return len(n)
x = map(myfunc,('apple', 'banana', 'cherry',"saravanan"))
print(list(x))


#filter
def is_even(n):
  return n%2!=0
num=[1,2,3,4,5,6,7,8,9,10]
evens=list(map(is_even,num))
print(evens)

