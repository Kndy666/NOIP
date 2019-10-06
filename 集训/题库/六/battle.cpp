#include <iostream>

#define canRun 1
#define noRun 0 

using namespace std;

int a[1005][1005];
int b[1005][1005];

void debug()
{
	for (int q = 0; q <= 2 + 1; q++)
	{
		for (int p = 0; p <= 2 + 1; p++)
		{
			cout << a[q][p] << ' ';
		}
		cout << endl;
	}
				
	cout << endl;
	
	/*			
	for (int q = 0; q <= 2 + 1; q++)
	{
		for (int p = 0; p <= 2 + 1; p++)
		{
			cout << b[q][p] << ' ';
		}
		cout << endl;
	}
	*/
}

int main()
{
	int x[4] = {1, 0, -1, 0};//E S W N 
	int y[4] = {0, 1, 0, -1};
	
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int n, x1, y1, x2, y2, d1, d2;
		cin >> n >> x1 >> y1 >> d1 >> x2 >> y2 >> d2;
		
		x1++;
		x2++;
		y1++;
		y2++;
		
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
			{
				a[i][j] = canRun;
				b[i][j] = canRun;
			}
		while(1)
		{		
			a[x1][y1] = noRun;
			x1 += x[d1];
			y1 += y[d1];			
			
			int tmp = 0;
			while (a[x1][y1] == noRun && tmp <= 3)
			{
				//if (!d1)d1 = 3;
				//else d1--;
				d1++;
				d1 %= 4;
				tmp++;	
			}
			
			b[x2][y2] = noRun;
			x2 += x[d2];
			y2 += y[d2];
			
			tmp = 0;
			while (b[x2][y2] == noRun && tmp <= 3)
			{
				if (!d2)d2 = 3;
				else d2--;
				tmp++;
				//d2++;
				//d2 %= 4;	
			}
			//debug();
			
			if (x1 == x2 && y1 == y2)
			{
				cout << x1 - 1  << ' ' << y1 - 1 << endl;
				break; 
			}
			
			if (a[x1 + 1][y1] == noRun && a[x1 - 1][y1] == noRun && 
			a[x1][y1 + 1] == noRun && a[x1][y1 - 1] == noRun &&
			b[x1 + 1][y1] == noRun && b[x1 - 1][y1] == noRun &&
			b[x1][y1 + 1] == noRun && b[x1][y1 - 1] == noRun)
			{
				debug();	
				cout << -1 << endl;
				break;
			}
			
		}	
	}
}
