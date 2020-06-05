void largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    for(int i=0;i<sizeOfArray;i++)
    {//2 1 2
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 &&arr[i]!=max)
        max2=arr[i];
    }
    /*********************************
     * Your code here
     * This function should print 
     * max and second max
     * *******************************/
     if(max==INT_MIN)
     max=-1;
     if(max2==INT_MIN)
     max2=-1;
     cout << max << " " << max2 << endl;
}
