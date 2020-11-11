//https://pintia.cn/problem-sets/994805260223102976/problems/994805291311284224

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    long long p;
    std::cin >> N >> p;
    std::vector<int> nums;
    while (N--)
    {
        int temp;
        std::cin >> temp;
        nums.push_back(temp);
    }
    std::sort(nums.begin(), nums.end(), [](const int a, const int b) { return a < b; });
    int i = 0, j = 0;
    int max = 0;
    while (i < nums.size())
    {
        for (j = i + max; j < nums.size(); j++)
        {
            int M = nums[j];
            int mp = p * nums[i];
            if (M <= mp)
            {
                max = j - i + 1;
            }
            else
            {
                break;
            }
        }
        i++;
    }

    std::cout << max << std::endl;
}