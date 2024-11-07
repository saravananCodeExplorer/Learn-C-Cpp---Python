# Arithmetic operation using Function in Single inheritance
class Operation:
    def ADD (self,n1,n2):
        print(n1+n2)
    def SUB (self,n1,n2):
        print(n1-n2)

class Operation2(Operation):
    def MUL (self,m1,m2):
        print(m1*m2)
    def DIV (self,m1,m2):
        print(m1/m2)
obj=Operation2()
obj.ADD(5,10)
obj.SUB(10,2)
obj.MUL(100,2)
obj.DIV(20,2)

# Arithmetic operations using Constructor

class Operation:
    def __init__(self,n1,n2):
        self.n1=n1
        self.n2=n2
    def ADD (self):
        print("Addition of two: ",self.n1+self.n2)
    def SUB (self):
        print("Subtraction of two:",self.n1-self.n2)
    def MUL (self):
        print("Multiplication of two:",self.n1*self.n2)
    def DIV (self):
        print("Division of two:",self.n1/self.n2)
obj=Operation(12,2)
obj.ADD()
obj.SUB()
obj.MUL()
obj.DIV()

# Calculator program
def basic_calculator():

    user = int(input("1 for add, 2 for sub, 3 for multi, 4 for div=> "))

    if 5 > user:

     a = int(input("enter your first number=> "))
     b = int(input("enter  your second number=> "))
    if user == 1:
        add = (a + b)
        print("add : {} + {} = {}".format(a, b, add))
    elif user == 2:
        sub = (a - b)
        print("sub : {} - {} = {}".format(a, b, sub))
    elif user == 3:
        multi = (a * b)
        print("multi : {} * {} = {}".format(a, b, multi))
    elif user == 4:
        div = (a / b)
        print("div : {} / {} = {}".format(a, b, div))
    else:
        print("Error")


basic_calculator()