#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct Pos
{
	int x;
	int y;
};

int main()
{
	bool check[52][52] = {false};
	int w, h, linX, linY, ans = 0;
	int x[5] = {1, -1, 0, 0}, y[5] = {0, 0, 1, -1};
	queue<Pos> list;
	char ch;
	
	cin >> h >> w;
	
	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j<= h; j++)
		{
			cin >> ch;
			if (ch == '.')
				check[i][j] = true;
			else if (ch == '@')
			{
				ans++;
				linX = i; 
				linY = j;
				check[i][j] = false;
			}
			else
				check[i][j] = false;				
		}
	}
	
	Pos tmp;
	tmp.x = linX;
	tmp.y = linY;
	list.push(tmp);
	while (!list.empty())
	{	
		Pos solo = list.front();
		for (int m = 0; m < 4; m++)
		{		
			if (check[solo.x + x[m]][solo.y + y[m]])
			{
				ans++;
				linX = solo.x + x[m];
				linY = solo.y + y[m];
				tmp.x = linX;
				tmp.y = linY;
				list.push(tmp);
				check[linX][linY] = false;				
			}
		}
		list.pop();
	}
	cout << ans << endl;
	return 0;
} 
