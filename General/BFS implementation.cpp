#include "/Users/himanisingh/Downloads/code1/stdc++.h"
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//for(int i=0;i<n;i++)
 
class graph{
    map<int,list<int> > l;
 public:
    void addedge(int x,int y)
    {
        l[x].pb(y);
        l[y].pb(x);
    }
    void bfs(int src)
    {
        map<int,int> visited;
        queue<int> q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            cout<<node<<" ";
            for(int n:l[node])
            if(!visited[n])
            {
                q.push(n);
                visited[n]=true;
            }
        }
        
    }
    
};
int32_t main()
{
    FIO;
    w(t)
    {
        graph g;
        int n,m;cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;cin>>x>>y;
            g.addedge(x,y);
        }
        g.bfs(1);
    }
    return 0;
}
