# 1 .capitalize() convert to the first character is upper case
strng = "welcome to everyone"
result=strng.capitalize()
print(strng)
print(result)

#casefold() to small
strng2 = "ZZZZZZ"
result = strng2.casefold()
print(result)

# 3.center()
strng3 = "saravanan"
width = 50  # Adjust this width according to your needs
result = strng3.center(width)
print(result)

# # count()
strng4 = "saravanan"
store = strng4.count("a")
print(store)

# endwidth()
strng5 = "saravanan"
store2 = strng5.endswith("n")
print(store2)

# startswidth()
strng5 = "saravanan"
store2 = strng5.startswith("ara")
print(store2)


# index()
strng6 = "saravanan"
store6 = strng6.index("s")
print(store6)

# swapcase()
strng7 = "SaRaVaNan"
store7 = strng7.swapcase()
print(store7)

# replace()

str8 = "saravanan"
str9 = str8.replace("a","o")
print(str9)


#split

a = "sysway technologies"
print(a.split())