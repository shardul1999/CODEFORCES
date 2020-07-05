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

int solve(int *a,int n)
{
    int left[n]={0};
    left[0]=1;
    for(int i=1;i<n;i++)
    {
        int x=1;
        int j=0;
        while(i>j && a[j]<=a[i])
        {
            x=max(x,left[j]+1);
            j++;
        }
     //   cout<<x<<" ";
        left[i]=x;
    }
    int maxi=1;
    for(int i=0;i<n;i++)
    {
        if(maxi<left[i])
            maxi=left[i];
    }
    return maxi;
}

int32_t main()
{
    FIO;
    w(t)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(a,n)<<"\n";
    }
    return 0;
}
