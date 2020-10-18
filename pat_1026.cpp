#include<iostream>
using namespace std;

//主要问题是四舍五入，解决方法是在小数的基础上+0.5在截取整数部分
const int CLK_TCK = 100;
int main()
{
	int c1, c2;
	cin >> c1 >> c2;
	int diff = 0.5+(double)(c2 - c1) / CLK_TCK;
	int hour = diff / 3600;
	diff = diff - hour * 3600;
	int min = diff / 60;
	diff = diff - 60 * min;
	printf("%02d:%02d:%02d", hour, min, diff);
}