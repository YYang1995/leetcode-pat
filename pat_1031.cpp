//https://pintia.cn/problem-sets/994805260223102976/problems/994805290334011392

#include<iostream>
#include<string>
#include<vector>
#include<map>
int main()
{
    std::vector<std::string> init,result;
    int N;
    std::cin>>N;
    std::map<int,char> zm;
    zm.insert(std::pair<int,char>(0,'1'));
    zm.insert(std::pair<int,char>(1,'0'));
    zm.insert(std::pair<int,char>(2,'x'));
    zm.insert(std::pair<int,char>(3,'9'));
    zm.insert(std::pair<int,char>(4,'8'));
    zm.insert(std::pair<int,char>(5,'7'));
    zm.insert(std::pair<int,char>(6,'6'));
    zm.insert(std::pair<int,char>(7,'5'));
    zm.insert(std::pair<int,char>(8,'4'));
    zm.insert(std::pair<int,char>(9,'3'));
    zm.insert(std::pair<int,char>(10,'2'));

    int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    while(N--)
    {
        std::string temp;
        std::cin>>temp;
        init.push_back(temp);
    }
    int total=init.size();
    int count=0;
    for(auto iter=init.begin();iter!=init.end();iter++)
    {
        int sum=0;
        std::string temp=*iter;
        bool flag=false;
        int i;
        for(i=0;i<temp.size()-1;i++)
        {
             
            if(temp[i]<='9'&&temp[i]>='0')
            {
                sum+=(temp[i]-'0')*w[i];
                flag=true;
            }else{
                result.push_back(temp);
                flag=false;
                break;
            }
        }
        if(flag)
        {
           
            int z=sum%11;
            char M=zm.at(z);
            if(M!=temp[i])
            {
                result.push_back(temp);
            }else{
                count++;
            }
        }
    }
    if(count==total)
        std::cout<<"All passed"<<std::endl;
    else{
        for(auto iter:result)
            std::cout<<iter<<std::endl;
    }

}