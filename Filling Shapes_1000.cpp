#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int             long long

int solve(int n)
{
    if(n%2==0)
        return pow(2,n/2);
    else
        return 0;
}
int32_t main()
{

        int n;
        cin>>n;
        cout<<solve(n);
	return 0;
}
