#pack:
fruits = ("apple", "mango", "papaya")
(green, yellow, red) = fruits
print(green)
print(yellow)
print(red)

#unpack:
fruits = ("apple", "mango", "papaya")
(green, *yellow, red) = fruits
print(green)
print(yellow)
print(red)
