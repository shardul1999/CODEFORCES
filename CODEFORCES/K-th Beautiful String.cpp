//TIME COMPLEXITY: nested for loop => O(n^2)
//SPACE COMPLEXITY: created arrays of size n => O(n)
 
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
    w(t)
    {
        int n,k;
        cin>>n>>k;
        string a="";
        int m[n]={0};
        int h=2;
        m[0]=1;
        int k1,k2;
        for(int i=1;i<n;i++)
            {m[i]=m[i-1]+h;h++;}
        for(int i=0;i<n;i++)
            {
                //cout<<m[i]<<" ";
                if((m[i]-k)>=0)
                {
                    k1=m[i];
                    k2=i;
                    break;
                }
            }
            //cout<<k2<<endl;
        
        if(abs(m[k2-1]-k)<((m[k2]-k)))
        {
            for(int i=0;i<n-(k2-1)-2;i++)
                a+="a";
            a+="bb";
             for(int i=0;i<k2-1;i++)
            a+="a";
            //cout<<a<<" ";//<<abs(m[k2-1]-k);
            for(int i=0;i<abs(m[k2-1]-k);i++)
                next_permutation(a.begin(),a.end());
        }
        else{
            for(int i=0;i<n-k2-2;i++)
                a+="a";
            a+="bb";
            for(int i=0;i<k2;i++)
                a+="a";
            for(int i=0;i<(m[k2]-k);i++)
                prev_permutation(a.begin(),a.end());            
        }
        cout<<a<<"\n";
    }
    return 0;
}
