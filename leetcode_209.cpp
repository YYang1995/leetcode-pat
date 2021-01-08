// https://leetcode-cn.com/problems/minimum-size-subarray-sum/
#include <vector>
#include <iostream>

using namespace std;

//解法一：暴力法 O(n2)
// class Solution {
// public:
//     int minSubArrayLen(int s, vector<int>& nums) {
//         int min=0;
//         int i,j;
//         for(i=0;i<nums.size();i++)
//         {
//             int temp=0;
//             for(j=i;j<nums.size();j++)
//             {
//                temp+=nums[j];
//                if(temp>=s)
//                     break;
//             }
//             min=(j-i+1)<min?(j-i+1):min;
//         }
//         return min;
//     }
// };

class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int min = nums.size();
        int i = 0, j = 0;
        int sum = 0;
        while (j < nums.size())
        {
            sum += nums[j];
            while (sum >= s)
            {
                min = j - i + 1 < min ? j - i + 1 : min;
                sum -= nums[i++];
            }
            j++;
        }
        if (min > nums.size())
            return 0;
        else
            return min;
    }
};
int main()
{
    Solution so;
    int s = 7;
    vector<int> nums{2, 3, 1, 2, 4, 3};
    int result = so.minSubArrayLen(s, nums);
    cout << result;
}