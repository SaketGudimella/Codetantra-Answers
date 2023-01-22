def cumulative_product(list1):
	n=int(input('Enter size of list: '))
	for i in range(n):
		x=int(input('Enter value: '))
		list1.append(x)
	cl=[]
	p=1
	for j in range(n):
		p*=list1[j]
		cl.append(p)
	print("Original List =",list1)
	print("Cumulative Product List =",cl)
list1=[]
cumulative_product(list1)
