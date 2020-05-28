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

int32_t main()
{
    FIO;
    int t;
    cin>>t;
    int i=t;
    int a[t];
    for(int x=0;x<t;x++)
    {
        int n,m,k,j=0;
        cin>>n>>m>>k;
        int cards=n/k;
        if(cards>=m)
            j=m;
         else if(m-cards>0)
              {
                  m=m-cards;
                  while(m>0)
                {
                    m=m-(k-1);
                    j++;
                }
                j=cards -j;
              }
        if(j<0)
            j=0;

        a[x]=j;
        i=x;
    }

    for(int i=0;i<t;i++)
        cout<<a[i]<<endl;
	return 0;
}

