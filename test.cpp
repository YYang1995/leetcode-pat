#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<typeid(int).name()<<endl;  //i
    cout<<typeid(double).name()<<endl;  //d
    cout<<typeid(vector<int>).name()<<endl;  //不知道什么玩意儿

    vector<int> vec(10,1);
    // using iter=decltype(vec.begin());
    typedef decltype(vec.begin()) iter;
    // for(iter it=vec.begin();it!=vec.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    std::cout<<"Standard Clib: "<<__STDC_HOSTED__<<std::endl;


    system("pause");
}