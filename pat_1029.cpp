//https://pintia.cn/problem-sets/994805260223102976/problems/994805292322111488

#include<iostream>
#include<string>
#include<map>

int main()
{
    std::map<char,int> loss;
    std::string str1,str2;
    std::cin>>str1>>str2;
    char bad[81];
    int num=0;
    for(auto iter=str1.begin();iter!=str1.end();++iter)
    {
        int  index=str2.find(*iter);
        if(index==-1)
        {
            char temp;
            if(*iter>'a'&&*iter<'z')  
            {
                temp=*iter+('A'-'a');
            }
            else{
                temp=*iter;
            }
            if(loss.find(temp)==loss.end())
            {
                loss.insert(std::pair<char,int>(temp,1));
                bad[num++]=temp;
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        std::cout<<bad[i];
    }
    std::cout<<std::endl;
            
}
