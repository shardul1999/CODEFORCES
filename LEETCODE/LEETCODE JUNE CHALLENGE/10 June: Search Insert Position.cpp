#include<algorithm>
#include<vector>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //int n=sizeof(nums)/sizeof(int);
        auto it=lower_bound(nums.begin(),nums.end(),target);
        int x=it-nums.begin();
        return x;
        
    }
};
