for x in range(6):
    for y in range(6):
        print("*",end=" ")
    print()


for x in range(1,6):
    for y in range(1,6):
        print(x,end=" ")
    print()


for x in range(1,6):
    for y in range(1,6):
        print(y,end=" ")
    print()

for x in range(5,0,-1):
    for y in range(5,0,-1):
        print(x,end=" ")
    print()

mylist=["apple","kiwi"]
[print(mylist) for i in mylist]


for i in range(1,5):
    for j in range(1,5):
        print(j,end=" ")
    print()


n=int(input("enter no of rows"))
for i in range(n):
    for j in range(i+1):
        print(j+1,end=" ")
    print()

# Patterns

for x in range(5):
    for y in range(5):
        print("*", end=" ")
    print()

for x in range(5):
    for y in range(5):
        print(x, end=" ")
    print()

for x in "ABCDE":
    for y in "ABCDE":
        print(x, end=" ")
    print()

for x in "ABCDE":
    for y in "ABCDE":
        print(y, end=" ")
    print()

for x in range(1, 6):
    for y in range(1, 6):
        print(y, end=" ")
    print()

n = int(input("enter value"))
for x in range(n):
    for y in range(n):
        print(n - x, end=" ")
    print()

n = int(input("enter value"))
for x in range(n):
    for y in range(n - x):
        print(x + 1, end=" ")
    print()

n = int(input("enter value"))
for x in range(n):
    for y in range(n - x):
        print(y + 1, end=" ")
    print()

n = int(input("enter value"))
for x in range(n):
    for y in range(n - x):
        print(n - x, end=" ")
    print()

n = int(input("enter "))
z = 1
for x in range(n):
    for y in range(x):
        print(z, end=" ")
        z += 1
    print()

z = 1
for x in "abcde":
    for y in range(z):
        print(x, end=" ")
    z += 1
    print()










a=["audi","bmw","hyundai"]
b=["black","white"]
for i in a:
    for j in b:
        print(i,j)

# audi black
# audi white
# bmw black
# bmw white
# hyundai black
# hyundai white




a=["audi","bmw","hyundai"]
b=["black","white"]
for i in a:
    for j in b:
        print(i,j,end=" ")

# audi black audi white bmw black bmw white hyundai black hyundai white





a=["audi","bmw","hyundai"]
b=["black","white"]
for i in a:
    for j in b:
        print(i,j,end=" ")
    print()

#
# audi black audi white
# bmw black bmw white
# hyundai black hyundai white




for i in range(1,5):
    for j in range(1,5):
        print(i,j,end=" ")
    print()

#
# 1 1 1 2 1 3 1 4
# 2 1 2 2 2 3 2 4
# 3 1 3 2 3 3 3 4
# 4 1 4 2 4 3 4 4


for i in range(1,5):
    for j in range(1,5):
        print(j,end=" ")
    print()



# 1 2 3 4
# 1 2 3 4
# 1 2 3 4
# 1 2 3 4


for i in range(1,5):
    for j in range(1,5):
        print(i,end=" ")
    print()



# 1 1 1 1
# 2 2 2 2
# 3 3 3 3
# 4 4 4 4


for i in range(5,0,-1):
    for j in range(5,0,-1):
        print(i,end=" ")
    print()

#
# 5 5 5 5 5
# 4 4 4 4 4
# 3 3 3 3 3
# 2 2 2 2 2
# 1 1 1 1 1
#


for i in range(5,0,-1):
    for j in range(5,0,-1):
        print(j,end=" ")
    print()


#
# 5 4 3 2 1
# 5 4 3 2 1
# 5 4 3 2 1
# 5 4 3 2 1
# 5 4 3 2 1


for i in range(1,5):
    for j in range(1,5):
        print("*",end=" ")
    print()


# * * * *
# * * * *
# * * * *
# * * * *
#


for i in range(1,5):
    for j in range(1,5):
        print("ABCDE",end=" ")
    print()

#
# ABCDE ABCDE ABCDE ABCDE
# ABCDE ABCDE ABCDE ABCDE
# ABCDE ABCDE ABCDE ABCDE
# ABCDE ABCDE ABCDE ABCDE



k=1
for i in range(1,6):
    for j in range(1,6):
        print("{:2d}".format(k),end=" ")
        k=k+1
    print()


#
#  1  2  3  4  5
#  6  7  8  9 10
# 11 12 13 14 15
# 16 17 18 19 20
# 21 22 23 24 25
#

k=2
for i in range(1,6):
    for j in range(1,6):
        print("{:2d}".format(k),end=" ")
        k=k+1
    print()

# 2  3  4  5  6
#  7  8  9 10 11
# 12 13 14 15 16
# 17 18 19 20 21
# 22 23 24 25 26



k=1
for i in range(1,6):
    for j in range(1,6):
        print("{:2d}".format(k),end=" ")
        k=k+2
    print()


#  1  3  5  7  9
# 11 13 15 17 19
# 21 23 25 27 29
# 31 33 35 37 39
# 41 43 45 47 49



k=50
for i in range(6,1,-1):
    for j in range(6,1,-1):
        print("{:2d}".format(k),end=" ")
        k=k-1
#
# 50 49 48 47 46
# 45 44 43 42 41
# 40 39 38 37 36
# 35 34 33 32 31
# 30 29 28 27 26


k=50
for i in range(6,1,-1):
    for j in range(6,1,-1):
        print("{:2d}".format(k),end=" ")
        k=k-2
    print()

# 50 48 46 44 42
# 40 38 36 34 32
# 30 28 26 24 22
# 20 18 16 14 12
# 10  8  6  4  2


k=49
for i in range(6,1,-1):
    for j in range(6,1,-1):
        print("{:2d}".format(k),end=" ")
        k=k-2
    print()

# 49 47 45 43 41
# 39 37 35 33 31
# 29 27 25 23 21
# 19 17 15 13 11
#  9  7  5  3  1


for i in range(65,70):
    for j in range(65,70):
        print(chr(i),end=" ")
    print()


# A A A A A
# B B B B B
# C C C C C
# D D D D D
# E E E E E
#


for i in range(65,70):
    for j in range(65,70):
        print(chr(j),end=" ")
    print()


# A B C D E
# A B C D E
# A B C D E
# A B C D E
# A B C D E


for i in range(97,102):
    for j in range(97,102):
        print(chr(j),end=" ")
    print()


# a b c d e
# a b c d e
# a b c d e
# a b c d e
# a b c d e



for i in range(97,102):
    for j in range(97,102):
        print(chr(i),end=" ")
    print()



# a a a a a
# b b b b b
# c c c c c
# d d d d d
# e e e e e


for i in range(102,97,-1):
    for j in range(102,97,-1):
        print(chr(i),end=" ")
    print()

#
# f f f f f
# e e e e e
# d d d d d
# c c c c c
# b b b b b


for i in range(1,5):
    for j in range(1,i+1):
        print(i,end=" ")
    print()


# 1
# 2 2
# 3 3 3
# 4 4 4 4


for i in range(1,5):
    for j in range(1,i+1):
        print(j,end=" ")
    print()


# 1
# 1 2
# 1 2 3
# 1 2 3 4

for i in range(5,0,-1):
    for j in range(5,i-1,-1):
        print(j,end=" ")
    print()

# 5
# 5 4
# 5 4 3
# 5 4 3 2
# 5 4 3 2 1


for i in range(5,0,-1):
    for j in range(5,i-1,-1):
        print(i,end=" ")
    print()

# 5
# 4 4
# 3 3 3
# 2 2 2 2
# 1 1 1 1 1


for i in range(1,5):
    for j in range(1,i+1):
        print(j*2,end=" ")
    print()

# 2
# 2 4
# 2 4 6
# 2 4 6 8



for i in range(1,5):
    for j in range(1,i+1):
        print(i*2,end=" ")
    print()


# 2
# 4 4
# 6 6 6
# 8 8 8 8
#

k=1
for i in range(1,5):
    for j in range(1,i+1):
        print(k*1,end=" ")
        k=k+1
    print()


# 1
# 2 3
# 4 5 6
# 7 8 9 10


k=1
for i in range(1,5):
    for j in range(1,i+1):
        print(k*2,end=" ")
        k=k+1
    print()

# 2
# 4 6
# 8 10 12
# 14 16 18 20


k=1
for i in range(1,5):
    for j in range(1,i+1):
        print(k*1,end=" ")
        k=k+2
    print()
#
# 1
# 3 5
# 7 9 11
# 13 15 17 19


for i in range(1,5):
    for j in range(1,i+1):
        print("*",end=" ")
    print()


# *
# * *
# * * *
# * * * *
#


for i in range(65,70):
    for j in range(65,i+1):
        print(chr(i),end=" ")
    print()

# A
# B B
# C C C
# D D D D
# E E E E E


for i in range(65,70):
    for j in range(65,i+1):
        print(chr(j),end=" ")
    print()
#
# A
# A B
# A B C
# A B C D
# A B C D E

for i in range(5,1,-1):
    for j in range(5,i-1,-1):
        print(i,end=" ")
    print()

# 5
# 4 4
# 3 3 3
# 2 2 2 2

for i in range(5,1,-1):
    for j in range(5,i-1,-1):
        print(j,end=" ")
    print()

#
# 5
# 5 4
# 5 4 3
# 5 4 3 2


for i in range(1,6):
    for j in range(6,i,-1):
        print("*",end=" ")
    print()


# * * * * *
# * * * *
# * * *
# * *
# *


for i in range(1,6):
    for j in range(6,i,-1):
        print(j,end=" ")
    print()
#
# 6 5 4 3 2
# 6 5 4 3
# 6 5 4
# 6 5
# 6


for i in range(1,6):
    for j in range(6,i,-1):
        print(i,end=" ")
    print()
#
# 1 1 1 1 1
# 2 2 2 2
# 3 3 3
# 4 4
# 5

for i in range(1,6):
    for j in range(6,0,-1):
        if i>=j:
            print(j,end=" ")
        else:
            print(" ",end=" ")
    print()
  #
  #         1
  #       2 1
  #     3 2 1
  #   4 3 2 1
  # 5 4 3 2 1


for i in range(1,6):
    for j in range(6,0,-1):
        if i>=j:
            print(i,end=" ")
        else:
            print(" ",end=" ")
    print()


  #        1
  #       2 2
  #     3 3 3
  #   4 4 4 4
  # 5 5 5 5 5


for i in range(1,6):
    for j in range(6,0,-1):
        if i>=j:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()


  #        *
  #       * *
  #     * * *
  #   * * * *
  # * * * * *

for i in range(65,70):
    for j in range(70,64,-1):
        if i>=j:
            print(chr(j),end=" ")
        else:
            print(" ",end=" ")
    print()

  #         A
  #       B A
  #     C B A
  #   D C B A
  # E D C B A


for i in range(65,70):
    for j in range(70,64,-1):
        if i>=j:
            print(chr(i),end=" ")
        else:
            print(" ",end=" ")
    print()

  #
  #         A
  #       B B
  #     C C C
  #   D D D D
  # E E E E E

for i in range(1,6):
    for j in range(5,0,-1):
        if i>=j:
            print("*",end=" ")
        else:
            print("",end=" ")
    print()

#     *
#    * *
#   * * *
#  * * * *
# * * * * *



n=5
d=1
for i in range(1,n+1):
    for j in range(1,n+1):
        if j==1 or j==n or ((j==d or j==n-d+1)and i<=n//2+1):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    d=d+1
    print()

# *       *
# * *   * *
# *   *   *
# *       *
# *       *

for i in range(1,5):
    for j in range(1,5):
        print(str((i+j)%2)+" ",end=" ")
    print()


# 0  1  0  1
# 1  0  1  0
# 0  1  0  1
# 1  0  1  0


for i in range(1,5):
    for j in range(0,5):
        print(str((i+j)%2)+" ",end=" ")
    print()

# 1  0  1  0  1
# 0  1  0  1  0
# 1  0  1  0  1
# 0  1  0  1  0



for i in range(1,5):
    for j in range(1,5):
        print(str(i%2)+" ",end=" ")
    print()

#
# 1  1  1  1
# 0  0  0  0
# 1  1  1  1
# 0  0  0  0

for i in range(1,5):
    for j in range(1,5):
        print("{:2d}".format(i*j),end=" ")
    print()

 # 1  2  3  4
 # 2  4  6  8
 # 3  6  9 12
 # 4  8 12 16
