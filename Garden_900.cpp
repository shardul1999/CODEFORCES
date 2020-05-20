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
    int a,b,c,d;
    cin>>a>>b;
    vector<int> v(a);
    for(int i=0;i<a;i++)
    {

        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(int i=2*a-1;i>=a;i--)
    {
        if(b%v[i]==0)
        {
            d=v[i];
            break;
        }
    }
    cout<<(b/d);

    return 0;
}
