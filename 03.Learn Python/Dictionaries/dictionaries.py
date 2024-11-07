#dict Eg:1
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict)

#Eg:2
thisdict = {"brand": "Ford","model": "Mustang","year": 1964}
print(thisdict)

#Dict items
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict["model"])


thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020
}
print(thisdict)

#length
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020
}
print(len(thisdict))

#datatype
thisdict = {
  "brand": "Ford",
  "electric": False,
  "year": 1964,
  "colors": ["red", "white", "blue"]
}
print(type(thisdict))
print(thisdict)

#clear
thisdict = {
      "brand": "Ford",
      "model": "Mustang",
      "year": 1964
    }
thisdict.clear()
print(thisdict)


#copy
thisdict = {
      "brand": "Ford",
      "model": "Mustang",
      "year": 1964
    }
mydict = thisdict.copy()
print(mydict)


#update
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict.update({"year": 2020})
print(thisdict)


#keys
car= {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x=car.keys()
print(x)

#values
car= {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x=car.values()
print(x)

#pop
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict.pop("model")
print(thisdict)

#eg:2 pop item
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

thisdict.popitem( )
print(thisdict)



#fromkeys
x = ('key1', 'key2', 'key3')
y=0,1,2,3,4
thisdict = dict.fromkeys(x,y)
print(thisdict)


#get
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x=thisdict.get("model")
print(x)


#set default
car = {
  "brand": "Ford",
  # "model": "Mustang",
  "year": 1964
}
car.setdefault("model","Bronco")
print(car["model"])
print(car)

#items
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = thisdict.items()
print(x)