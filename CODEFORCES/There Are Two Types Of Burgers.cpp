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
bool com(char a, char b)
{
    return a<b;
}
string solve(string s)
{
    char c[127]={0};
    int n=s.size();
    if(n==0)
        return "";
     string r="";
    for(int i=0;i<n;i++)
    {
        if(c[s[i]]==0)
            {c[s[i]]++;r+=s[i];}
    }
    int x=r.size();
    sort(r.begin(),r.end(),com);
    return r;
}

int32_t main()
{
    FIO;
    w(t)
    {
    int p,c,l;
    int b,s;
    cin>>p>>c>>l>>b>>s;
    int maxi=0;
    if(b>s)
    {
        int p2=0;
        int p1=min(p/2,c);
        if(p1!=p/2)
            p2=min(p/2-c,l);
        maxi=p1*b+p2*s;
    }
    else
    {
        int p2=0;
        int p1=min(p/2,l);
        if(p1!=p/2)
            p2=min(p/2-l,c);
        maxi=p1*s+p2*b;
    }
      cout<<maxi<<"\n";
    }
    return 0;
}
