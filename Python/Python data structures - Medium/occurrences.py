a=input("Enter tuple: ")
tup=tuple((item) for item in a.split(","))
a1=set(a)
b=input("Enter list: ")
lis=list(item for item in a.split(","))
b1=set(b)
o=len(a1&b1)
print(o) 
