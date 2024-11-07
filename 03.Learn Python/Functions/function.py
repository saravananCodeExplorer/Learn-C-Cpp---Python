def myfun():
    print("welcome to sysway")
myfun()


#Arguments
def my_function(fname):
  print(fname + " technologies")
my_function("sysway")
my_function("S-cad")
my_function("IELTS")


#no of arguments

def myfunction(fname,lname):
    print(fname + " " + lname)

myfunction("sysway","technologies")


#arbitary argument
def my_fun(*tech):
    print("name is "+ tech[0])
my_fun("sysway","s-cad","ielts")



#keyword argument
def my_function(child1, child2, child3):
  print("The youngest child is " + child1)

my_function(child1 = "IELTS", child2 = "S-CAD", child3 = "Sysway")


#default argument
def my_function(country = "Norway"):
  print("I am from " + country)
my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")


#return value
def my_function(x):
  return 5 * x
print(my_function(3))
print(my_function(5))
print(my_function(9))



#pass
def myfunction():
  pass

#rescursion function
def tri_recursion(k):
  if(k > 0):
    result = k + tri_recursion(k - 1)
    print(k)
    print(result)
  else:
    result = 0
  return result
print("\n\nRecursion Example Results")
tri_recursion(5)

#
# tri_recursion(1) receives 0 from tri_recursion(0), calculates 1 + 0 = 1, prints 1 and 1, and returns 1.
# tri_recursion(2) receives 1 from tri_recursion(1), calculates 2 + 1 = 3, prints 2 and 3, and returns 3.
# tri_recursion(3) receives 3 from tri_recursion(2), calculates 3 + 3 = 6, prints 3 and 6, and returns 6.
# tri_recursion(4) receives 6 from tri_recursion(3), calculates 4 + 6 = 10, prints 4 and 10, and returns 10.
# tri_recursion(5) receives 10 from tri_recursion(4), calculates 5 + 10 = 15, prints 5 and 15, and returns 15.
