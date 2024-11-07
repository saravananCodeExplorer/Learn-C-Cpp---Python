password = int(input("SET THE PASSWORD:"))
your_password = int(input("Enter your password"))

if(your_password== password):
    f = open("systech.txt", "r")
    print("The content in the file:")
    print(f.read())
    f.close()
else:
    for i in range(3):
        if(i!=3):
            print("Incorrect password")
            your_password=int(input("Re enter your password"))
        if(your_password==password):
            f=open("systech.txt" ,"r")
            print("The content in the file:")
            print(f.read())
            f.close()
            break
    if(your_password!=password):
        print("File is locked")
        password=1848
        your_password = int(input("PLEASE enter correct your password"))
    if(your_password==password):
        f = open("systech.txt", "r")
        print("The content in the file:")
        print(f.read())
        f.close()





