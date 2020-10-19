#include<string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
       int temp=0;
       int i=0;
       int j=temp;
       for(i=0;i<s.size();i++)
       {
           for(j=temp;j<t.size();j++)
           {
               if(s[i]==t[j])
               {
                   temp=j+1;
                   break;
               }
           }
           if(j==t.size())
                return false;
       }
       return true;
        
    }
};