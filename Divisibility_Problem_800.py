n=int(input())
l=[]
for i in range(n):
	a=input().split()
	b=int(a[0])
	c=int(a[1])
	if b%c==0:
		l.append(0)
	else:
		t=b//c
		x=c*(t+1)-b
		l.append(x)
for i in l:
	print(i)

