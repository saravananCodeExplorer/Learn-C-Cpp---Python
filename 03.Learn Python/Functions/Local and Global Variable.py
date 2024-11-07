#Local variable
def myfunc():
    x = 300
    print(x)
myfunc()



#global
x = "awesome"
def myfunc():
  print("Python is " + x)
myfunc()


#variable using same name
x = "awesome"
def myfunc():
  x = "fantastic"
  print("Python is " + x)
myfunc()
print("Python is " + x)


#Global Keyword
def myfunc():
  global x
  x = "fantastic"
myfunc()
print("Python is " + x)


