//https://leetcode-cn.com/problems/median-of-two-sorted-arrays/
#include <vector>
using std::vector;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int count = 0;
        int i = 0, j = 0;
        int total = nums1.size() + nums2.size();
        int mid = total / 2;
        while(i<nums1.size()&&j<nums2.size())
        {

            if(nums1[i]<nums2[j])
            {
                i++;
                count++;
                if(count==mid)
                    return nums1[i];
            }   
            else
            {
                j++;
                count++;
                if(mid==count)
                    return nums2[j];
            }
        }
        if(i>=nums1.size())
        {
            while(j<nums2.size()&&mid!=count)
            {
                j++;
                count++;
            }
            return nums2[j];
        }
        if(j>=nums2.size())
        {
            while(i<nums1.size()&&mid!=count)
            {
                j++;
                count++;
            }
            return nums1[i];
        }
    }
};