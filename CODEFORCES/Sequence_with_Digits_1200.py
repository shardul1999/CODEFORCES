t=int(input())
li=[]
for i in range(t):
	a=input().split()
	num=int(a[0])
	b=int(a[1])
	l=[int(i) for i in a[0]]
	while True:
		if b==1 or min(l)==0:
			li.append(num)
			break
		num+=min(l)*max(l)
		l=[]
		temp=''
		l=[i for i in str(num)]
		if len(l)>1:
			temp=''.join(l)
		else:
			temp=(l[0])
		l=[int(i) for i in str(num)]
		b-=1
for i in li:
	print(i)




