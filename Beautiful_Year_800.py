year=int(input())
year+=1
s=str(year)
while True:
	if s[0]!=s[1] and s[0]!=s[2] and s[0]!=s[3] and s[1]!=s[2] and s[1]!=s[3] and s[2]!=s[3]:
		break
	year+=1
	s=str(year)
print(year)	

