
#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int n,b,a;
    std::cin>>n;
    std::vector<int> a1(100);
    int t=a1.size();
    int j=1;
    for(int i=0;i<n;i++)
    {
        std::cin>>a>>b;
        while(1)
        {
            j++;
            if(a%j==0)
            {
                a=a+j+2*(b-1);
                j=1;
                a1.push_back(a);
                break;

            }
        }
    }
    for(int i=t;i<t+n;i++)
        cout<<a1[i]<<endl;
    return 0;
}
