import re
n=int(input())
for i in range(n):
	a=input()
	t=1
	for i in range(len(a)):
		if a[i:i+2]=="pi":
			print("3.14",end="")
			t=0
		elif t==0:
			t=1
		else:
			print(a[i],end="")
	print()
