#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	string number;
	cin >> number;
	map<int, int> nmap;
	for (auto iter = number.begin(); iter != number.end(); ++iter)
	{
		int temp = (*iter) - '0';
		if (nmap.find(temp) == nmap.end())
		{
			//nmap.insert(pair<int, int>(temp, 1));   两种方式都可
			nmap[temp] = 1;
		}
		else {
			nmap[temp]++;
		}
	}
	for (auto iter = nmap.begin(); iter != nmap.end(); ++iter)
	{
		cout << iter->first << ":" << iter->second << endl;
	}

	

}