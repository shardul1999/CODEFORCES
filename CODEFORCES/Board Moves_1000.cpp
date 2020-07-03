#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int             long long
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int solve(int n)
{
    if(n==1)
        return 0;
    int a=n/2;
    int sum2=a*(2*a+1)*(a+1)/6;
    return sum2*8;
}
int32_t main()
{
    FIO;
    w(t)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<"\n";
    }

	return 0;
}
