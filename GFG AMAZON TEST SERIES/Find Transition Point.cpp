int transitionPoint(int arr[], int n) {
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {k=i;
        break;
        }if(i==n-1&&k==0)
        k=-1;
    }
    return k;
    // code here
}
