'''num = int(input("Enter a number: "))
if (num % 2) == 0:
   print("Even")
else:
   print("Odd")

n=int(input("enter value"))
temp=n
rev=0
while(n>0):
   a=n%10
   rev=rev*10+a
   n=n//10
if(temp==rev):
 print("palindrome")
else:
 print("not a palindrome")'''


n=int(input("enter num"))
while(n!=0):
   rem=n%10
   print(rem)
   n=n//10
