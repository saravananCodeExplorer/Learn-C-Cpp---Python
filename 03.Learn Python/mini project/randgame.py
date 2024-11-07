# random number generated before number is calculation
num = int(input("Enter the number: "))
import random

i = 0
store = 0

while i < num:
    rand = random.randint(1, num)
    if num == rand:

        break

    store += rand
    print(f"Random number generated: {rand}")
    i += 1

print(f"The rand before value is {store}")
