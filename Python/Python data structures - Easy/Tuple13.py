a = input("data: ")
tup = tuple(int(item) for item in a.split(",") )
print("tuple:",tup)
Sum = 0
for i in tup:
	Sum = Sum + i 
print("sum:",Sum)
