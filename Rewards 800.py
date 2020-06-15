s1=input().split()
s1=[int(i) for i in s1]
s2=input().split()
s2=[int(i) for i in s2]
n=int(input())
sum1=sum(s1)
sum2=sum(s2)
#print(sum1," ",sum2)
a=sum1//5
b=sum2//10
c=a+b
if sum1%5 > 0:
	c+=1
if sum2%10 > 0:
	c+=1
#print(c)
if n>=c:
	print("YES")
else:
	print("NO")
