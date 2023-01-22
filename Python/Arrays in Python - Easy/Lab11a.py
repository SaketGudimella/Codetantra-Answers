r=int(input("Number of rows, m = "))
c=int(input("Number of columns, n = "))
M=[]
for i in range(r):
	N=[]
	for j in range(c):
		print("Entry in row:",i+1,end='')
		print(' column:',j+1)
		e=int(input(''))
		N.append(e)
	M.append(N)
print(M)
