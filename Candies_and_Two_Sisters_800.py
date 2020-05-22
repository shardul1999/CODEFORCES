n=int(input())
l=[]
for i in range(n):
	a=int(input())
	if a%2==0:
		l.append((a//2)-1)
	else:
		l.append((a-1)//2)
for i in l:
	print(i)