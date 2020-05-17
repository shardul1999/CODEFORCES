#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    long int n,a,count=1,c=3;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if((c!=3)&&(c==(a/10)))
        {
            count++;
            c=a%10;
            //cout<<count<<endl;
        }
        else
            c=a%10;
    }
    cout<<count;
    return 0;
}
