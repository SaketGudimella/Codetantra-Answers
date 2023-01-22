n=int(input('Enter size of list: '))
ol=[]
for i in range(n):
	x=int(input('Enter value: '))
	ol.append(x)
print('Original List =',ol)
ol.reverse()
print('Reversed List =',ol)
