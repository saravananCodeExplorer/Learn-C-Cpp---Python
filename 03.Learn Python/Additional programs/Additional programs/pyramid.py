'''rows = int(input("Enter number of rows: "))

for i in range(rows):
    for j in range(i+1):
        print("* ", end="")
    print("\n")'''




#Program to print half pyramid a using numbers
'''rows = int(input("Enter number of rows: "))

for i in range(rows):
    for j in range(i+1):
        print(j+1, end=" ")
    print("\n")'''


#Program to print half pyramid using alphabets
'''rows = int(input("Enter number of rows: "))

ascii_value = 65

for i in range(rows):
    for j in range(i+1):
        alphabet = chr(ascii_value)
        print(alphabet, end=" ")
    
    ascii_value += 1
    print("\n")

#Inverted half pyramid using *
rows = int(input("Enter number of rows: "))

for i in range(rows, 0, -1):
    for j in range(0, i):
        print("* ", end=" ")
    
    print("\n")



# Program to print full pyramid using *

rows = int(input("Enter number of rows: "))

k = 0

for i in range(1, rows+1):
    for space in range(1, (rows-i)+1):
        print(end="  ")
   
    while k!=(2*i-1):
        print("* ", end="")
        k += 1
   
    k = 0
    print()'''

for x in range(1,6):
    for y in range(1,6):
        print("*",end=" ")
    print()