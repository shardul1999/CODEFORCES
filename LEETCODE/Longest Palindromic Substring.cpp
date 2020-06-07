class Solution {
public:
    string longestPalindrome(string s) {
        if( s=="")
            return "";
        int n=s.size();
        bool dp[1001][1001]={0};

        for(int i=0;i<n;i++)
            dp[i][i]=1;

        for(int i=0;i<n-1;i++)
            if(s[i]==s[i+1])
                dp[i][i+1]=true;

        for(int d=2;d<n;d++)
        {
            int i=0,j=d;
            while(j<n)
            {
                if(s[i]==s[j] && dp[i+1][j-1])
                    dp[i][j]=true;
                i++;j++;
            }
        }
        int m=0,p=0;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dp[i][j] && abs(p-m)<=abs(j-i))
                {
                    m=i;
                    p=j;
                    //cout<<m<<" "<p<<endl;
                }
            }

        }
       // cout<<m<<" "<<p;

     string g="";
     for(int i=m;i<=p;i++)
        g+=s[i];
    return g;
    }
};
