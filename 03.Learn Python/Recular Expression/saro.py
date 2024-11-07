
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
        super().processor()
        print("I am intel i7")
# create an object of the subclass
lap = Asus()

lap.processor()

