#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int count=0,b,c;
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                b=i;
                c=j;
            }


        }

    }
    count=abs(2-b)+abs(2-c);
    cout<<count;
    return 0;
}
