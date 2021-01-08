//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii
#include <vector>
using namespace std;

class Solution
{
public:
    int removoDup(vector<int> &nums, int begin, int end, int target)
    {
        int mid = (begin + end) / 2;
        if (target == nums[mid])
            return mid;
        if (nums[begin] < nums[mid])
        {
            //二分
            int i = begin, j = mid - 1;
            while (i <= j)
            {
                int temp_mid = (i + j) / 2;
                if (nums[temp_mid] == target)
                    return temp_mid;
                else if (target < nums[temp_mid])
                    j = mid - 1;
                else
                    i = mid + 1;
            }

            begin = mid + 1;
            return removoDup(nums, begin, end, target);
        }
        else if (nums[mid] < nums[end])
        {
            //二分
            int i = mid+1, j = end;
            while (i <= j)
            {
                int temp_mid = (i + j) / 2;
                if (nums[temp_mid] == target)
                    return temp_mid;
                else if (target < nums[temp_mid])
                    j = mid - 1;
                else
                    i = mid + 1;
            }

            end = mid - 1;
            return removoDup(nums, begin, end, target);
        }
    };
    int search(vector<int>& nums, int target) 
    {
        return this->removoDup(nums,0,nums.size()-1,target);
    }
};