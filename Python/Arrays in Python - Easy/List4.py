a = input("data: ")
l = list(int(item) for item in a.split(","))
ll = len(l)
if(l[ll-1]==3 or l[0]==3):
	print("True")
else:
	print("False")
