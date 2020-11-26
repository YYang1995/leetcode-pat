//https://leetcode-cn.com/problems/transpose-matrix/

#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> trans;
        int rows=A.size();
        int cols=A[0].size();
        for(int j=0;j<cols;j++)
        {
            vector<int> temp;
            for(int i=0;i<rows;i++)
            {
                temp.push_back(A[i][j]);
            }
            trans.push_back(temp);
        }
        return trans;
    }
};