#define object
class Myclss:
    x=32
p1 = Myclss()
print(p1.x)


class father():
    f_name="tamil"
    f_age=50
class son():
    s_name="english"
    s_age=20
obj=father()
print(obj.f_name)
print(obj.f_age)
obj1=son()
print(obj1.s_name)
print(obj1.s_age)




#The Function:
class Person:
  a="he"
  def myfunc(self):
   print("Hello my name is ")

p1 = Person()
p1.myfunc()
print("value of a is",p1.a)




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
del obj
# obj.__init__()

# single level
class addition:
    def ADD1 (self):
        print(2+2)
    def ADD2 (self):
        print(4+4)

class subtraction(addition):
    def SUB1 (self):
        print(4-2)
    def SUB2 (self):
        print(8-4)
a1=subtraction()
a1.SUB2()


# multi  level
class addition:
    def ADD1 (self):
        print(2+2)
    def ADD2 (self):
        print(4+4)

class subtraction(addition):
    def SUB1 (self):
        print(4-2)
    def SUB2 (self):
        print(8-4)

class multiplication(subtraction):
    def MULTI1 (self):
        print(4*2)
    def MULTI2 (self):
        print(8*4)

a1=subtraction()
b1=multiplication()
b1.MULTI2()


# multiple  level
class addition:
    def ADD1 (self):
        print(2+2)
    def ADD2 (self):
        print(4+4)

class subtraction():
    def SUB1 (self):
        print(4-2)
    def SUB2 (self):
        print(8-4)

class multiplication(addition,subtraction):
    def MULTI1 (self):
        print(4*2)
    def MULTI2 (self):
        print(8*4)

a1=subtraction()
b1=multiplication()
b1.MULTI2()