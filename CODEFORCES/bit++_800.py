n=int(input())
count=0
for i in range(n):
	t=input()
	if t[0]=='+' or t[2]=='+':
		count+=1
	else:
		count-=1
print(count)
