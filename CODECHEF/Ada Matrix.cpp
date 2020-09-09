 
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

void solve(int n,int a[][10])
{
    for(int j=1;j<=n;j++)
    {
        int temp=a[j][0];
        a[j][0]=a[0][j];
        a[0][j]=temp;
    }
}

int32_t main()
{
    FIO;
    w(t)
    {
        int n;cin>>n;
        int a[n+1][n+1]={0};
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        int ans=0;
        for(int i=n;i>=1;i--)
        {
            if(a[i][1]<a[1][i])
                {   //cout<<a[i][1]<<" "<<a[1][i]<<endl;
                    ans++;//solve(n,a);
                        for(int j=1;j<=i;j++)
                    {
                        int temp=a[j][1];
                        a[j][1]=a[1][j];
                        a[1][j]=temp;
                    }
                }
        
        }
        cout<<ans<<"\n";
    }
    return 0;
}
