long long minDist(long long arr[], long long n, long long x, long long y) {
    int x1=n,y1=-n,mini=n+1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        x1=i;
        if(arr[i]==y)
        y1=i;
        if(mini>abs(x1-y1))
        mini=abs(x1-y1);
    }
    if(x1==n||y1==-n)
    return -1;
    else
    return mini;
    // add code here.
}
