l=input('Enter list integers separated by space: ').split()
for i in range(len(l)):
	l[i]=int(l[i])
l.remove(max(l))
l.remove(min(l))
print('Second Maximum and Second minimum numbers in the list: ',max(l),min(l))
