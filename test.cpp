#include<iostream>
#include<vector>
#include<functional>
#include<string>
using namespace std;


int main()
{
    vector<int> vec={1,3,4,5,6,7,8,9,11};
    int i=0,j=vec.size()-1;
    int target=1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(target==vec[mid])
        {
              cout<<"target's pos="<<mid;
              return 0;
        }  
        if(target<vec[mid])
            j=mid-1;
        else
        {
            i=mid+1;
        }
        
    }
    

}