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

void solve(int *a1, int *a2, int m, int n)
{
    int i=m-1;
    int j=n-1;
    //cout<<i<<" "<<j<<endl;
    int ans=0;
    while(1)
    {
        if(i==-1)
        {
            for(int k=j;k>=0;k--)
                ans+=((m+1)*a2[k]);
                //cout<<"i==-1:"<<ans<<endl;
            break;
        }
        if(j==-1)
        {
            for(int k=i;k>=0;k--)
                ans+=((n+1)*a1[k]);
                //cout<<"j==-1:"<<ans<<endl;
            break;
        }
        if(a1[i]>a2[j])
        {
            ans+=((n-j)*a1[i]);
            i--;
            //cout<<"a1[i]>a2[j]:"<<ans<<endl;
        }
        else if(a1[i]==a2[j])
        {
            //cout<<"a1[i]==a2[j]"<<endl;
            if(i>j)
            {
                ans+=((n-j)*a1[i]);
                i--;
            }
            else
            {
                ans+=((m-i)*a2[j]);
                j--;
            }
        }
        else
        {
            //cout<<"a1[i]<a2[j]"<<endl;
            ans+=((m-i)*a2[j]);
            j--;
        }
    }
        cout<<ans%(1000000007)<<"\n";
}
 
int32_t main()
{
  FIO;
  w(t)
  {
      int m,n;cin>>m>>n;
      int a1[m-1];
      int a2[n-1];
      
      for(int i=0;i<m-1;i++)
      {
        cin>>a1[i];
      }
      
      for(int i=0;i<n-1;i++)
      {
        cin>>a2[i];
      }
      sort(a1,a1+m-1);
      sort(a2,a2+n-1);
    
      solve(a1,a2,m-1,n-1);
      
  }
  return 0;
}
