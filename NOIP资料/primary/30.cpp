#include <iostream>

using namespace std;

int main()
{
	int n, ans1 = 0, ans2 = 0;
	int list[10][10];
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			list[i][j] = i + j;
		}
	}
	
	for (int i = 1; i < n + 1; i++)
	{
		for (int j=1; j < n + 1; j++)
		{
			if (i == j)
			{
				ans1 += list[i][j];
			}
			if (i + j == n + 1)
			{
				ans2 += list[i][j];
			}
		}
	}
	
	cout << ans1 << ' ' << ans2 << endl;
	
	return 0;
}
