#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

bool Cmp(int a, int b)
{
	if (a != b)
	{
		return a < b;
	}
}

int main()
{
	freopen("sortque.in", "r", stdin);
	freopen("sortque.out", "w", stdout);
	int n, m, tj[1005], dj[1005];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> tj[i];
	}
	for (int j = 0; j < m; j++)
		{
			cin >> dj[j];
		}
	for (int i = n; i < m + n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tj[i] = dj[j];
			break;
		}
	}
	sort(tj, tj + m + 1, Cmp);
	for (int k = 0; k < m + n; k++)
	{
		if (k = m + n - 1)
		{
			cout << tj[k] << " ";
		}
		else
		{
			cout << tj[k] << endl;
		}
	}
	return 0;
}
