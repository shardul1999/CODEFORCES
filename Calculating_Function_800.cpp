#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    long long int n,count=0;
    cin>>n;

    if(n%2==0)
        count=n/2;
    else
        count=-((n/2)+1);
    cout<<count;
    return 0;
}
