//https://leetcode-cn.com/problems/the-masseuse-lcci/

class Solution {
public:
    int max(int x,int y)
    {
        return x<y?y:x;
    }
    int massage(vector<int>& nums) {
        if(nums.size()==0)return 0;
       int dp0=0;
       int dp1=nums[0];
       for(int i=1;i<nums.size();i++)
       {
           int temp_dp0=max(dp0,dp1);//此时的dp0,dp1是前一个点的两个状态
           int temp_dp1=dp0+nums[i];//同上

           dp0=temp_dp0;//更新dp0,dp1
           dp1=temp_dp1;
       }
        return max(dp0,dp1);
    }
};