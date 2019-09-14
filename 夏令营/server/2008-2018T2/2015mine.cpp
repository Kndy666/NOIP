#include <iostream>
#include <cstdio>

using namespace std;

char _mine[102][102];

char Calc(int x, int y)
{
	int cc = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (_mine[i][j] == '*')
				cc++;
		}
	} 
	return cc + '0';
}

int main()
{
	freopen("mine.in", "r", stdin);
	freopen("mine.out", "w", stdout);
	
	int n, m;	
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> _mine[i][j];
		}
	} 
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (_mine[i][j] == '?')
				_mine[i][j] = Calc(i, j);
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << _mine[i][j];
		}
		cout << endl;
	}
	return 0;
}
