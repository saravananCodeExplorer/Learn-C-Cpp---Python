# n=int(input(("enter the number:")))
n=5
first=0
second=1
for i in range (0,n):
    if(i<=1):
        next = i
    else:
        next = first + second
        first = second
        second = next
    print(next)
