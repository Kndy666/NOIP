#include <iostream>

using namespace std;

int a[105][105];

int main()
{
	int m, n;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)cin >> a[i][j];
		
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)cout << a[j][i] << ' ';
		cout << endl;
	}
	
}
