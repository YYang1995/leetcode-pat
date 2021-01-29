//https://leetcode-cn.com/problems/grumpy-bookstore-owner/

#include <iostream>
#include <vector>

using namespace std;

//leetcode上测试不通过，不知道为什么
// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
//         int i,j;
//         int max=0;
//         for(int m=0;m<grumpy.size();m++)
//         {
//             int sum=0;
//             i=m;
//             j=i+X;
//             int pos=0;
//             while(pos<i)
//             {
//                 if(grumpy[pos]==0)
//                     sum+=customers[pos];
//                 pos++;
//             }
//             while(pos<j)
//             {
//                 sum+=customers[pos];
//                 pos++;
//             }
//             while(pos<grumpy.size())
//             {
//                 if(grumpy[pos]==0)
//                     sum+=customers[pos];
//                 pos++;
//             }
//             if(max<sum)
//                 max=sum;

//         }
//         return max;
//     }
// };

class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int X)
    {
        int i = 0, j = X - 1;
        int sum = 0;
        int max = 0;
        int sum_noangry = 0;
        //统计所有店长没生气的顾客综合 
        for (int m = 0; m < grumpy.size(); m++)
        {
            if (grumpy[m] == 0)
                sum_noangry += customers[m];
        }
        //滑动窗口中最大值，可以参考LeetCode上的解析
        for (int m = 0; m <= grumpy.size() - X; m++)
        {
            sum = 0;
            for (int temp = m + i; temp <= m + j; temp++)
            {
                if (grumpy[temp] == 1)
                    sum += customers[temp];
            }
            if (sum > max)
                max = sum;
        }
        return max + sum_noangry;
    };
};
int main()
{
    vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    int X = 3;
    Solution s;
    int max = s.maxSatisfied(customers, grumpy, X);
    cout << max << endl;
}
