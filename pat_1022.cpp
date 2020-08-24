#include<iostream>
#include<deque>

using namespace std;

int main()
{
	int A, B, n;
	cin >> A >> B >> n;
	deque<int> deq;
	int temp = A + B;
	while (temp >= n)
	{
		deq.push_front(temp%n);
		temp = temp / n;
	}
	deq.push_front(temp);
	for (auto iter = deq.begin(); iter != deq.end(); ++iter)
	{
		cout << *iter;
	}
	cout << endl;
		
}