#create a new file
f = open("d:\myfile1.txt", "x")


#write
f=open("d://demo.txt","w")
f.write("python")


#read
f=open("d://demo.txt","r")
output=f.read(5)
print(output)
f.close()

#append
f=open("d://demo.txt","a")
f.write("python\n")
f.write("is awesome")
list=["positive ","vibe"]
f.writelines(list)
f.close()

#remove file
import os
os.remove("d:\demo.txt")

f=open("d://demo.txt","w")
print("file name is ",f.name)
print("file property",f.readable())
print("file mode is ",f.mode)
f.close()
print("file closed or not",f.closed)

#check the file
import os
if os.path.exists("d:\demo.txt"):
  os.remove("d:\demo.txt")
else:
  print("The file does not exist")

  '''f = open("E:/demo1.txt", "rt").read( )
print(f.read())

#write file
f = open("E:\demo1.txt", "a")
f.write("Now the file has more content!")
f.close()
#open and read the file after the appending:
f = open("E:\demo1.txt", "r")
print(f.read())


#overwrite content
f = open("e:\demo1.txt", "w")
f.write("amarnath welcome to python class")
f.close()
#open and read the file after the appending:
f = open("e:\demo1.txt", "r")
print(f.read())

#create newfile
f = open("e:\amarnath.txt", "x")

#remove
import os
os.remove("e:\amarnath.txt")

import os
os.rmdir("e:\amarnath")'''
