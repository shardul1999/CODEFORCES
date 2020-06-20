n=int(input())
for i in range(1,n+1):
	if i==1:
		print("1")
	elif i%2==0:
		print("1"+"0"*(i-2)+"1")
	else:
		print("1"*i)
