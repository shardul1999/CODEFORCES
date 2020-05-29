#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;


#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define ll long long

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int32_t main()
{
    FIO;
    w(t)
    {
        int n,m,x,y,one,two;
        one=0;
        two=0;
        string s;
        cin>>n>>m>>x>>y;
        for(int i=0;i<n;i++)
        {

            int k=0;
            cin>>s;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='.'&& k==0)
                {
                     one++;
                     k++;
                }
                else if(s[j]=='.' && k!=0)
                {
                    one--;
                    two++;
                    k=0;
                }
                else
                    k=0;
               // cout<<one<<" "<<two<<endl;

            }
             //   cout<<x*(one+two*2)<<endl;

        }
        if((x*one+y*two)>(x*(one+two*2)))
                cout<<(x*(one+two*2))<<"\n";
            else
                cout<<(x*one+y*two)<<"\n";

    }

	return 0;
}
