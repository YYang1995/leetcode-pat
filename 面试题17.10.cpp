//https://leetcode-cn.com/problems/find-majority-element-lcci/
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int element=nums[nums.size()/2];
        int lindex,rindex;
        int i=0,j=nums.size()-1;
        while(nums[i]!=element)
            i++;
        while(nums[j]!=element)
            j--;
        if(j-i+1>nums.size()/2)
            return element;
        else
        {
            return -1;
        }
        
    
};