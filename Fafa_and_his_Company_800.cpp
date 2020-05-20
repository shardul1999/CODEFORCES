


#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int n,countn=0;
    cin>>n;
    for(int i=n/2;i>0;i--)
    {
        if(n%i==0)
            countn++;
    }
    cout<<countn;
    return 0;
}
