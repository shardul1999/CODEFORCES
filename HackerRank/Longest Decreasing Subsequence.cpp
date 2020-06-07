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
int a[1001];
int n;
int solve()
{
    int right[10000];
    right[n-1]=1;

//1 3 5 7 4 3 5 2 6
    // FOR CALCULATING THE RIGHT PART :-
    for(int i=n-2;i>=0;i--)
    {

        int x=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                x=max(x,right[j]+1);

        }
        right[i]=x;
    }
    int max1=0;
    for(int i=0;i<n;i++)
        max1=max(max1,right[i]);
    return max1;


}

int32_t main()
{

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        cout<<solve()<<endl;

    return 0;
}
