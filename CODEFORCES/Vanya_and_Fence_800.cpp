#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
#include<bits/stdc++.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>c;
        if(c>b)
        {
            sum+=2;
        }
        else
        {
            sum++;
        }
    }

    cout<<sum;
    return 0;
}
