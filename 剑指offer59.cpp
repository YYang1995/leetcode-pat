//https://leetcode-cn.com/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof/
#include <vector>
#include <iostream>
#include <deque>

using namespace std;

//暴力解法，时间复杂度为O(nk)
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> max_vector;
//         if(nums.empty())
//             return max_vector;
//         for(auto iter=nums.begin();iter!=nums.end()-k+1;++iter)
//         {
//             int max=*iter;
//             for(auto tempIter=iter;tempIter!=iter+k;tempIter++)
//             {
//                 if((*tempIter)>max)
//                 {
//                     max=*tempIter;
//                 }
//             }
//             max_vector.push_back(max);
//         }
//         return max_vector;
//     }
// };

#include<iostream>
#include<vector>	
#include<deque>
using namespace std;

class Solution
{
public:
	vector<int> maxSlidingWindow(vector<int> &nums, int k)
	{
		vector<int> max_vector;
		if (nums.empty())
			return max_vector;
		deque<int> deq;
		deq.push_back(nums[0]);
		//初始化滑动窗口
		for (int i = 1; i < k; i++)
		{
			if (nums[i] > deq[0])
			{
				int temp = nums[i];
				deq.clear();
				deq.push_back(temp);
			}
			else
			{
				while (!deq.empty()&&deq.back() < nums[i])
				{
					deq.pop_back();
				}
				deq.push_back(nums[i]);
			}

		}
		max_vector.push_back(deq.front());
		//已经形成滑动窗口
		for (auto iter = nums.begin() + k; iter != nums.end(); ++iter)
		{
			if (deq.size() == k)
			{
				deq.pop_front();
			}
			if (deq.front() == *(iter - k))
				deq.pop_front();
			while (!deq.empty()&&deq.back() < *iter)
			{
				deq.pop_back();
			}
			deq.push_back(*iter);
			max_vector.push_back(deq.front());
		}
		return max_vector;
	}
};

int main()
{
	Solution s;
	vector<int> vec = { 1,3,1,2,0,5 };
	auto result = s.maxSlidingWindow(vec, 3);
	for (auto temp : result)
		cout << temp << " ";
}