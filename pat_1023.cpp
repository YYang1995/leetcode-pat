#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N = 10;
	vector<int> vec;
	//i表示0·9数字，temp表示i出现的次数
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		if (temp == 0)
			continue;
		for (int j = 0; j < temp; j++)
		{
			vec.push_back(i);
		}
	}
	if (vec[0] == 0)
	{
		//如果首位是0，则找到第一个不是0的数，与首位交换其值
		int k = 0;
		while (k < vec.size()) {
			if (vec[k] != 0) {
				vec[0] = vec[k];
				vec[k] = 0;
				break;
			}
			else {
				k++;
			}
		}
	}
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter;
	}
}