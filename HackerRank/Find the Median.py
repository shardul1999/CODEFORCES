n=int(input())
s=input().split()
s=[int(i) for i in s]
s=sorted(s)
x=(n-1)//2
print(s[x])
