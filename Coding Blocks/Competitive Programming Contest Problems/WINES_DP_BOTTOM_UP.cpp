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
//for(int i=0;i<n;i++)
int dp[1000][1000]={0};
int solve(int *a,int n,int y)
{
    for(int i=0;i<n;i++)
        dp[i][i]=a[i]*n;
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        dp[i][i+1]=max(a[i]*(n-1)+dp[i+1][i+1],a[i+1]*(n-1)+dp[i][i]);
    }
   for(int i=0;i<n;i++)
    {
        int j=i+2;
        {
           dp[i][j]=max(a[i]*(n-2-i)+dp[i+1][j],a[j]*(n-2-i)+dp[i][j-1]);
        }
    }
    for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cout<<dp[i][j]<<" ";
    cout<<endl;
}
return 0;
}

int32_t main()
{
    int n,y;
    cin>>n>>y;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<solve(a,n,y);
	return 0;
}
