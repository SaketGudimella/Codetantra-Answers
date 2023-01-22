sql=[]
l=input('data: ').split(',')
for j in range(len(l)):
	l[j]=int(l[j])
print('list:',l)
s=sum(l)
print('sum:',s)
for i in range(len(l)):
	e=l[i]*l[i]
	sql.append(e)
print('squares:',sql)
ssq=sum(sql)
print('sum of squares:',ssq)
