#include<algorithm>


void rotateArr(int arr[], int d, int n){
    if(d>n)
    d=d%n;
    rotate(arr,arr+d,arr+n);
    // code here
}
