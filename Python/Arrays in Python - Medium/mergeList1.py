def merge(list1, list2):
	list3=list1+list2
	l=sorted(list3)
	print(l)
temp1 = input("Enter comma separated elements for list 1: ")
temp2 = input("Enter comma separated elements for list 2: ")
list1 = temp1.split(",")
list2 = temp2.split(",")
for i in range(len(list1)):
	list1[i]=int(list1[i])
for j in range(len(list2)):
	list2[j]=int(list2[j])
merge(list1, list2)
