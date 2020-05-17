

#include <iostream>
#include <vector>
#include <string.h>
#include <cstdlib>
#include <algorithm>
using std::vector;
using std::cin;
using std::cout;
using namespace std;

int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    int t=(sum-n);

    if(t>0)
        cout<<t;
    else
        cout<<0;

    return 0;
}
