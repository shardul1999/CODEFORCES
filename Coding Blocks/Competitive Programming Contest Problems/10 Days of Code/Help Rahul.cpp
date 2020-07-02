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

bool Lex1compare(pair<string,string> a,pair<string,string> b)
{
    return a.ff<b.ff;
}

bool Lex2compare(pair<string,string> a,pair<string,string> b)
{
    return a.ss<b.ss;//c<d;
}

bool Num1compare(pair<string,string> a,pair<string,string> b)
{
    int c=0,d=0;
    for(int i=0;i<a.ff.size();i++)
        c=c*10+(a.ff[i]-'0');
    for(int i=0;i<b.ff.size();i++)
        d=d*10+(b.ff[i]-'0');
    return c<d;
}

bool Num2compare(pair<string,string> a,pair<string,string> b)
{
        int c=0,d=0;
    for(int i=0;i<a.ss.size();i++)
        c=c*10+(a.ss[i]-'0');
    for(int i=0;i<b.ss.size();i++)
        d=d*10+(b.ss[i]-'0');
    //cout<<c<<" "<<d;
    return c<d;
}

int32_t main()
{
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.pb(a);
    }
    int x;
	cin>>x;
	auto it = find(v.begin(),v.end(),x);
    int index=it-v.begin();
	cout<<index;
    
    return 0;
}
