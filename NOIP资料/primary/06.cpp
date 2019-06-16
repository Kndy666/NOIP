#include <iostream>

using namespace std;

int main()
{
	int n, tmp = 0, res = 0;
	cin >> n;
	tmp = n;
	while (tmp > 0)
	{
		res = res * 10 + tmp % 10;
		tmp /= 10; 
	}
	if (res == n)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
