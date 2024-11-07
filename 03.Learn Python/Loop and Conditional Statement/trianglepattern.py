# triangle patterns
# ex.1
for x in range(4):
    for y in range(x+1):
        print("*",end=" ")
    print()
print("left")

#ex.2
n=5
for x in range(5):
    for j in range(n-x):
        print(n-x,end=" ")
    print()
print("right")
# ex.3

n=5
for x in range(5):
    for y in range(n-x):
        print(" ",end=" ")
    for j in range(x+1):
        print("*",end=" ")
    print()
print()

n=5
for x in range(5):
    for y in range(x+1):
        print("",end="")
    for y in range(n-x):
        print("*",end=" ")
    print()

