#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#include<sstream>
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
    int n,count1=0,c,d,e,f;
    string a,b;//,t,l,m;
    cin>>n>>a>>b;
    //stringstream geek(s);
    for(int i=0;i<n;i++)
    {
        c=a[i]-'0';
        d=b[i]-'0';
        e=min(c,d);
        f=max(c,d);
        if(abs(f-e) < (e+10-f) )
        {
            count1+= abs(f-e);
        }
        else
        count1+=(e+10-f);

    }
        cout<<count1;
	return 0;
}
