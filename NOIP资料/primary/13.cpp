#include <iostream>

using namespace std;

int Reverse(int n)
{
	int res = 0;
	while (n > 0)
	{
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int main()
{
	int num;
	cin >> num;
	cout <<	Reverse(num) << endl;
	return 0;
}
