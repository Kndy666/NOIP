#include <iostream>

using namespace std;

struct room
{
	int state;
	int num;
};

room r[10005][105];

int main()
{
	int n, m, top = 0, ans = 0;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> r[i][j].state >> r[i][j].num;	
		}
	}
	
	int enter;
	cin >> enter;
	n++;
	bool flag = false; 
	//cout << r[top][enter].num;
	while(n--)
	{
		int cc = enter + 1, cc1 = 0;
		int ste = r[top][enter].state;
        int t = r[top][enter].num;
		if (flag)
		{
			top++;
			ans += t;
			ans %= 20123;
			flag = false;
			continue;
		}
		//cout << t << ' '; 
		ans += t;
		ans %= 20123; 
		if (ste == 0)
		{
			while(1)
			{
				cout << "cc: " << cc << endl << "cc1: " << cc1 << endl << "state: " << r[top][cc].state << endl;
				cc++;
				cc %= m;
				if(r[top][cc].state == 1)cc1++;
				if(cc1 == t)
				{
					enter = r[top][cc].num;
					flag = true;
					break;	
				}
			}
		}
		cout << "cc: " << cc << endl << "cc1: " << cc1 << endl << "state: " << r[top][cc].state << endl << "enter: "  << enter <<endl;
	}
	
	cout << ans % 20123 << endl;
}
