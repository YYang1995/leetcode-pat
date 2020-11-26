//https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032

#include<iostream>
#include<map>

int main()
{
    int N;
    std::cin>>N;
    int no,score;
    std::map<int,int> infoMap;    
    while(N--)
    {
        std::cin>>no>>score;
        if(infoMap.find(no)==infoMap.end())
        {
            infoMap[no]=score;
        }else{
            infoMap[no]+=score;
        }
    }
    int max=-1;
    int school=-1;
    for(auto temp:infoMap)
    {
        if(temp.second>max)
        {
            max=temp.second;
            school=temp.first;
        }
    }
    std::cout<<school<<" "<<max<<std::endl;
}