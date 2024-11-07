 #joinsets
set1 = {"a", "b" , "c"}
set2 = {1, 2, 3}
set3 = set1.union(set2)
print(set3)


#keep only duplicates
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z=x.intersection(y)
print(z)

#keep all datas except duplicate
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.symmetric_difference(y)
print(x)

#for loop
thisset = {"apple", "banana", "cherry"}
for x in thisset:
  print(x)

#present in the list
thisset = {"apple", "banana", "cherry"}
print("Mango" in thisset)
