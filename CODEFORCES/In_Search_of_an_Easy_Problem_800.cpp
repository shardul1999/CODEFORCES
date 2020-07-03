#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int n,p=0;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            p=1;
    }
    if(p==1)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}
