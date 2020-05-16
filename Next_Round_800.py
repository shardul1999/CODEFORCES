n=input().split()
n=[int(i) for i in n]
m=input().split()
m=[int(i) for i in m]
p=m[n[1]-1]
numb=0
for i in range(n[0]):
	if m[i]>=p and m[i]>0:
		numb+=1
	else:
		break
print(numb,end='')