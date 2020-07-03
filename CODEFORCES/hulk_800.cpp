#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{

    int n;
    cin>>n;
    string x="it";
    string y="that I love ";
    string z="that I hate ";
    string s="I hate ";
    for(int i=0;i<n;i++)
    {
        if(i>=1&&i%2==0)
            s+=z;
        else if(i>=1)
            s+=y;
        if(i==n-1)
            s+=x;
    }
    cout<<s;
    return 0;
}
