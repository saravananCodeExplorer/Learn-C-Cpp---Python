for i in range(8):
  for j in range(8):
    if i in {0} and j in {0,7}:
      print("*",end=" ")
    elif i in {1} and j in {0,1,6,7}:
      print("*", end=" ")
    elif i in {2} and j in {0,1,2,5,6,7}:
      print("*", end=" ")
    elif i in {3} and j in {0,1,2,3,4,5,6,7}:
      print("*", end=" ")
    elif i in {4} and j in {0, 1, 2, 3, 4, 5, 6, 7}:
      print("*", end=" ")
    elif i in {5} and j in {0,1,2,5,6,7}:
      print("*", end=" ")

    elif i in {6} and j in {0,1,6,7}:
      print("*", end=" ")
    elif i in {7} and j in {0, 7}:
      print("*", end=" ")
    else:
      print(" ",end=' ')
  print()