n=int(input())
l=[]
sum1=0
for i in range(n):
	s=input().split()
	if int(s[2])%2==0:
		sum1=int(s[0])*int(s[2])//2 - int(s[1])*int(s[2])//2
	else:
		sum1=int(s[0])*(int(s[2])+1)//2 - int(s[1])*((int(s[2]))//2)
	l.append(sum1)
for i in l:
	print(i)
