//https://leetcode-cn.com/problems/longest-repeating-character-replacement/
#include <string>
#include <map>
#include <iostream>
using namespace std;

class Solution
{
public:
    //AABABA
    int characterReplacement(string s, int k)
    {
        int left = 0, right = 0;
        map<char, int> map_c;
        int max=0;
        char c;
        while (right < s.size())
        {
            char temp = s[right];
            map_c[temp]++;
            int max_temp = maxValue(map_c, c);
            if ((right - left +1 - max_temp) <= k)
            {
                if(right-left>max)
                    max=right-left;
                right++;
                continue;
            }
            else
            {
                map_c[left]--;
                left++;
            }
            right++;
        }
        return max;
    }
    int maxValue(const map<char, int> &m, char &c)
    {
        int max = 0;
        for (auto temp = m.begin(); temp != m.end(); temp++)
        {
            if (max < (temp->second))
            {
                max = temp->second;
                c = temp->first;
            }
        }
        return max;
    }
};

int main()
{
    Solution s;
    string str = "ABAB";
    int k = 2;
    int re = s.characterReplacement(str, k);
    cout << re;
}