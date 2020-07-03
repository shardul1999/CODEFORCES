import math
n=input()
l=[]
for i in range(int(n)):
	s=input().split()
	total=int(s[0])*int(s[1])
	l.append(math.ceil(total/2))
for i in l:
	print(i)
