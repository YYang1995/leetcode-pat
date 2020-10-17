//https://leetcode-cn.com/problems/three-steps-problem-lcci

class Solution {
public:
    int waysToStep(int n) {
       long dp1=1,dp2=2,dp3=4,dp4;
       if(n<=2) return n;
       if(n==3) return dp3;
       
       for(int i=3;i<n;i++)
       {
           dp4=(dp3+dp2+dp1)%1000000007;
           dp1=dp2;
           dp2=dp3;
           dp3=dp4;
       }
       return dp4;

    }
};
