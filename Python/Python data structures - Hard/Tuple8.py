c=0
x=input('data: ')
t=tuple(x.split(','))
a=int(input('start index: '))
e=int(input('end index: '))
b=[]
if e<len(t) and e>0:
	for i in range(a,e):
		b.append(t[i])
		
	print("tuple in given range:",tuple(b))
	
else:
	print('enter valid index')
