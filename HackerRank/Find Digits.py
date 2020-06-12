n=int(input())
l=[]
for i in range(n):
    s=input()
    count=0
    for j in range(len(s)):
        if int(s[j])==0:
            continue
        elif int(s)%int(s[j])==0:
            count+=1
    #print(count)

    l.append(count)
for i in l:
    print(i)
