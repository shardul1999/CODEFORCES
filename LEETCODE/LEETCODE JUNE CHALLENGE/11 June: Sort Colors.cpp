#include<algorithm>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(auto it=nums.begin();it<nums.begin();it++)
            cout<<*it;
    }
};
