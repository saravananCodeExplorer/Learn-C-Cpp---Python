x="awesome"
print("python is" + x)

x="python is"
y="awesome"
z= x + y
print(z)

x=5
y=10
Z=5
print(x+y+Z)


a=b=c=20
print(a)
print(b)
print(c)

a=b=c=5,10,15
print(a)
print(b)
print(c)

x=5j
print(x)

x=set(("apple","banana","orange"))
print(x)

x=list(("apple","banana","orange"))
print(x)

x=tuple(("apple","banana","orange"))
print(x)

x=frozenset(("apple","banana","orange"))
print(x)

x=dict(name="mano",age=30)
print(x)

x=bytearray(5)
print(x)

x=["apple","banana","orange"]
print(x)

x=range(6)
print(x)

a=5
b=10.5
c=1j

print(float(a))
print(int(b))
print(complex(a))

import random
print(random.randrange(1,10),5)

a="sysway "
b=" Tech"
print(a+b)


a=["apple","banana","orange"]
b=["apple","banana","orange"]
c=a,b
print(a==b)

x = memoryview(bytes(5))
print(x)



#PROJECT
name1=input("enter the name1:").lower()
name2=input("enter the name2:").lower()
name1=name1.replace(" ","")
name2=name2.replace(" ","")
print(name1)
print(name2)
for i in name1:
    for j in name2:
        if i==j:
            name1=name1.replace(i,"",1)
            name2=name2.replace(j,"",1)
            break
count=len(name1+name2)
print(count)
if count>0:
    list1=["Friends","Lovers","Affectionate","Marriage","Enemies","Siblings"]
    while len(list1)>1:
        c=count%len(list1)
        s_index=c-1
        if s_index>=0:
            left=list1[:s_index]
            right=list1[s_index+1:]
            list1=right+left
        else:
            list1=list1[:len(list1)-1]
    print("Relationship is:",list1[0])
else:
    print("Enter differnt names")
