#create a new file
# f = open("systech.txt", "x")

#write
f=open("systech.txt","w")
f.write("I am saravanan")


#append
f=open("systech.txt","a")
f.write(" from isysway technologies")
f.close()



#read
f=open("systech.txt" ,"r")
output=f.read()
print(output)
f.close()


#check the file
# import os
# if os.path.exists("systech.txt"):
#   os.remove("systech.txt")
# else:
#   print("The file does not exist")