#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long

int solve(string s)
{
    int n=s.size();
    bool dp[1001][1001]={0};
    for(int i=0;i<n;i++)
        dp[i][i]=true;

    for(int i=0;i<n-1;i++)
    if(s[i]==s[i+1])
    dp[i][i+1]=true;

    for(int d=2;d<n;d++)
     {
         int i=0,j=d;
        while(j<n)
        {
            if( s[i]==s[j] && dp[i+1][j-1])
            dp[i][j]=true;

            i++;j++;
        }
     }
    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(dp[i][j])ans++;
    return ans;
}
int32_t main()
{
    {
        string s;
        cin>>s;
        cout<<solve(s)<<"\n";
    }

	return 0;
}
