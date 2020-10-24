#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int N;
    char c;
    cin>>N>>c;
    int line=(int)sqrt((N+1)/2);
    int more=N-(2*line*line-1);
    for(int i=0;i<line;i++)
    {
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int j=0;j<2*(line-i)-1;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<line;i++)
    {
        for(int j=0;j<line-i-1;j++)
            cout<<" ";
        for(int j=0;j<2*i+1;j++)
            cout<<"*";
        cout<<endl;
    }
    if(more)
        cout<<more<<endl;
}