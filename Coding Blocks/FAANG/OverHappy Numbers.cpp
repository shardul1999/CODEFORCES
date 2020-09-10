#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
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
int sqr(int n)
{
    return n*n;
}
int32_t main()
{
    int n;cin>>n;
    int x=n,y=0;
    int ans;
    int t=0;
    while(1)
    {
        ans=0;
        while(x)
        {
            int dig=x%10;
            x=x/10;
            //cout<<dig<<endl;
            ans+=sqr(dig);
        }
        if(ans==1)
            {y=1;break;}
        x=ans;
        t++;
        if(t>100)
            break;
    }
        if(y)
            cout<<"true";
        else
            cout<<"false";
  return 0;
}
