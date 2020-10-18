//https://leetcode-cn.com/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof/
//经典dp题

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp;
        dp.resize(nums.size());
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(dp[i-1]<0)
                dp[i]=nums[i];
            else
            {
                dp[i]=dp[i-1]+nums[i];
            }
        }
        int max=dp[0];
        for(auto i:dp)
        {
            if(max<i)
                max=i;
        }
        return max;
    }
};