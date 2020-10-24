#include<iostream>
#include<string>

using namespace std;

int main()
{
    string birth="1814/09/06";
    // int year=stoi(birth.substr(0,4));
    // int  month=stoi(birth.substr(5,7));
    // int day=stoi(birth.substr(8,10));
    string year=birth.substr(0,4);
    string month=birth.substr(5,2);
    string day=birth.substr(8,2);
    cout<<year<<endl;
    cout<<month<<endl;
    cout<<day<<endl;
}

