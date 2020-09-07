class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxi2=INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            if(maxi2<a[i])
                maxi2=a[i];
        }
        int maxi=0,maxi_now=0;
      for(int i=0;i<a.size();i++)
      {
          maxi=maxi+a[i];
          if(maxi_now<maxi)
              maxi_now=maxi;
          if(maxi<0)
              maxi=0;
      }
      //cout<<maxi_now<<"\n";
     if(maxi2<0)
         return maxi2;
        else
      return maxi_now;
    }
};
