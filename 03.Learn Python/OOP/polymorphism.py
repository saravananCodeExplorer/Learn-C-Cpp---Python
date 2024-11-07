# Polymorphism
# method overriding polymorphism
class Animal:
    # attributes and method of the parent class

    def eat(self):
        print("I like to eat raw meat")

# inherit from Animal
class Dog(Animal):

    # override eat() method
    def eat(self):
        print("I like to eat bones")
        super().eat()
# create an object of the subclass
lab = Dog()
# call the eat() method on the lab object
lab.eat()



# using super class-->Polymorphism
class Acer:
    name = "laptop"

    def processor(self):
        print("I am intel i5")

# inherit from Acer
class Asus(Acer):

    # override processor() method
    def processor(self):
        # call the processor() method of the superclass using super()
        print("I am intel i7")

        super().processor()
# create an object of the subclass
lap = Asus()

lap.processor()



