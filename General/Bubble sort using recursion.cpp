
void bs(int *a,int n,int j)
{
    if(n<=0)
        return;
    if(j==n)
        {bs(a,n-1,0);return;}
    if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    bs(a,n,j+1);
}
