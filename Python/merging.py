d1=dict()
d2=dict()
x=input("Enter keys of dict1: ").split(",")
y=input("Enter values of dict1: ").split(",")
p=input("Enter keys of dict2: ").split(",")
q=input("Enter values of dict2: ").split(",")
for i in range(len(x)):
	d1[x[i]]=int(y[i])
for i in range(len(p)):
    d2[p[i]]=int(q[i])
d1.update(d2)
print(d1)
