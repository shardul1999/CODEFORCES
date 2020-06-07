class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int left[10000]={0},x;
        left[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            int x=1;
            for(int j=0;j<=i;j++)
            {
                if(nums[j]<nums[i])
                    x=max(x,left[j]+1);
            }
            left[i]=x;
        }
        int max1=0;
        for(int i=0;i<nums.size();i++)
        {
            max1=max(max1,left[i]);
        }
        return max1;
        
    }
};
