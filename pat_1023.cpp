#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N = 10;
	vector<int> vec;
	//i��ʾ0��9���֣�temp��ʾi���ֵĴ���
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
		//�����λ��0�����ҵ���һ������0����������λ������ֵ
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