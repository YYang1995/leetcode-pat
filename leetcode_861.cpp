//https://leetcode-cn.com/problems/score-after-flipping-matrix/
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;


class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        if(A.size()==0)
            return 0;
        int rows=A.size();
        int cols=A[0].size();
        //第一列
        for(int i=0;i<rows;i++)
        {
            if(A[i][0]==0)
            {
                //行反转
                for(int j=0;j<cols;j++)
                {
                    if(A[i][j]==0)
                        A[i][j]=1;
                    else
                        A[i][j]=0;
                }   
            }
        }
        //从第二列开始检查
        for(int j=1;j<cols;j++)
        {
            int num_0=0,num_1=0;
            for(int i=0;i<rows;i++)
            {
                if(A[i][j]==0)
                    num_0++;
                else
                    num_1++;
            }
            
            if(num_0>num_1)
                reverseCol(A,j);g
        }
        int sum=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(A[i][j]==1)
                    sum+=pow(2,cols-1-j);
            }
        }
        return sum;
    }
    //列反转
    void reverseCol(vector<vector<int>> &A,int j)    
    {
        for(int i=0;i<A.size();i++)
        {
            if(A[i][j]==0)
                A[i][j]=1;
            else
                A[i][j]=0;
        }
    }

};

int main()
{
    Solution s;
    vector<vector<int>> A{{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    cout<<s.matrixScore(A);
}