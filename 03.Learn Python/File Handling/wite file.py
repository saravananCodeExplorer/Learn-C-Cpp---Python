#write in an existing file
f = open("e:\demofile.txt", "a")
f.write("Now the file has more content!")
f.close()
#open and read the file after the appending:
f = open("e:\demofile.txt", "r")
print(f.read())

#overwrite the content
f = open("e:\demofile.txt", "w")
f.write("Woops! I have deleted the content!")
f.close()
#open and read the file after the appending:
f = open("e:\demofile.txt", "r")
print(f.read())

#create a new file
f = open("e:\myfile1.txt", "x")

#remove file
import os
os.remove("e:\samplefile.txt")

#check the file
import os
if os.path.exists("e:\demofile.txt"):
  os.remove("e:\demofile.txt")
else:
  print("The file does not exist")

#remove folder
import os
os.rmdir("e:\myfolder")

f=open("e:\sample.doc",rt)
print(f.read())
