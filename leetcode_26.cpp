//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
#include<vector>
using std::vector;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int>::iterator p=nums.begin(),q=nums.begin();
        while(p!=nums.end()&&q!=nums.end())
        {
            if(*q!=*p)
            {
                *(++p)=*q;
                
            }
                
        }
       return p-nums.begin()+1;
    }
};