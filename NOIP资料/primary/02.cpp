#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int m, n, a, b, c, sum = 0;
	cin >> m >> n;
	for (int i = m; i < n + 1; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		sum = pow(a, 3) + pow(b, 3) + pow(c, 3);
		if (i == sum)
		{
			cout << i << ' ';
		}
	}
	cout << endl;
	return 0;
}
