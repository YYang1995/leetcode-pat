// https://leetcode-cn.com/problems/find-the-winner-of-an-array-game/
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int getWinner(vector<int> &arr, int k)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            int j = i + 1;
            if(i==0)
                count=0;
            while (count < k)
            {
                int index = j % arr.size();
                if (index == i)
                    return arr[i];
                if (arr[i] > arr[index])
                {
                    count++;
                    j++;
                    if (count == k)
                        return arr[i];
                }
                else
                {
                    if(index==(i+1))
                    {
                        count=1;
                        if(count==k)
                            return arr[index];
                    }
                    else count=0;
                    break;
                }
            }
        }
        return -1;
    }
};