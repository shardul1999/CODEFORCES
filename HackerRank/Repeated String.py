
s=input()
n=int(input())
#s=''
s1=''
x=s.count('a')*(n//len(s))

s1+=s[:(n%len(s))]
x+=s1.count('a')
print(x)
