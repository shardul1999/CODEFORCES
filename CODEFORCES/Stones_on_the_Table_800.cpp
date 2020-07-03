#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[50],a;
    cin>>str;
    int count=0;
    a=str[0];
    for(int i=1;i<n;i++)
    {
        if(str[i]==a)
        {
            count++;
        }
        else
            a=str[i];
    }
        cout<<count;

    return 0;
}
