#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	for (int i = m * 100; i < m * 100 + 100; i++)
	{
		int res = 0;
		if (i % n == 0)
		{
			res = i % 100;
			if (res == 0)
			{
				cout << "00" << ' ';
			}
			else
			{
				cout << res << ' ';
			}
		}
	}
	cout << endl;
	return 0;
}
