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

void prime_sieve(int *p)
{
    for(int i=3;i<100000;i+=2)
        p[i]=1;
    for(int i=3;i<100000;i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<100000;j=j+i)
                p[j]=0;
        }
    }
}
int32_t main()
{
    FIO;
    w(t)
    {
        int n,m;
        cin>>n>>m;
        int a[100000]={0};
        a[0]=0;
        a[1]=0;
        a[2]=1;
        int ans=0;
        prime_sieve(a);
        for(int i=n;i<=m;i++)
            if(a[i]==1)
            ans++;
            cout<<ans<<"\n";
	}
	return 0;
}
