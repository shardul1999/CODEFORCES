n=int(input())
for i in range(n):
	a=int(input())
	b=input().split()
	b=set(b)
#	sorted(b)
	for j in b:
		print(j,end=" ")
	print()
