#include<algorithm>
// Function to convert given array to wave like array
// arr: input array
// n: size of array
void convertToWave(int *arr, int n){
    if(n%2!=0)
    n=n-1;
    for(int i=0;i<n;i+=2)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
   // cout<<endl;
    // Your code here
    
}
