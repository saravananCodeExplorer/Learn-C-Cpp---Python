num = int(input("Enter the number:"))
import random
rand = (random.randint(1,num))
i=0
store =0
while i<num:
    store +=rand
    if num == rand:
        break
    i=i+1
print("The rand before value is",store)


# ex2
num = int(input("Enter the number: "))
import random

store = 0

while True:
    rand = random.randint(1, num)
    if num == rand:
        break

    store += rand
    print(f"Random number generated: {rand}")

print(f"The rand before value is, {store}")
