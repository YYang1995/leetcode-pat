//https://leetcode-cn.com/problems/contiguous-sequence-lcci/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int *p=new int[nums.size()];
        p[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(p[i-1]<0)
                p[i]=nums[i];
            else
                p[i]=p[i-1]+nums[i];
        }
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(max<p[i])
                max=p[i];
        }
        return max;
    }
};