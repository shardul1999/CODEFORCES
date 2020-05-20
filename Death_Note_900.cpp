

#include<iostream>
#include<vector>
#include<cstring>
#include<stdlib.h>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int a,b,d,f,p;
    cin>>a>>b;
    int e=b;
    int x;
    vector<int> v(a);
    for(int i=0;i<a;i++)
    {
        p=0;
        cin>>x;
        //cout<<x<<" "<<e<<endl;
        if(e>x)
        {
            e=e-x;
        }

       // cout<<x<<endl;

        else if(e<=x)
        {
            x=x-e;
            p++;
            p+=x/b;
            e=b-x%b;
        //    cout<<e<<endl;
        }
        v.push_back(p);
    }
    for(int i=a;i<2*a;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
