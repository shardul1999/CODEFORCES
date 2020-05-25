long long thirdLargest(long long a[], long long n)
{//2 4 1 3 5
    int l=0,sl=0,tl=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            tl=sl;
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
        {
            tl=sl;
            sl=a[i];
        }
        else if(a[i]>tl)
        tl=a[i];
    }
    if(tl==0)
    return -1;
    else
    return tl;
     //Your code here
}
