for i in range(1,6):
    for j in range(4):
        if i in {1,2,3,4,5} and j in {0}:
            print("*",end=" ")
        elif i in {3} and j in {1}:
            print("*",end=" ")
        elif i in {2,4} and j in {2}:
            print("*",end=" ")
        elif i in {1,5} and j in {3}:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()

# s letter pattern
for i in range(5):
    for j in range(5):
        if i in {0} and j in {0,1,2,3,4}:
            print("*",end=" ")
        elif i in{1} and j in {0}:
                print("*",end=" ")
        elif i in {2}and j in {0,1,2,3,4}:
             print("*",end=" ")
        elif i in {3} and j in {4}:
            print("*",end=" ")
        elif i in {4} and j in {0,1,2,3,4}:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()

