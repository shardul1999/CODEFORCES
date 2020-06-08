int Solution::lis(const vector<int> &A) {
   int n=A.size();
   int left[10000]={0};
   if(n==1)
   return 1;
   left[0]=1;
   for(int i=1;i<n;i++)
   {
       int x=1;
       for(int j=0;j<=i;j++)
       {
           if(A[i]>A[j])
           {
               x=max(x,left[j]+1);
           }
       }
       left[i]=x;
   }
   int max1=0;
   for(int i=0;i<n;i++)
   max1=max(max1,left[i]);
   
   return max1;
}
