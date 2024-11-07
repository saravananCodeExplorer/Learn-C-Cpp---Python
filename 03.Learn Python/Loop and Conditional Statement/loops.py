# #while
i = 1
while i < 6:
  print(i)
  i = i + 1

#
# #Break Statement
i = 1
while i < 6:
  print(i)
  if i == 3:
    break
  i += 1

# #
# # #continue
# i = 1
# while i < 6:
#   i += 1
#   if i == 3:
#     continue
#   print(i)

#
# i=1
# while i<9:
#   print(i)
#   i=i+1

# 1.reverse number
num = int(input("Enter the number:"))
s=0

while(num):
  t = num%10
  s = 0*10 + t
  num = num//10
  print(s,end=" ")

#
# 2.factorial
# n=int(input("Enter the number:"))
# fact = 1
# if(n == 0):
#   print("The fact is",fact*n)
# elif(n==1):
#   print("The fact is",fact*n)
# else:
#   for i in range (2,n+1):
#     fact*=i
#   print("fact is :",fact)

# palindrome
# strng = input("enter the text:")
# if(strng == strng[::-1]):
#   print("palindrome")
# else:
#   print("not palindrome")
#



s = input("Enter string:")
store =""
for i in s:
    store=i+store
    print(store)
a="3"
b="3"
print(a+b)




