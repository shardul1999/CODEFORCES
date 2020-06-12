s=input().split()
s=[int(i) for i in s]
#n=s[1]-s[0]+1
count=0
for i in range(s[0],s[1]+1):
    n=abs(i-int(str(i)[::-1]))
    if n%s[2]==0:
        count+=1
print(count)
