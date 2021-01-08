//https://leetcode-cn.com/problems/search-in-rotated-sorted-array/
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto result=find(nums.begin(),nums.end(),target);
        if(result==nums.end())
            return -1;
        else
            return result-nums.begin();
    }
};