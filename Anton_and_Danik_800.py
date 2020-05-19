n=int(input())
s=input()
d=0
a=0
for i in s:
	if i=='D':
		d+=1

if d>(n-d):
	print("Danik")
elif d<(n-d):
	print("Anton" )
else:
	print("Friendship" )