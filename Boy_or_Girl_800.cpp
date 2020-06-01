import re
s=input()
k=0
h=''
for i in s:
	if re.search(i,h):
		k+=1
	h+=i
	#print(i)
if (len(s)-k)%2==0:
	print("CHAT WITH HER!")
else:
	print("IGNORE HIM!")
