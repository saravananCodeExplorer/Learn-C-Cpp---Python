#lambda (lambda arguments : expression)
x = lambda a :(a + 10)
print(x(5))


#Multiple argument
x = lambda a, b,c: a * b-c
print(x(5, 6,2))

#doubler
def myfunc(n):
  return lambda a : a * n
mydoubler = myfunc(2)
print(mydoubler(11))
