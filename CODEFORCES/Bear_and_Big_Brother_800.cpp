#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int k=0;
    for(int i=0;;i++)
    {
        if(a>b)
            break;
        a=a*3;
        b=b*2;
        k++;
       // cout<<a<<" "<<b<<endl;

    }
    cout<<k;
    return 0;
}
