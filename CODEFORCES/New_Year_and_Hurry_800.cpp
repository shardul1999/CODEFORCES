
#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int problems,b,c=0;
    cin>>problems>>b;
    int timeleft=240-b;
    for(int i=1;i<=problems;i++)
    {
        if(timeleft>=5*i)
        {
            timeleft-=5*i;
            c++;
        }
        else
            break;
    }

    cout<<c;

    return 0;
}
