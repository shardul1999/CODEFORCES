#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int n,m,h=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
                cout<<"#";
            else
            {
               //cout<<h;
               if(((h%2==0)&&(j==m-1))||((h%2!=0)&&(j==0)))
                cout<<"#";
               else
                cout<<".";
            }

        }
        if(i%2!=0)
        h++;


        cout<<endl;
    }

    return 0;
}
