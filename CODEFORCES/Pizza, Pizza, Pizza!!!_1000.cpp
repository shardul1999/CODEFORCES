#include<iostream>
using namespace std;
int main()
{
    long long int n,l;
    cin>>n;
    n=n+1;
    if(n%2!=0)
    {
        l=(n);
    }
    else{
        l=n/2;
    }
    if(n==1)
    {
        l=0;
    }
    cout<<l;
    return 0;
}
