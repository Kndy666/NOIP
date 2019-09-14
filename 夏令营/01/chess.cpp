#include <iostream>
#include <cstdio>

using namespace std;

int x[4] = {0, 1, 0, -1};
int y[4] = {-1, 0, 1, 0};

void dfs(int x, int y, int cost, bool magic, int lastX, int lastY)
{
	int now_x = x;
	int now_y = y;
	int coin = 0;
	for (int i = 0; i < 4; i++)
	{
		if (x + x[i] == m || y + y[i] == m || x + x[i] < 1 || y + y[i] < 1)return;
		else
		{
			now_x += x[i];
			now_y += y[i];
			
			if (arr[now_x][now_y] != 2)
			{
				if (arr[lastX][lastY] != arr[now_x][now_y])
				{
					coin++;
					dfs(now_x, now_y, coin, false, x, y);
				}
				else
				{
					dfs(now_x, now_y, coin, false, x, y);
				}		
			} 
			else
			{
				if(magic)return;
				else
				{
					coin += 2;
					arr[now_x][now_y] = arr[lastX][lastY];
					dfs(now_x, now_y, coin, true, x, y);
					arr[now_x][now_y] = 2;	
				}
			}
			
			if (coin > cost)
			{
				coin = cost;
			}
		}		 
	} 
}

int main()
{
	freopen("chess.in", "r", stdin);
	
	int m, n;
	int arr[105][105];
	cin >> m >> n;
	
	for (int i = 1; i <= 105; i++)
	{
		for (int j = 1; j <= 105; j++)
		{
			arr[i][j] = 3;//╠ъ╫Г 
		}
	}
	
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			arr[i][j] = 2;//нчи╚ 
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
			int x, y;
			cin >> x >> y;
			cin >> arr[x][y];
	}
	

	
	dfs(1, 1, cost, false, 1, 1); 
	
	
}
