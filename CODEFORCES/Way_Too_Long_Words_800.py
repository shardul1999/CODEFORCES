n=input()
l=[]
for i in range(int(n)):
    a=input()
    if len(a)<=10:
        l.append(a)
    else:
        t=a[0]+str(len(a[1:-1]))+a[-1]
        l.append(t)
for i in l:
    print(i)
    
