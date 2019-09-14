#include <iostream>
#include <queue>

using namespace std;

int a[105][105] = {0};

struct pos
{
	int x;
	int y;
}b[105];

void bfs(int p, int n , int y)
{
	int num = 0;
	for (int i = 1; i <= n; i++)
	{
		//cout << a[p][i] << endl;
		if (a[p][i] == 1)
		{
			//cout << p << i << endl;	
			b[num].x = p;
			b[num].y = i;
			num++;
 			if (p == y)return;
			else bfs(i, n, y);
		}
	}
}

int main()
{
	//queue<int> q;
	int n, x, y;
	
	cin >> n >> x >> y;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}	
	}	
	
	bfs(x, n, y);
	
	for (int i = 0; i < 105; i++)
	{
		if (b[i].x != 0 && b[i].y != 0)
		cout << b[i].x << ' ' << b[i].y << endl;
	}
} 
