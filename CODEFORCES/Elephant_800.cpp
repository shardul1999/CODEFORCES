#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int a,count=1;
    cin>>a;
    for(int i=0;;i++)
    {
        if(a>5)
        {
            a=a-5;
            count++;
        }
        else
            break;
    }
    cout<<count;
    return 0;
}
