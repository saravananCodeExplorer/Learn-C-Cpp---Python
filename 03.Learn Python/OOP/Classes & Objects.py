#create class
class MyClass:
  x =56
print(MyClass)

#define object
class Myclss:
    x=32
p1 = Myclss()
print(p1.x)

#using init() function inicial defult
class Person:
    def __init__(s, name, age):
        s.name = name
        s.age = age
p1 = Person("John", 36)
print(p1.name)
print(p1.age)

#The __str__()Function:
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def myfunc(self):
    print("Hello my name is " + self.name)



p1 = Person("John", 36)
p1.myfunc()

#modify the object properties:
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age=age

  def myfunc(self):
    print("Hello my name is " + self.name)

p1 = Person("John", 36)

p1.age = 40
print(p1.age)

#ex1 no print:
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age


  def myfunc(self):
    print("Hello my name is " + self.name)

p1 = Person("John", 36)
p1.age = 20




#CONSTRUCTOR:
class demo():
  def __init__(self,name,age):
      self.name=name
      self.age=age

  def display(self):
    print("name is",self.name)
    print("age is",self.age)

obj=demo("akash",20)
obj.display()

#destructor
class employee:
  def __init__(self):
      print("employee created")
  def __del__(self):
      print("destructor called,employee deleted")
obj=employee()
# del obj


