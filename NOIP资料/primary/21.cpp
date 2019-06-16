#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int res = i * j;
			cout << i << '*' << j << '=' << res;
			if (res < 10)
			{
				cout << ' ';
			}
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
