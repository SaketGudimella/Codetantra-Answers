x=input('')
v=['a','e','i','o','u','A','E','I','O','U']
c=['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z']
d=['1','2','3','4','5','6','7','8','9','0']
vc=cc=dc=sc=0
for i in x:
	if i in v:
		vc+=1
	elif i in c:
		cc+=1
	elif i in d:
		dc+=1
	elif i==' ':
		sc+=1
print('vowels =',vc)
print('consonants =',cc)
print('digits =',dc)
print('white spaces =',sc)
