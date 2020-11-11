//https://pintia.cn/problem-sets/994805260223102976/problems/994805277847568384

#include<iostream>

int main()
{
    int N;
    std::cin>>N;
    int A1,A2,B1,B2;
    int count1=0,count2=0;
    while(N--)
    {
        std::cin>>A1>>A2>>B1>>B2;
        int sum=A1+B1;
        if((sum==A2&&sum==B2)||(sum!=A2&&sum!=B2))
            continue;
        if(sum==A2)
            count2++;
        else if(sum==B2)
            count1++;
    }
    std::cout<<count1<<" "<<count2<<std::endl;
}