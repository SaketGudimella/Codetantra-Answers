k = [ ]	#List declaration
n = int(input("Enter size of list: "))
for i in range(n):
	x=int(input('Enter value: '))
	k.append(x)
s=sum(k)
print("The sum of the given sequence",k,"is",s)
print("good bye..!")
