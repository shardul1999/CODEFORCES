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
string solve(string s)
{
    int n=s.size();
    bool dp[n][n]={0};
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    for(int i=0;i<n-1;i++)
    if(s[i]==s[i+1])
        dp[i][i+1]=1;
    for(int d=2;d<n;d++)
    {
        int i=0,j=d;
        while(j<n)
        {
            if(s[i]==s[j] && dp[i+1][j-1])
            {
                dp[i][j]=1;
            }
            i++;j++;
        }
    }
    if(dp[0][n-1])
        return "true";
    else
        return "false";

}
int32_t main()
{
    string s;
    cin>>s;
    cout<<solve(s);
	return 0;
}

