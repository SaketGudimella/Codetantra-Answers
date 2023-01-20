a=input("str1: ")
b=input("str2: ")
c=a[1:]+b[1:]
if (len(a)<=1 & len(b)<=1):
	print("null")
else:
	print("output:",c)
