#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define int             long long
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define ll long long


int32_t main()
{
    FIO;
    w(t)
    {
   vector<int> v;
   int n,l;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>l;
       v.push_back(l);
   }
   next_permutation(v.begin(),v.end());
   for(int x:v)
   {
       cout<<x<<" ";
   }
   cout<<"\n";
    }

	return 0;
}
