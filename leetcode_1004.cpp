//https://leetcode-cn.com/problems/max-consecutive-ones-iii/
#include <vector>
#include <deque>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &A, int K)
    {
        int max = 0;
        int count = 0;
        deque<int> deq;
        for (auto iter = A.begin(); iter != A.end(); ++iter)
        {
            if (*iter == 1)
            {
                deq.push_back(1);
            }
            else if (*iter == 0)
            {
                if (count < K)
                {
                    deq.push_back(0);
                    count++;
                    if (deq.size() > max)
                        max = deq.size();
                }
                else if(count==K)
                {
                    if (deq.front() == 0)
                    {
                        deq.pop_front();
                        deq.push_back(0);
                    }
                    else
                    {
                       while(!deq.empty()&&deq.front()==0)
                            deq.pop_front(); 
                    }
                }
            }
        }
        return max;
    }
};